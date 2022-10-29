/* 
 Compilers Lab : Assignment 5
 Group Members:
    1. Pranav Nyati (20CS30037)
    2. Shreyas Jena (20CS30049)
*/

// Header File for declaring Data Structures (Class Definitions) 
// & Global Function Prototypes

#ifndef __ASSN5_TRANSLATOR_H__
#define __ASSN5_TRANSLATOR_H__

#include <iostream>
#include <vector>
#include <string>
#include <list>

extern  char* yytext;
extern  int yyparse();

using namespace std;
/*
    Sizes of basic data types

    void   :     0 bytes
    char   :     1 byte
    int    :     4 bytes
    float  :     8 bytes
    pointer:     4 bytes
*/

#define _SIZE_VOID      0
#define _SIZE_CHAR      1
#define _SIZE_INT       4
#define _SIZE_FLOAT     8
#define _SIZE_POINTER   4

/* Class Declarations*/

class Symbol;
class SymbolType;
class SymbolTable;

class Quad;
class QuadArray;
class Label;
class Expression;
class Array;
class Statement;

// Declaration of Global Variables

extern Symbol* currentSym;   // ptr to current symbol
extern SymbolTable* SymTbl_Global;   // ptr to global symbol table
extern SymbolTable* SymTbl_Current;    // ptr to currently active symbol table
extern int SymTbl_Count;    // count for naming nested symbol tables
extern QuadArray QuadList;  // list of quads
extern string BlockName; // variable for naming nested blocks in symbol table\

// Class definitions and member functions

class SymbolType{
    public:
        string type;   // type of symbol
        int width;     // width of symbol in bytes
        SymbolType* arrElementType;   // type of array elements

        // constructor method
        SymbolType(string type_, int width_ = 1, SymbolType* arrElementType_ = NULL);

};

class Symbol{
public:
    string name;    // name of symbol
    SymbolType* sym_type;   // type of symbol
    int size;   // size of symbol in bytes
    string val; // value of symbol initially
    int offset; // offset of symbol in the symbol table
    SymbolTable *nestedTblPtr; // ptr to nested symbol table

    // constructor method

}


#endif