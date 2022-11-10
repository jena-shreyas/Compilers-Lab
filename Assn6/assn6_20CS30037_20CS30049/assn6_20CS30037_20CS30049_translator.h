/* 
 Compilers Lab : Assignment 6
 Group Members:
    1. Pranav Nyati (20CS30037)
    2. Shreyas Jena (20CS30049)
*/

// Header File for declaring Data Structures (Class Definitions) 
// & Global Function Prototypes

#ifndef __ASSN6_TRANSLATOR_H
#define __ASSN6_TRANSLATOR_H

#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

// Declaration of size of basic data types

#define _SIZE_VOID      0        // void : 0 bytes
#define _SIZE_CHAR      1        // char : 1 byte
#define _SIZE_INT       4        // int  : 4 bytes
#define _SIZE_FLOAT     8        // float: 8 bytes
#define _SIZE_POINTER   4        // pointer: 4 bytes
#define _SIZE_FUNCTION  0        // function: 0 bytes

/* Class Declarations*/

class Symbol;                           // An instance of Symbol class represents an element in the symbol table
class SymbolType;                       // SymbolType class represents the type of a symbol
class SymbolValue;                      // SymbolValue class represents the value stored by a symbol in the symbol table
class SymbolTable;                      // SymbolTable class represents the symbol table data structure

class Quad;                             // An instance of Quad class represents a quadruple used in TAC generation
class QuadArray;                        // represents the list of quads 

extern QuadArray QuadList;              
extern SymbolTable SymTbl_Global;
extern SymbolTable* SymTbl;

extern char* yytext;                    // import the yytext variable (which stores the lexeme) from the lexer
extern int yyparse();                   // import the yyparse() function from bison parser

// Defining all opcodes
typedef enum  {

    ADD, SUB, MULT, DIV, MOD, SL, SR, 
    BW_AND, BW_OR, BW_XOR, 
    BW_U_NOT ,U_PLUS, U_MINUS, REFERENCE, DEREFERENCE, U_NEG, 
    GOTO_EQ, GOTO_NEQ, GOTO_GT, GOTO_GTE, GOTO_LT, GOTO_LTE, IF_GOTO, IF_FALSE_GOTO, 
    CtoI, ItoC, FtoI, ItoF, FtoC ,CtoF, 
    ASSIGN, GOTO, RETURN, PARAM, CALL, ARR_IDX_ARG, ARR_IDX_RES, FUNC_BEG, FUNC_END, L_DEREF

}opcode;

// Defining all supported data types
typedef enum {

    INT,    
    FLOAT,
    CHAR,
    VOID,
    BOOL,
    POINTER,
    ARRAY,
    FUNCTION

}data_type;

// ##################### Class definitions and member functions ##################

// class to represent symbol type
class SymbolType {

    public:

        int pointers;                   // useful for pointer types
        data_type type;                  // type of symbol (i.e, E.type)
        data_type baseType;              // In case of arrays, points to base type; in case of pointers, points to the type of value pointed
        vector<int> dims;               // In case of array type, this is used to store array dimensions

};

    /*
    Class to represent the value of an element in the symbol table
    class SymbolValue
    ------------------
    Member Variables:
        i: int                 For integers, it stores the value
        f: float               For floats, it stores the value
        c: char                For characters, it stores the value
        p: void*               For pointers, it stores the value
    */

class SymbolValue {

    public:
    
        int i;
        char c;
        float f;
        void* p;

        void setInit(int val);
        void setInit(char val);
        void setInit(float val);

};

/*
    Class to represent an element(entry) in the symbol table
    class symbol
    ------------
    Member Variables:
        name: string                The name of the symbol
        type: SymbolType            Type of the symbol
        initVal: SymbolValue*       Initial value of the symbol, if any
        size: int                   Size of the symbol(element)
        offset: int                 Offset of the symbol in the symbol table
        nestedTable: SymbolTable*   Pointer to a nested symbol table, if any (useful for functions and blocks)
    Member Methods:
        symbol()
        - Constructor
*/
class Symbol {

    public:

        string name;
        SymbolType type;
        SymbolValue* initVal;
        int size;
        int offset;
        SymbolTable* nestedTable;

        Symbol();

};


/*
    Class to represent the symbol table data structure
    class SymbolTable
    ------------
    Member Variables:
        table: map<string, symbol*>     List of symbols hashed using their names
        symbols: vector<symbol*>        List of all symbols present in the symbol table
        tempCount: int                  Count of temporary variables generated for the symbol table
        parent: SymbolTable*            Pointer to the parent of the symbol table, NULL for the global symbol table
    Member Methods:
        SymbolTable()
        - Constructor
        lookup(string name, data_type t = INT, int pc = 0): symbol*
        - A method to lookup an id (given its name or lexeme) in the symbol table. If the id exists, the entry is returned, otherwise a new entry is created.
        searchGlobal(string name): symbol*
        - A method to search for an id in the global symbol table. If the id exists, the entry is returned, otherwise NULL is returned.
        gentemp(data_type t = INT): string
        - A method to generate a new temporary, insert it to the symbol table, and return a pointer to the entry
        print(): void
        - Prints the symbol table in a suitable fashion
*/

class SymbolTable {

    public:

        // member variables
        map<string, Symbol*> table;
        vector<Symbol*> symbols;
        int offset;
        static int tempCount;

        // constrcutor and member functions
        SymbolTable();
        Symbol* lookup(string name, data_type t = INT, int pc = 0);
        string gentemp(data_type t = INT);
        Symbol* searchGlobal(string name);
        void print(string tableName);

};


/*
    Class to denote a quad in the Three Address Code translation
    class quad
    ------------
    Member Variables:
        op: string          Operator in the three address code
        arg1: string        First argument in the three address code
        arg2: string        Second argument in the three address code
        result: string      Result of the three address code
    Member Methods:
    quad(string, string, string, opcode)
    - Constructor
    print(): void
    - Returns a formatted string to help in printing the quad
*/

class Quad {

    public:

        // member variables
        opcode op;
        string arg1;
        string arg2;
        string result;

        // constructor and member functions
        Quad(string, string, string, opcode);
        string print();

};

/*
    Class to denote the entire list of quads for lazy spitting
    class QuadArray
    ------------
    Member Variables:
        quads: vector<quads>    A vector of all the quads generated
    Member Methods:
        print(): void
        - Prints the entire list of quads
*/

class QuadArray {

    public:

        // member variables
        vector<Quad> quads;

        // member functions
        void print();

};

/*
    Class to represent a parameter
    class param
    ------------
    Member Variables:
        name: string        Name of the parameter
        type: data_type      Type of the parameter
*/

class param {

    public:

        // member variables
        string name;
        SymbolType type;

};


/*
    Class to denote an expression
    class expression
    ------------
    Member Variables:
        instr: int                  The instruction number of the expression
        type: data_type              Type of the expression
        loc: string                 The symbol table entry 
        truelist: list<int>         Truelist for boolean expressions
        falselist: list<int>        Falselist for boolean expressions
        nextlist: list<int>         Nextlist for statement expressions
        fold: int                   Useful for arrays and pointers
        folder: string*             Useful for arrays and pointers
    Member Methods:
        expression()
        - Constructor
*/
class Expression {

    public:

        // member variables
        int instr;
        data_type type;
        string addr;
        list<int> truelist;
        list<int> falselist;
        list<int> nextlist;
        int fold;
        string* folder;

        // constructor
        Expression();

};


/*
    Class to represent a declaration
    class declaration
    ------------
    Member Variables:
        name: string                Name of the declaration
        pointers: int               Number of pointers
        type: data_type              Type of the declaration
        li: vector<int>             List of instructions for the declaration
        initVal: expression*        Initial value of the declaration
        pc: int                     Useful for pointers and arrays
*/
class declaration {

    public:

        // member variables
        string name;
        int pointers;
        data_type type;
        data_type nextType;
        vector<int> li;
        Expression* initVal;
        int pc;

};


/*
    An overloaded method to add a (newly generated) quad of the form: result = arg1 op arg2 where op usually is a binary operator. 
    If arg2 is missing, op is unary. If op also is missing, this is a copy instruction.
    It is overloaded for different types of quads (int, float or string)
*/
void emit(string result, string arg1, string arg2, opcode op);
void emit(string result, int constant, opcode op);
void emit(string result, char constant, opcode op);
void emit(string result, float constant, opcode op);


/*
    A global function to create a new list containing only i, an index into the array of quads, 
    and to return a pointer to the newly created list
*/
list<int> makelist(int i);

/*
    A global function to concatenate two lists list1 and list2 and to return a pointer to the concatenated list
*/
list<int> merge(list<int> list1, list<int> list2);

/*
    A global function to insert address as the target label for each of the quads on the list l
*/
void backpatch(list<int> l, int address);

/*
    Converts a symbol of one type to another and returns a pointer to the converted symbol
*/
void convertToType(Expression* arg, Expression* res, data_type toType);

void convertToType(string t, data_type to, string f, data_type from);

/*
    Converts an int to a bool and adds required attributes
*/
void convertIntToBool(Expression* expr);

/*
    Auxiliary function to get the size of a type
*/
int sizeOfType(data_type t);

/*
    Auxiliary function to print a type
*/
string checkType(SymbolType t);

/*
    Auxiliary function to get the initial value of a symbol
*/
string getInitVal(Symbol* sym);

#endif