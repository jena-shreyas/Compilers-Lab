#include "assn6_20CS30037_20CS30049_translator.h"
#include <fstream>
#include <sstream>
#include <stack>
using namespace std;

// External variables
extern SymbolTable SymTbl_Global;
extern SymbolTable *SymTbl;
extern QuadArray QuadList;

// Declare global variables
vector<string> stringConsts;
map<int, string> labels;
stack<pair<string, int>> parameters;
int labelCount = 0;
string funcRunning = "";
string filename;

// Prints the global information to the assembly file
void printGlobal(ofstream &asm_file)
{
    for (auto it = SymTbl_Global.symbols.begin(); it != SymTbl_Global.symbols.end(); it++)
    {
        Symbol *sym = *it;
        if (sym->type.type == CHAR && sym->name[0] != 't')
        {
            if (sym->initVal != NULL)
            {
                asm_file << "\t.globl\t" << sym->name << endl;
                asm_file << "\t.data" << endl;
                asm_file << "\t.type\t" << sym->name << ", @object" << endl;
                asm_file << "\t.size\t" << sym->name << ", 1" << endl;
                asm_file << sym->name << ":" << endl;
                asm_file << "\t.byte\t" << sym->initVal->c << endl;
            }
            else
                asm_file << "\t.comm\t" << sym->name << ",1,1" << endl;
        }
        else if (sym->type.type == INT && sym->name[0] != 't')
        {
            if (sym->initVal != NULL)
            {
                asm_file << "\t.globl\t" << sym->name << endl;
                asm_file << "\t.data" << endl;
                asm_file << "\t.align\t4" << endl;
                asm_file << "\t.type\t" << sym->name << ", @object" << endl;
                asm_file << "\t.size\t" << sym->name << ", 4" << endl;
                asm_file << sym->name << ":" << endl;
                asm_file << "\t.long\t" << sym->initVal->i << endl;
            }
            else
                asm_file << "\t.comm\t" << sym->name << ",4,4" << endl;
        }
    }
}

// Prints all the strings used in the program to the assembly file
void printStrings(ofstream &asm_file)
{
    
    asm_file << ".section\t.rodata" << endl;
    int i = 0;

    for (auto it = stringConsts.begin(); it != stringConsts.end(); it++)
    {
        asm_file << ".LC" << i++ << ":" << endl;
        asm_file << "\t.string " << *it << endl;
    }
}

// Generates labels for different targets of goto statements
void setLabels()
{
    int i = 0;
    for (auto it = QuadList.quads.begin(); it != QuadList.quads.end(); it++)
    {
        if (it->op == GOTO || (it->op >= GOTO_EQ && it->op <= IF_FALSE_GOTO))
        {
            int target = atoi((it->result.c_str()));
            if (!labels.count(target))
            {
                string labelName = ".L" + to_string(labelCount++);
                labels[target] = labelName;
            }
            it->result = labels[target];
        }
    }
}

// Generates the function prologue to be printed before each function
// Generic tasks like allocating space for variables on the stack are performed here
void generatePrologue(int memBind, ofstream &asm_file)
{
    int width = 16;
    asm_file << endl
          << "\t.text" << endl;
    asm_file << "\t.globl\t" << funcRunning << endl;
    asm_file << "\t.type\t" << funcRunning << ", @function" << endl;
    asm_file << funcRunning << ":" << endl;
    asm_file << "\tpushq\t"
          << "%rbp" << endl;
    asm_file << "\tmovq\t"
          << "%rsp, %rbp" << endl;
    asm_file << "\tsubq\t$" << (memBind / width + 1) * width << ", %rsp" << endl;
}

// Generates assembly code for a given three address quad
void quadCode(Quad q, ofstream &asm_file)
{
    string strLabel = q.result;
    bool hasStrLabel = (q.result[0] == '.' && q.result[1] == 'L' && q.result[2] == 'C');
    string toPrint1 = "", toPrint2 = "", toPrintRes = "";
    int off1 = 0, off2 = 0, offRes = 0;

    Symbol *loc1 = SymTbl->lookup(q.arg1);
    Symbol *loc2 = SymTbl->lookup(q.arg2);
    Symbol *loc3 = SymTbl->lookup(q.result);
    Symbol *glb1 = SymTbl_Global.searchGlobal(q.arg1);
    Symbol *glb2 = SymTbl_Global.searchGlobal(q.arg2);
    Symbol *glb3 = SymTbl_Global.searchGlobal(q.result);

    if (SymTbl != &SymTbl_Global)
    {
        if (glb1 == NULL)
            off1 = loc1->offset;
        if (glb2 == NULL)
            off2 = loc2->offset;
        if (glb3 == NULL)
            offRes = loc3->offset;

        if (q.arg1[0] < '0' || q.arg1[0] > '9')
        {
            if (glb1 != NULL)
                toPrint1 = q.arg1 + "(%rip)";
            else
                toPrint1 = to_string(off1) + "(%rbp)";
        }
        if (q.arg2[0] < '0' || q.arg2[0] > '9')
        {
            if (glb2 != NULL)
                toPrint2 = q.arg2 + "(%rip)";
            else
                toPrint2 = to_string(off2) + "(%rbp)";
        }
        if (q.result[0] < '0' || q.result[0] > '9')
        {
            if (glb3 != NULL)
                toPrintRes = q.result + "(%rip)";
            else
                toPrintRes = to_string(offRes) + "(%rbp)";
        }
    }
    else
    {
        toPrint1 = q.arg1;
        toPrint2 = q.arg2;
        toPrintRes = q.result;
    }

    if (hasStrLabel)
        toPrintRes = strLabel;

    if (q.op == ASSIGN)
    {
        if (q.result[0] != 't' || loc3->type.type == INT || loc3->type.type == POINTER)
        {
            if (loc3->type.type != POINTER)
            {
                if (q.arg1[0] < '0' || q.arg1[0] > '9')
                {
                    asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
                    asm_file << "\tmovl\t%eax, " << toPrintRes << endl;
                }
                else
                    asm_file << "\tmovl\t$" << q.arg1 << ", " << toPrintRes << endl;
            }
            else
            {
                asm_file << "\tmovq\t" << toPrint1 << ", %rax" << endl;
                asm_file << "\tmovq\t%rax, " << toPrintRes << endl;
            }
        }
        else
        {
            int temp = q.arg1[0];
            asm_file << "\tmovb\t$" << temp << ", " << toPrintRes << endl;
        }
    }
    else if (q.op == U_MINUS)
    {
        asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        asm_file << "\tnegl\t%eax" << endl;
        asm_file << "\tmovl\t%eax, " << toPrintRes << endl;
    }
    else if (q.op == ADD)
    {
        if (q.arg1[0] > '0' && q.arg1[0] <= '9')
            asm_file << "\tmovl\t$" << q.arg1 << ", %eax" << endl;
        else
            asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        if (q.arg2[0] > '0' && q.arg2[0] <= '9')
            asm_file << "\tmovl\t$" << q.arg2 << ", %edx" << endl;
        else
            asm_file << "\tmovl\t" << toPrint2 << ", %edx" << endl;
        asm_file << "\taddl\t%edx, %eax" << endl;
        asm_file << "\tmovl\t%eax, " << toPrintRes << endl;
    }
    else if (q.op == SUB)
    {
        if (q.arg1[0] > '0' && q.arg1[0] <= '9')
            asm_file << "\tmovl\t$" << q.arg1 << ", %edx" << endl;
        else
            asm_file << "\tmovl\t" << toPrint1 << ", %edx" << endl;
        if (q.arg2[0] > '0' && q.arg2[0] <= '9')
            asm_file << "\tmovl\t$" << q.arg2 << ", %eax" << endl;
        else
            asm_file << "\tmovl\t" << toPrint2 << ", %eax" << endl;
        asm_file << "\tsubl\t%eax, %edx" << endl;
        asm_file << "\tmovl\t%edx, %eax" << endl;
        asm_file << "\tmovl\t%eax, " << toPrintRes << endl;
    }
    else if (q.op == MULT)
    {
        if (q.arg1[0] > '0' && q.arg1[0] <= '9')
            asm_file << "\tmovl\t$" << q.arg1 << ", %eax" << endl;
        else
            asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        asm_file << "\timull\t";
        if (q.arg2[0] > '0' && q.arg2[0] <= '9')
            asm_file << "$" << q.arg2 << ", %eax" << endl;
        else
            asm_file << toPrint2 << ", %eax" << endl;
        asm_file << "\tmovl\t%eax, " << toPrintRes << endl;
    }
    else if (q.op == DIV)
    {
        asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        asm_file << "\tcltd\n\tidivl\t" << toPrint2 << endl;
        asm_file << "\tmovl\t%eax, " << toPrintRes << endl;
    }
    else if (q.op == MOD)
    {
        asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        asm_file << "\tcltd\n\tidivl\t" << toPrint2 << endl;
        asm_file << "\tmovl\t%edx, " << toPrintRes << endl;
    }
    else if (q.op == GOTO)
        asm_file << "\tjmp\t" << q.result << endl;
    else if (q.op == GOTO_LT)
    {
        asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        asm_file << "\tcmpl\t" << toPrint2 << ", %eax" << endl;
        asm_file << "\tjge\t.L" << labelCount << endl;
        asm_file << "\tjmp\t" << q.result << endl;
        asm_file << ".L" << labelCount++ << ":" << endl;
    }
    else if (q.op == GOTO_GT)
    {
        asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        asm_file << "\tcmpl\t" << toPrint2 << ", %eax" << endl;
        asm_file << "\tjle\t.L" << labelCount << endl;
        asm_file << "\tjmp\t" << q.result << endl;
        asm_file << ".L" << labelCount++ << ":" << endl;
    }
    else if (q.op == GOTO_GTE)
    {
        asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        asm_file << "\tcmpl\t" << toPrint2 << ", %eax" << endl;
        asm_file << "\tjl\t.L" << labelCount << endl;
        asm_file << "\tjmp\t" << q.result << endl;
        asm_file << ".L" << labelCount++ << ":" << endl;
    }
    else if (q.op == GOTO_LTE)
    {
        asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        asm_file << "\tcmpl\t" << toPrint2 << ", %eax" << endl;
        asm_file << "\tjg\t.L" << labelCount << endl;
        asm_file << "\tjmp\t" << q.result << endl;
        asm_file << ".L" << labelCount++ << ":" << endl;
    }
    else if (q.op == GOTO_GTE)
    {
        asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        asm_file << "\tcmpl\t" << toPrint2 << ", %eax" << endl;
        asm_file << "\tjl\t.L" << labelCount << endl;
        asm_file << "\tjmp\t" << q.result << endl;
        asm_file << ".L" << labelCount++ << ":" << endl;
    }
    else if (q.op == GOTO_EQ)
    {
        asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        if (q.arg2[0] >= '0' && q.arg2[0] <= '9')
            asm_file << "\tcmpl\t$" << q.arg2 << ", %eax" << endl;
        else
            asm_file << "\tcmpl\t" << toPrint2 << ", %eax" << endl;
        asm_file << "\tjne\t.L" << labelCount << endl;
        asm_file << "\tjmp\t" << q.result << endl;
        asm_file << ".L" << labelCount++ << ":" << endl;
    }
    else if (q.op == GOTO_NEQ)
    {
        asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        asm_file << "\tcmpl\t" << toPrint2 << ", %eax" << endl;
        asm_file << "\tje\t.L" << labelCount << endl;
        asm_file << "\tjmp\t" << q.result << endl;
        asm_file << ".L" << labelCount++ << ":" << endl;
    }
    else if (q.op == IF_GOTO)
    {
        asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        asm_file << "\tcmpl\t$0"
              << ", %eax" << endl;
        asm_file << "\tje\t.L" << labelCount << endl;
        asm_file << "\tjmp\t" << q.result << endl;
        asm_file << ".L" << labelCount++ << ":" << endl;
    }
    else if (q.op == IF_FALSE_GOTO)
    {
        asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        asm_file << "\tcmpl\t$0"
              << ", %eax" << endl;
        asm_file << "\tjne\t.L" << labelCount << endl;
        asm_file << "\tjmp\t" << q.result << endl;
        asm_file << ".L" << labelCount++ << ":" << endl;
    }
    else if (q.op == ARR_IDX_ARG)
    {
        asm_file << "\tmovl\t" << toPrint2 << ", %edx" << endl;
        asm_file << "cltq" << endl;
        if (off1 < 0)
        {
            asm_file << "\tmovl\t" << off1 << "(%rbp,%rdx,1), %eax" << endl;
            asm_file << "\tmovl\t%eax, " << toPrintRes << endl;
        }
        else
        {
            asm_file << "\tmovq\t" << off1 << "(%rbp), %rdi" << endl;
            asm_file << "\taddq\t%rdi, %rdx" << endl;
            asm_file << "\tmovq\t(%rdx) ,%rax" << endl;
            asm_file << "\tmovq\t%rax, " << toPrintRes << endl;
        }
    }
    else if (q.op == ARR_IDX_RES)
    {
        asm_file << "\tmovl\t" << toPrint2 << ", %edx" << endl;
        asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        asm_file << "cltq" << endl;

        if (offRes > 0)
        {
            asm_file << "\tmovq\t" << offRes << "(%rbp), %rdi" << endl;
            asm_file << "\taddq\t%rdi, %rdx" << endl;
            asm_file << "\tmovl\t%eax, (%rdx)" << endl;
        }
        else
            asm_file << "\tmovl\t%eax, " << offRes << "(%rbp,%rdx,1)" << endl;
    }
    else if (q.op == REFERENCE)
    {
        if (off1 < 0)
        {
            asm_file << "\tleaq\t" << toPrint1 << ", %rax" << endl;
            asm_file << "\tmovq\t%rax, " << toPrintRes << endl;
        }
        else
        {
            asm_file << "\tmovq\t" << toPrint1 << ", %rax" << endl;
            asm_file << "\tmovq\t%rax, " << toPrintRes << endl;
        }
    }
    else if (q.op == DEREFERENCE)
    {
        asm_file << "\tmovq\t" << toPrint1 << ", %rax" << endl;
        asm_file << "\tmovq\t(%rax), %rdx" << endl;
        asm_file << "\tmovq\t%rdx, " << toPrintRes << endl;
    }
    else if (q.op == L_DEREF)
    {
        asm_file << "\tmovq\t" << toPrintRes << ", %rdx" << endl;
        asm_file << "\tmovl\t" << toPrint1 << ", %eax" << endl;
        asm_file << "\tmovl\t%eax, (%rdx)" << endl;
    }
    else if (q.op == PARAM)
    {
        int paramSize;
        DataType t;
        if (glb3 != NULL)
            t = glb3->type.type;
        else
            t = loc3->type.type;
        if (t == INT)
            paramSize = _SIZE_INT;
        else if (t == CHAR)
            paramSize = _SIZE_CHAR;
        else
            paramSize = _SIZE_POINTER;
        stringstream ss;
        if (q.result[0] == '.')
            ss << "\tmovq\t$" << toPrintRes << ", %rax" << endl;
        else if (q.result[0] >= '0' && q.result[0] <= '9')
            ss << "\tmovq\t$" << q.result << ", %rax" << endl;
        else
        {
            if (loc3->type.type != ARRAY)
            {
                if (loc3->type.type != POINTER)
                    ss << "\tmovq\t" << toPrintRes << ", %rax" << endl;
                else if (loc3 == NULL)
                    ss << "\tleaq\t" << toPrintRes << ", %rax" << endl;
                else
                    ss << "\tmovq\t" << toPrintRes << ", %rax" << endl;
            }
            else
            {
                if (offRes < 0)
                    ss << "\tleaq\t" << toPrintRes << ", %rax" << endl;
                else
                {
                    ss << "\tmovq\t" << offRes << "(%rbp), %rdi" << endl;
                    ss << "\tmovq\t%rdi, %rax" << endl;
                }
            }
        }
        parameters.push(make_pair(ss.str(), paramSize));
    }
    else if (q.op == CALL)
    {
        int numParams = atoi(q.arg1.c_str());
        int totalSize = 0, k = 0;

        // We need different registers based on the parameters
        if (numParams > 6)
        {
            for (int i = 0; i < numParams - 6; i++)
            {
                string s = parameters.top().first;
                asm_file << s << "\tpushq\t%rax" << endl;
                totalSize += parameters.top().second;
                parameters.pop();
            }

            asm_file << parameters.top().first << "\tpushq\t%rax" << endl
                  << "\tmovq\t%rax, %r9d" << endl;
            totalSize += parameters.top().second;
            parameters.pop();

            asm_file << parameters.top().first << "\tpushq\t%rax" << endl
                  << "\tmovq\t%rax, %r8d" << endl;
            totalSize += parameters.top().second;
            parameters.pop();

            asm_file << parameters.top().first << "\tpushq\t%rax" << endl
                  << "\tmovq\t%rax, %rcx" << endl;
            totalSize += parameters.top().second;
            parameters.pop();

            asm_file << parameters.top().first << "\tpushq\t%rax" << endl
                  << "\tmovq\t%rax, %rdx" << endl;
            totalSize += parameters.top().second;
            parameters.pop();
            
            asm_file << parameters.top().first << "\tpushq\t%rax" << endl
                  << "\tmovq\t%rax, %rsi" << endl;
            totalSize += parameters.top().second;
            parameters.pop();

            asm_file << parameters.top().first << "\tpushq\t%rax" << endl
                  << "\tmovq\t%rax, %rdi" << endl;
            totalSize += parameters.top().second;
            parameters.pop();

        }
        else
        {
            while (!parameters.empty())
            {
                if (parameters.size() == 6)

                {
                    asm_file << parameters.top().first << "\tpushq\t%rax" << endl
                          << "\tmovq\t%rax, %r9d" << endl;
                    totalSize += parameters.top().second;
                    parameters.pop();
                }

                else if (parameters.size() == 5)

                {
                    asm_file << parameters.top().first << "\tpushq\t%rax" << endl
                          << "\tmovq\t%rax, %r8d" << endl;
                    totalSize += parameters.top().second;
                    parameters.pop();
                }

                else if (parameters.size() == 4)

                {
                    asm_file << parameters.top().first << "\tpushq\t%rax" << endl
                          << "\tmovq\t%rax, %rcx" << endl;
                    totalSize += parameters.top().second;
                    parameters.pop();
                }

                else if (parameters.size() == 3)

                {
                    asm_file << parameters.top().first << "\tpushq\t%rax" << endl
                          << "\tmovq\t%rax, %rdx" << endl;
                    totalSize += parameters.top().second;
                    parameters.pop();
                }

                else if (parameters.size() == 2)

                {
                    asm_file << parameters.top().first << "\tpushq\t%rax" << endl
                          << "\tmovq\t%rax, %rsi" << endl;
                    totalSize += parameters.top().second;
                    parameters.pop();
                }

                else if (parameters.size() == 1)

                {
                    asm_file << parameters.top().first << "\tpushq\t%rax" << endl
                          << "\tmovq\t%rax, %rdi" << endl;
                    totalSize += parameters.top().second;
                    parameters.pop();
                }
            }
        }

        asm_file << "\tcall\t" << q.result << endl;

        if (q.arg2 != "")
            asm_file << "\tmovq\t%rax, " << toPrint2 << endl;

        asm_file << "\taddq\t$" << totalSize << ", %rsp" << endl;
    }

    else if (q.op == RETURN)
    
    {
        if (q.result != "")
            asm_file << "\tmovq\t" << toPrintRes << ", %rax" << endl;

        asm_file << "\tleave" << endl;
        asm_file << "\tret" << endl;
    }
}

// Main function which calls all other relevant functions for generating the target assembly code
void generateTargetCode(ofstream &asm_file)
{
    printGlobal(asm_file);
    printStrings(asm_file);
    SymbolTable *currFuncTable = NULL;
    Symbol *currFunc = NULL;
    setLabels();

    for (int i = 0; i < (int)QuadList.quads.size(); i++)
    {
        // Print the quad as a comment in the assembly file
        asm_file << "# " << QuadList.quads[i].print() << endl;
        if (labels.count(i))
            asm_file << labels[i] << ":" << endl;

        // Necessary tasks for a function
        if (QuadList.quads[i].op == FUNC_BEG)
        {
            i++;
            if (QuadList.quads[i].op != FUNC_END)
                i--;
            else
                continue;

            currFunc = SymTbl_Global.searchGlobal(QuadList.quads[i].result);
            currFuncTable = currFunc->nestedTable;
            int takingParam = 1, memBind = 16;
            SymTbl = currFuncTable;
            
            for (int j = 0; j < (int)currFuncTable->symbols.size(); j++)
            {
                if (currFuncTable->symbols[j]->name == "RETVAL")
                {
                    takingParam = 0;
                    memBind = 0;
                    if (currFuncTable->symbols.size() > j + 1)
                        memBind = -currFuncTable->symbols[j + 1]->size;
                }
                else
                {
                    if (!takingParam)
                    {
                        currFuncTable->symbols[j]->offset = memBind;
                        if (currFuncTable->symbols.size() > j + 1)
                            memBind -= currFuncTable->symbols[j + 1]->size;
                    }
                    else
                    {
                        currFuncTable->symbols[j]->offset = memBind;
                        memBind += 8;
                    }
                }
            }
            if (memBind >= 0)
                memBind = 0;
            else
                memBind *= -1;
            funcRunning = QuadList.quads[i].result;
            generatePrologue(memBind, asm_file);
        }

        // Function epilogue (while leaving a function)
        else if (QuadList.quads[i].op == FUNC_END)
        {
            SymTbl = &SymTbl_Global;
            funcRunning = "";
            asm_file << "\tleave" << endl;
            asm_file << "\tret" << endl;
            asm_file << "\t.size\t" << QuadList.quads[i].result << ", .-" << QuadList.quads[i].result << endl;
        }

        if (funcRunning != "")
            quadCode(QuadList.quads[i], asm_file);
    }
}

// main function
int main(int argc, char *argv[])
{
    SymTbl = &SymTbl_Global;
    yyparse();

    filename = "assn6_20CS30037_20CS30049_" + string(argv[argc - 1]) + ".s";

    ofstream asm_file;
    asm_file.open(filename);

    QuadList.print(); // Print the three address quads

    SymTbl->print("SymTbl.global"); // Print the symbol tables

    SymTbl = &SymTbl_Global;

    generateTargetCode(asm_file); // Generate the target assembly code

    asm_file.close();

    return 0;
}
