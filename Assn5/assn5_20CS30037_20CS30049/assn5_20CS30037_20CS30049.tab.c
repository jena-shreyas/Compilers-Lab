/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "assn5_20CS30037_20CS30049.y"

    /* 
    Compilers Lab : Assignment 5
    Group Members:
        1. Pranav Nyati (20CS30037)
        2. Shreyas Jena (20CS30049)
    
    
    * Bison specifications
    */

    #include <iostream>
    #include "assn5_20CS30037_20CS30049_translator.h"
    using namespace std;

    extern int yylex();         // From lexer
    void yyerror(string s);     // Function to report errors
    extern char* yytext;        // From lexer, gives the text being currently scanned
    extern int yylineno;        // Used for keeping track of the line number
    extern string prevType;      // Used for storing the last encountered type

#line 92 "assn5_20CS30037_20CS30049.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_ASSN5_20CS30037_20CS30049_TAB_H_INCLUDED
# define YY_YY_ASSN5_20CS30037_20CS30049_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    BOOL = 292,
    COMPLEX = 293,
    IMAGINARY = 294,
    LEFT_SQR_BRACKET = 295,
    RIGHT_SQR_BRACKET = 296,
    LEFT_PAREN = 297,
    RIGHT_PAREN = 298,
    LEFT_CURLY_BRACE = 299,
    RIGHT_CURLY_BRACE = 300,
    DOT = 301,
    ARROW = 302,
    INCREMENT = 303,
    DECREMENT = 304,
    BITWISE_AND = 305,
    MULTIPLY = 306,
    ADD = 307,
    SUBTRACT = 308,
    BITWISE_NOR = 309,
    NOT = 310,
    DIVIDE = 311,
    MODULO = 312,
    LEFT_SHIFT = 313,
    RIGHT_SHIFT = 314,
    LESS_THAN = 315,
    GREATER_THAN = 316,
    LESS_THAN_EQUALS = 317,
    GREATER_THAN_EQUALS = 318,
    EQUALS = 319,
    NOT_EQUALS = 320,
    BITWISE_XOR = 321,
    BITWISE_OR = 322,
    LOGICAL_AND = 323,
    LOGICAL_OR = 324,
    QUESTION_MARK = 325,
    COLON = 326,
    SEMICOLON = 327,
    ELLIPSIS = 328,
    ASSIGNMENT = 329,
    MUL_ASSIGNMENT = 330,
    DIV_ASSIGNMENT = 331,
    MOD_ASSIGNMENT = 332,
    ADD_ASSIGNMENT = 333,
    SUB_ASSIGNMENT = 334,
    LSHIFT_ASSIGNMENT = 335,
    RSHIFT_ASSIGNMENT = 336,
    AND_ASSIGNMENT = 337,
    XOR_ASSIGNMENT = 338,
    OR_ASSIGNMENT = 339,
    COMMA = 340,
    HASH = 341,
    IDENTIFIER = 342,
    INT_CONSTANT = 343,
    FLOAT_CONSTANT = 344,
    CHAR_CONSTANT = 345,
    STRING_LITERAL = 346,
    THEN = 347
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "assn5_20CS30037_20CS30049.y"

    int intval;             // For an integer value
    char* charval;          // For a char value
    int instr;              // A special type for instruction number, needed in backpatching
    char unaryOp;           // For unary operators
    int numParams;          // For number of parameters to a function
    Expression* expr;       // For an expression
    Statement* stmt;        // For a statement
    Symbol* symptr;           // For a symbol
    SymbolType* symType;    // For the type of a symbol
    Array* arr;             // For arrays

#line 250 "assn5_20CS30037_20CS30049.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASSN5_20CS30037_20CS30049_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1398

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  227
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  403

#define YYUNDEFTOK  2
#define YYMAXUTOK   347


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   123,   123,   129,   134,   140,   147,   152,   157,   165,
     172,   191,   198,   200,   202,   209,   216,   218,   223,   227,
     234,   239,   247,   251,   256,   261,   294,   296,   301,   305,
     309,   313,   317,   321,   328,   332,   340,   354,   366,   378,
     393,   397,   409,   424,   428,   440,   455,   459,   473,   487,
     501,   518,   522,   538,   557,   561,   578,   582,   599,   603,
     620,   624,   640,   644,   657,   661,   684,   691,   701,   705,
     723,   725,   727,   729,   731,   733,   735,   737,   739,   741,
     743,   748,   752,   757,   762,   764,   769,   771,   773,   775,
     777,   779,   781,   783,   788,   790,   795,   799,   810,   812,
     814,   816,   821,   825,   829,   831,   835,   837,   841,   843,
     845,   847,   849,   851,   853,   858,   860,   865,   867,   872,
     874,   876,   881,   883,   888,   890,   895,   897,   902,   904,
     906,   911,   916,   926,   931,   936,   940,   942,   944,   964,
     982,   984,   986,   988,   990,   992,  1004,  1006,  1021,  1023,
    1028,  1032,  1039,  1041,  1046,  1048,  1053,  1055,  1060,  1062,
    1067,  1069,  1074,  1079,  1083,  1085,  1090,  1092,  1097,  1099,
    1104,  1109,  1111,  1116,  1118,  1123,  1125,  1129,  1134,  1138,
    1142,  1150,  1152,  1157,  1161,  1165,  1172,  1174,  1176,  1181,
    1192,  1196,  1203,  1207,  1218,  1222,  1229,  1233,  1240,  1253,
    1267,  1272,  1287,  1302,  1314,  1326,  1342,  1358,  1374,  1392,
    1401,  1410,  1419,  1432,  1448,  1450,  1454,  1458,  1463,  1471,
    1473,  1478,  1480,  1485,  1494,  1496,  1501,  1503
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "BOOL",
  "COMPLEX", "IMAGINARY", "LEFT_SQR_BRACKET", "RIGHT_SQR_BRACKET",
  "LEFT_PAREN", "RIGHT_PAREN", "LEFT_CURLY_BRACE", "RIGHT_CURLY_BRACE",
  "DOT", "ARROW", "INCREMENT", "DECREMENT", "BITWISE_AND", "MULTIPLY",
  "ADD", "SUBTRACT", "BITWISE_NOR", "NOT", "DIVIDE", "MODULO",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN",
  "LESS_THAN_EQUALS", "GREATER_THAN_EQUALS", "EQUALS", "NOT_EQUALS",
  "BITWISE_XOR", "BITWISE_OR", "LOGICAL_AND", "LOGICAL_OR",
  "QUESTION_MARK", "COLON", "SEMICOLON", "ELLIPSIS", "ASSIGNMENT",
  "MUL_ASSIGNMENT", "DIV_ASSIGNMENT", "MOD_ASSIGNMENT", "ADD_ASSIGNMENT",
  "SUB_ASSIGNMENT", "LSHIFT_ASSIGNMENT", "RSHIFT_ASSIGNMENT",
  "AND_ASSIGNMENT", "XOR_ASSIGNMENT", "OR_ASSIGNMENT", "COMMA", "HASH",
  "IDENTIFIER", "INT_CONSTANT", "FLOAT_CONSTANT", "CHAR_CONSTANT",
  "STRING_LITERAL", "THEN", "$accept", "primary_expression", "constant",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "M", "N", "assignment_expression",
  "assignment_operator", "expression", "constant_expression",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "specifier_qualifier_list", "specifier_qualifier_list_opt",
  "enum_specifier", "identifier_opt", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "type_qualifier_list_opt", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation_opt", "designation", "designator_list",
  "designator", "statement", "loop_statement", "labeled_statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "F", "W", "D", "X", "change_table",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list_opt", "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347
};
# endif

#define YYPACT_NINF (-296)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-226)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1325,  -296,  -296,  -296,  -296,   -73,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,    90,  1325,  1325,  -296,  1325,  1325,  1288,
    -296,  -296,   -27,    42,   -32,    18,  -296,  -296,   -33,  -296,
     968,   136,    -5,  -296,  -296,  -296,  -296,  -296,  -296,    56,
     112,  -296,    95,    18,  -296,   -32,  1012,  -296,    90,  -296,
    1325,   144,    83,   136,   108,    28,  -296,  -296,  -296,  -296,
    -296,   116,  1128,   778,    99,  1142,  1142,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
     217,   172,  1158,  -296,   150,   -10,   145,   233,   -15,   123,
     151,   135,   158,   160,  -296,  -296,  -296,   175,  -296,   879,
    -296,   197,   238,   829,  -296,   -28,  1247,  1158,  -296,   -12,
     778,  -296,  -296,    -9,  1359,  -296,  1359,   215,  1158,   187,
     102,  1012,  -296,    -2,  -296,   778,  -296,  -296,  1158,  1158,
     195,   196,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  1158,  -296,  -296,  1158,  1158,
    1158,  1158,  1158,  1158,  1158,  1158,  1158,  1158,  1158,  1158,
    1158,  1158,  1158,  1158,  -296,  -296,   216,   299,   244,   879,
    -296,  -296,  1158,  -296,   248,   249,  -296,   204,  -296,   -32,
     254,   214,  -296,  -296,  -296,  -296,  -296,   268,  -296,  1158,
    -296,  -296,  -296,  1026,   287,  -296,  -296,   222,  -296,  -296,
    -296,   288,   -17,   297,   245,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,   150,   150,   -10,   -10,   145,   145,   145,   145,
     233,   233,   -15,   123,   151,  1158,  1158,  -296,   270,  1158,
     272,   275,  -296,  -296,   273,   317,  1070,   319,  -296,  -296,
    -296,   291,    72,  -296,  -296,  -296,  -296,   318,   320,  -296,
    -296,  -296,  -296,  -296,  -296,   323,   325,  -296,  -296,  -296,
    -296,  -296,  1010,   324,  -296,    99,  -296,  -296,  -296,  1012,
     324,  -296,  -296,  1158,   135,   158,  1158,  -296,   296,  -296,
     464,   326,   330,   301,  1158,  -296,    78,  1158,   332,  -296,
     464,  -296,  -296,   299,  -296,  -296,  -296,  -296,   104,  -296,
    -296,   290,   464,  -296,  -296,   692,  -296,  -296,   290,  -296,
      -8,  -296,   299,  -296,  -296,  -296,   231,   305,  -296,   299,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,   334,   464,  -296,
     333,  -296,  -296,   335,   343,   388,  -296,  -296,  -296,  -296,
    1158,  -296,   339,  -296,  -296,   464,  1158,  -296,   346,  1158,
    1084,  1084,  -296,    21,   341,    68,  -296,  -296,   380,   349,
    1158,   340,  1158,  1158,  -296,  -296,   692,    69,  -296,   290,
     290,   464,   299,  -296,   347,   353,   354,  -296,   359,  -296,
    -296,  -296,  -296,   540,   616,   299,  -296,   299,  -296,   360,
     361,  -296,  -296
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   100,   103,   128,   108,   123,    98,   107,   131,   105,
     106,   101,   129,   104,   109,    99,   110,   102,   130,   111,
     112,   113,   222,     0,    87,    89,   114,    91,    93,     0,
     219,   221,   121,     0,     0,   149,    85,   134,     0,    94,
      96,   133,     0,    86,    88,    90,    92,     1,   220,     0,
       0,   152,   150,   148,    84,     0,     0,   226,     0,   213,
     224,     0,   213,   132,   126,     0,   124,   135,   151,   153,
      95,    96,     0,     0,   169,     0,     0,    28,    29,    30,
      31,    32,    33,     2,     6,     7,     8,     4,     9,     3,
      22,    34,     0,    36,    40,    43,    46,    51,    54,    56,
      58,    60,    62,    64,    68,   163,    97,     0,   227,     0,
     139,    29,     0,     0,   160,     0,     0,     0,   119,     0,
       0,    26,    81,     0,   118,   162,   118,     0,     0,     0,
       0,     0,   168,     0,   171,     0,    23,    24,     0,    19,
       0,     0,    14,    15,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,     0,    34,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    66,     0,   191,     0,     0,
     144,   138,     0,   137,    29,     0,   146,     0,   147,   159,
       0,   154,   156,    83,   127,   120,   125,     0,     5,     0,
     117,   115,   116,     0,     0,   174,   164,   169,   166,   170,
     172,     0,     0,     0,    18,    20,    12,    13,    69,    37,
      38,    39,    41,    42,    44,    45,    47,    48,    49,    50,
      52,    53,    55,    57,    59,     0,     0,    66,     0,     0,
       0,     0,   211,   209,     0,     0,     0,     0,   210,   212,
     197,     2,     0,   194,   195,   175,   176,     0,    66,   192,
     177,   178,   179,   180,   141,     0,     0,   143,   136,   161,
     158,   145,     0,    27,    82,   169,    35,   173,   165,     0,
       0,    10,    11,     0,    61,    63,     0,   216,     0,   215,
       0,    66,     0,     0,     0,   218,     0,     0,     0,   213,
       0,   196,   223,     0,   140,   142,   155,   157,     0,   167,
      21,    67,     0,   188,    66,     0,   212,   214,    67,   217,
       0,   212,   191,   186,   193,    16,   169,     0,   187,   191,
      66,   181,   182,   183,   184,   185,   213,     0,     0,   213,
       0,    17,    66,     0,     0,     0,    66,   200,    66,   189,
       0,    66,     0,    66,    66,     0,     0,    65,     0,     0,
       0,     0,    67,     0,     0,     0,    66,    66,   198,    66,
       0,     0,     0,     0,    66,    66,     0,     0,   203,    67,
      67,     0,   191,   201,     0,     0,     0,   199,     0,   204,
      66,    66,   202,     0,     0,   191,   205,   191,   206,     0,
       0,   207,   208
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -296,  -296,  -296,  -296,  -296,  -296,   -70,  -296,   -80,    81,
     106,   190,   103,   227,   252,   247,   193,   198,  -296,  -110,
    -130,  -295,     9,  -296,   -72,  -115,     0,     3,  -296,   374,
    -296,    85,    89,   306,  -296,  -296,  -296,   312,     1,  -296,
     -14,   391,  -296,   383,   -40,  -296,  -296,   173,  -296,    -4,
    -123,   169,  -196,  -296,  -296,   313,  -229,  -166,  -289,  -296,
    -214,  -296,   146,    24,  -259,  -256,  -296,  -296,  -296,  -270,
     -58,  -234,  -296,   418,  -296,  -296,  -296
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    88,    89,    90,   213,   214,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     235,   176,   122,   155,   252,   194,   253,    58,    38,    39,
      24,    25,   125,   201,    26,    33,    65,    66,    27,    28,
      71,    41,    52,    42,    53,   190,   191,   192,   115,   127,
     106,   130,   131,   132,   133,   134,   254,   330,   255,   256,
     257,   258,   259,   260,   261,   262,   292,   298,   291,   299,
     107,   263,    29,    30,    31,    59,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   123,   121,    23,   116,   136,   137,   193,   208,    40,
      34,   279,   157,   204,    32,   186,   327,  -122,   193,    35,
      50,   113,   156,   337,   281,     3,   331,    43,    44,    22,
      45,    46,    23,   195,   198,   338,    51,    34,   128,    54,
      57,    12,   161,   162,   129,   236,   336,   156,   123,   169,
     170,   339,    55,    18,    69,    37,   333,   187,   156,   334,
     108,   313,    51,   123,   369,   105,   212,   368,   199,   179,
     112,   323,   209,   118,   126,    64,   199,   199,   219,   220,
     221,   335,    37,   328,   385,   386,    49,   331,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   331,   331,   199,   286,   340,   347,
      51,   371,   384,   119,    69,   343,   197,   333,   178,   189,
     334,   126,   185,   276,   288,   126,   362,   126,   303,   193,
     279,   211,    34,   156,   333,   333,   126,   334,   334,   128,
     105,    35,   335,    64,   301,   129,    35,   206,   215,   325,
     319,     3,   387,   199,   199,    67,   309,   199,   124,   335,
     335,   315,    36,   199,   218,   156,   156,    12,   388,   156,
     114,    72,   109,   171,   296,   270,    61,    37,    62,    18,
      69,   399,   117,   400,   329,   110,    73,   207,   265,   326,
      56,   266,    75,    76,    77,   111,    79,    80,    81,    82,
     344,   158,   173,   163,   164,   124,   159,   160,   274,   124,
     383,   124,   350,   200,   311,   200,   355,   172,   356,   177,
     124,   358,   318,   360,   361,   320,   174,   396,   398,   175,
     -67,    83,    84,    85,    86,    87,   372,   373,   180,   376,
     357,   322,   222,   223,   381,   382,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   138,   203,   139,
     393,   394,   128,   140,   141,   142,   143,   278,   129,   224,
     225,   128,   230,   231,   205,   189,   341,   129,   345,   181,
     156,   348,   216,   217,   363,   264,   237,   365,   105,   267,
     268,   269,   310,   165,   166,   167,   168,   271,   377,   272,
     379,   380,     1,   238,   239,     2,     3,   240,   241,   242,
       4,   273,     5,     6,     7,   243,   244,   245,     8,     9,
      10,    11,    12,   246,    13,    14,    72,    15,   277,   247,
     283,   280,    16,    17,    18,   248,    19,    20,    21,   332,
     282,    73,   287,   249,   289,   353,   290,    75,    76,    77,
      78,    79,    80,    81,    82,   226,   227,   228,   229,   294,
     293,   297,   300,   302,   304,  -190,   305,   312,   275,   354,
     314,   250,   316,   317,   321,   199,   342,   346,   349,   352,
     351,   359,   364,   370,   366,   367,   251,    84,    85,    86,
      87,     1,   374,   375,     2,     3,   390,   391,   232,     4,
     332,     5,     6,     7,   392,   401,   402,     8,     9,    10,
      11,    12,   378,    13,    14,    72,    15,   332,   332,   389,
     234,    16,    17,    18,   233,    19,    20,    21,   284,    70,
      73,   196,   202,    63,   285,    68,    75,    76,    77,    78,
      79,    80,    81,    82,   308,   307,   210,    48,     0,   324,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     250,     0,     0,     0,     0,     0,     0,     0,   238,   239,
       0,     0,   240,   241,   242,    83,    84,    85,    86,    87,
     243,   244,   245,     0,     0,     0,     0,     0,   246,     0,
       0,    72,     0,     0,   247,     0,     0,     0,     0,     0,
     248,     0,     0,     0,     0,     0,    73,     0,   249,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,     0,     0,     0,
       0,     0,     0,     0,   238,   239,     0,     0,   240,   241,
     242,   251,    84,    85,    86,    87,   243,   244,   245,     0,
       0,     0,     0,     0,   246,     0,     0,    72,     0,     0,
     247,     0,     0,     0,     0,     0,   248,     0,     0,     0,
       0,     0,    73,     0,   395,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   250,     0,     0,     0,     0,     0,     0,     0,
     238,   239,     0,     0,   240,   241,   242,   251,    84,    85,
      86,    87,   243,   244,   245,     0,     0,     0,     0,     0,
     246,     0,     0,    72,     0,     0,   247,     0,     0,     0,
       0,     0,   248,     0,     0,     0,     0,     0,    73,     0,
     397,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   250,     0,
       0,     0,     0,     0,     0,     0,   238,   239,     0,     0,
     240,   241,   242,   251,    84,    85,    86,    87,   243,   244,
     245,     0,     0,     0,     0,     0,   246,     0,     0,    72,
       0,     0,   247,     0,     0,     0,     0,     0,   248,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   251,
      84,    85,    86,    87,     2,     3,     0,     0,     0,     4,
       0,     5,     0,     7,     0,     0,     0,     0,     9,    10,
       0,    12,     0,    13,    14,    72,     0,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     0,     0,
      73,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,     0,     0,    72,   182,     0,     0,
       0,     0,     0,     0,    18,    83,    84,    85,    86,    87,
     183,    73,     0,     0,     0,     0,     0,    75,    76,    77,
     184,    79,    80,    81,    82,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,     0,     0,    72,     0,     0,     0,
       0,     0,     0,     0,    18,     0,    83,    84,    85,    86,
      87,    73,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,    84,    85,    86,
      87,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     0,     0,
       0,     0,  -225,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,    72,
       0,     0,    56,    16,    17,    18,     0,    19,    20,    21,
       0,     0,     0,    72,    73,     0,    74,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    73,     0,
     275,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,     0,   306,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,    83,
      84,    85,    86,    87,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    83,    84,    85,    86,    87,    75,    76,
      77,    78,    79,    80,    81,    82,    73,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
       0,     0,   295,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,   250,    83,    84,    85,
      86,    87,     0,     0,     0,     0,     0,     0,     0,    72,
     120,    83,    84,    85,    86,    87,    75,    76,    77,    78,
      79,    80,    81,    82,   135,    72,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,     0,     0,
      73,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,     0,    83,    84,    85,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
      84,    85,    86,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,    84,    85,    86,    87,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,     0,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,     0,    47,     0,
     188,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     2,     3,     0,     0,     0,
       4,     0,     5,     0,     7,     0,     0,     0,     0,     9,
      10,     0,    12,     0,    13,    14,     0,     0,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    73,    72,     0,    62,    75,    76,   117,   131,    23,
      42,   207,    92,   128,    87,    43,   311,    44,   128,    51,
      34,    61,    92,   318,    41,     7,   315,    24,    25,    29,
      27,    28,    29,    45,    43,    43,    35,    42,    40,    72,
      40,    23,    52,    53,    46,   175,   316,   117,   120,    64,
      65,   321,    85,    35,    53,    87,   315,    85,   128,   315,
      60,   290,    61,   135,    43,    56,   138,   362,    85,   109,
      61,   300,    74,    45,    73,    87,    85,    85,   158,   159,
     160,   315,    87,   312,   379,   380,    44,   376,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   393,   394,    85,   237,   322,   338,
     109,    43,    43,    85,   113,   329,   120,   376,   109,   116,
     376,   120,   113,   203,   239,   124,   355,   126,   258,   239,
     326,   135,    42,   203,   393,   394,   135,   393,   394,    40,
     131,    51,   376,    87,    72,    46,    51,    45,   139,    45,
      72,     7,   381,    85,    85,    43,   279,    85,    73,   393,
     394,   291,    72,    85,   155,   235,   236,    23,   382,   239,
      87,    27,    28,    50,   246,   189,    40,    87,    42,    35,
     179,   395,    74,   397,   314,    41,    42,    85,   179,    85,
      74,   182,    48,    49,    50,    51,    52,    53,    54,    55,
     330,    51,    67,    58,    59,   120,    56,    57,   199,   124,
     376,   126,   342,   124,   286,   126,   346,    66,   348,    44,
     135,   351,   294,   353,   354,   297,    68,   393,   394,    69,
      70,    87,    88,    89,    90,    91,   366,   367,    41,   369,
     350,   299,   161,   162,   374,   375,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    40,    43,    42,
     390,   391,    40,    46,    47,    48,    49,    45,    46,   163,
     164,    40,   169,   170,    87,   272,    45,    46,   336,    41,
     350,   339,    87,    87,   356,    41,    70,   359,   279,    41,
      41,    87,   283,    60,    61,    62,    63,    43,   370,    85,
     372,   373,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    43,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    41,    30,
      85,    43,    33,    34,    35,    36,    37,    38,    39,   315,
      43,    42,    72,    44,    72,   345,    71,    48,    49,    50,
      51,    52,    53,    54,    55,   165,   166,   167,   168,    42,
      87,    42,    71,    45,    41,    45,    41,    71,    44,   345,
      44,    72,    42,    72,    42,    85,    71,    43,    45,    36,
      45,    42,    36,    42,   360,   361,    87,    88,    89,    90,
      91,     3,    12,    44,     6,     7,    43,    43,   171,    11,
     376,    13,    14,    15,    45,    45,    45,    19,    20,    21,
      22,    23,    72,    25,    26,    27,    28,   393,   394,    72,
     173,    33,    34,    35,   172,    37,    38,    39,   235,    55,
      42,   119,   126,    42,   236,    52,    48,    49,    50,    51,
      52,    53,    54,    55,   275,   272,   133,    29,    -1,   303,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
      -1,    -1,     8,     9,    10,    87,    88,    89,    90,    91,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    27,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,    -1,    -1,     8,     9,
      10,    87,    88,    89,    90,    91,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    44,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,     5,    -1,    -1,     8,     9,    10,    87,    88,    89,
      90,    91,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    27,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      44,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,    -1,    -1,
       8,     9,    10,    87,    88,    89,    90,    91,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    27,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    87,    88,    89,    90,    91,
      41,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    87,    88,    89,    90,
      91,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,    -1,    -1,
      -1,    -1,    44,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    27,
      -1,    -1,    74,    33,    34,    35,    -1,    37,    38,    39,
      -1,    -1,    -1,    27,    42,    -1,    44,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    42,    -1,
      44,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    42,    87,    88,    89,    90,    91,    48,    49,
      50,    51,    52,    53,    54,    55,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    72,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      42,    87,    88,    89,    90,    91,    48,    49,    50,    51,
      52,    53,    54,    55,    42,    27,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,    -1,     0,    -1,
      43,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   119,   120,   123,   124,   127,   131,   132,   165,
     166,   167,    87,   128,    42,    51,    72,    87,   121,   122,
     133,   134,   136,   120,   120,   120,   120,     0,   166,    44,
     133,   131,   135,   137,    72,    85,    74,   119,   120,   168,
     169,    40,    42,   134,    87,   129,   130,    43,   136,   131,
     122,   133,    27,    42,    44,    48,    49,    50,    51,    52,
      53,    54,    55,    87,    88,    89,    90,    91,    94,    95,
      96,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   115,   143,   163,   119,    28,
      41,    51,   115,   137,    87,   141,   163,    74,    45,    85,
      42,    99,   115,   117,   124,   125,   131,   142,    40,    46,
     144,   145,   146,   147,   148,    42,    99,    99,    40,    42,
      46,    47,    48,    49,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,   116,    99,   101,    51,    56,
      57,    52,    53,    58,    59,    60,    61,    62,    63,    64,
      65,    50,    66,    67,    68,    69,   114,    44,   115,   137,
      41,    41,    28,    41,    51,   115,    43,    85,    43,   120,
     138,   139,   140,   112,   118,    45,   130,   142,    43,    85,
     125,   126,   126,    43,   118,    87,    45,    85,   143,    74,
     148,   142,   117,    97,    98,   115,    87,    87,   115,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   104,
     105,   105,   106,   107,   108,   113,   113,    70,     4,     5,
       8,     9,    10,    16,    17,    18,    24,    30,    36,    44,
      72,    87,   117,   119,   149,   151,   152,   153,   154,   155,
     156,   157,   158,   164,    41,   115,   115,    41,    41,    87,
     133,    43,    85,    43,   115,    44,   101,    41,    45,   145,
      43,    41,    43,    85,   109,   110,   113,    72,   118,    72,
      71,   161,   159,    87,    42,    72,   117,    42,   160,   162,
      71,    72,    45,   113,    41,    41,    73,   140,   144,   143,
     115,   117,    71,   149,    44,   113,    42,    72,   117,    72,
     117,    42,   163,   149,   155,    45,    85,   114,   149,   113,
     150,   151,   156,   157,   158,   164,   162,   114,    43,   162,
     153,    45,    71,   153,   113,   163,    43,   149,   163,    45,
     113,    45,    36,   119,   156,   113,   113,   112,   113,    42,
     113,   113,   149,   117,    36,   117,   156,   156,   114,    43,
      42,    43,   113,   113,    12,    44,   113,   117,    72,   117,
     117,   113,   113,   150,    43,   114,   114,   149,   153,    72,
      43,    43,    45,   113,   113,    44,   150,    44,   150,   153,
     153,    45,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    97,    97,
      98,    98,    99,    99,    99,    99,    99,    99,   100,   100,
     100,   100,   100,   100,   101,   101,   102,   102,   102,   102,
     103,   103,   103,   104,   104,   104,   105,   105,   105,   105,
     105,   106,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   114,   115,   115,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   118,   119,   119,   120,   120,   120,   120,
     120,   120,   120,   120,   121,   121,   122,   122,   123,   123,
     123,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   125,   126,   126,   127,
     127,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     131,   132,   133,   133,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   143,   143,   143,   144,   144,   145,   145,
     146,   147,   147,   148,   148,   149,   149,   149,   149,   149,
     149,   150,   150,   150,   150,   150,   151,   151,   151,   152,
     153,   153,   154,   154,   155,   155,   156,   156,   157,   157,
     157,   158,   158,   158,   158,   158,   158,   158,   158,   159,
     160,   161,   162,   163,   164,   164,   164,   164,   164,   165,
     165,   166,   166,   167,   168,   168,   169,   169
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     4,     3,     3,     2,     2,     6,     7,     1,     0,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     4,     1,     4,     1,     9,     0,     0,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     0,     5,
       6,     2,     1,     0,     1,     3,     1,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     5,     4,     4,     3,
       6,     5,     6,     5,     4,     5,     4,     4,     1,     0,
       2,     3,     1,     2,     1,     3,     1,     3,     2,     1,
       1,     3,     1,     1,     3,     4,     2,     4,     1,     0,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     5,
       1,     0,     1,     3,     1,     1,     2,     1,     8,    11,
       5,    10,    12,    10,    12,    14,    14,    16,    16,     0,
       0,     0,     0,     0,     3,     2,     2,     3,     2,     1,
       2,     1,     1,     7,     1,     0,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 124 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = new Expression();  // Create new expression
            (yyval.expr)->addr = (yyvsp[0].symptr);           // Store pointer to entry in the symbol table
            (yyval.expr)->type = "non_bool";
        }
#line 1951 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 3:
#line 130 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = new Expression();  // Create new expression
            (yyval.expr)->addr = (yyvsp[0].symptr);           // Store pointer to entry in the symbol table
        }
#line 1960 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 4:
#line 135 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = new Expression();  // Create new expression
            (yyval.expr)->addr = SymbolTable::gentemp(new SymbolType("ptr"), (yyvsp[0].charval));  // Create a new temporary, and store the value in that temporary
            (yyval.expr)->addr->sym_type->arrElementType = new SymbolType("char");
        }
#line 1970 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 5:
#line 141 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = (yyvsp[-1].expr);    // Simple assignment
        }
#line 1978 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 6:
#line 148 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.symptr) = SymbolTable::gentemp(new SymbolType("int"), to_string((yyvsp[0].intval)));   // Create a new temporary, and store the value in that temporary
            emit("=", (yyval.symptr)->name, (yyvsp[0].intval));
        }
#line 1987 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 7:
#line 153 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.symptr) = SymbolTable::gentemp(new SymbolType("float"), string((yyvsp[0].charval)));     // Create a new temporary, and store the value in that temporary
            emit("=", (yyval.symptr)->name, string((yyvsp[0].charval)));
        }
#line 1996 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 8:
#line 158 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.symptr) = SymbolTable::gentemp(new SymbolType("float"), string((yyvsp[0].charval)));     // Create a new temporary, and store the value in that temporary
            emit("=", (yyval.symptr)->name, string((yyvsp[0].charval)));
        }
#line 2005 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 9:
#line 166 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.arr) = new Array();           // Create a new Array
            (yyval.arr)->array = (yyvsp[0].expr)->addr;        // Store the location of the primary expression
            (yyval.arr)->type = (yyvsp[0].expr)->addr->sym_type;   // Update the type
            (yyval.arr)->addr = (yyval.arr)->array;
        }
#line 2016 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 10:
#line 173 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.arr) = new Array();               // Create a new Array
            (yyval.arr)->type = (yyvsp[-3].arr)->type->arrElementType;   // Set the type equal to the element type
            (yyval.arr)->array = (yyvsp[-3].arr)->array;          // Copy the base
            (yyval.arr)->addr = SymbolTable::gentemp(new SymbolType("int"));  // Store address of new temporary
            (yyval.arr)->arr_type = "arr";              // Set atype to "arr"

            if((yyvsp[-3].arr)->arr_type == "arr") {        // If we have an "arr" type then, multiply the size of the sub-type of Array with the expression value and add
                Symbol* sym = SymbolTable::gentemp(new SymbolType("int"));
                int sz = sizeOfType((yyval.arr)->type);
                emit("*", sym->name, (yyvsp[-1].expr)->addr->name, to_string(sz));
                emit("+", (yyval.arr)->addr->name, (yyvsp[-3].arr)->addr->name, sym->name);
            }
            else {                          // Compute the size
                int sz = sizeOfType((yyval.arr)->type);
                emit("*", (yyval.arr)->addr->name, (yyvsp[-1].expr)->addr->name, to_string(sz));
            }
        }
#line 2039 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 11:
#line 192 "assn5_20CS30037_20CS30049.y"
        {   
            // Corresponds to calling a function with the function name and the appropriate number of parameters
            (yyval.arr) = new Array();
            (yyval.arr)->array = SymbolTable::gentemp((yyvsp[-3].arr)->type);
            emit("call", (yyval.arr)->array->name, (yyvsp[-3].arr)->array->name, to_string((yyvsp[-1].numParams)));
        }
#line 2050 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 12:
#line 199 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2056 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 13:
#line 201 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2062 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 14:
#line 203 "assn5_20CS30037_20CS30049.y"
        {   
            (yyval.arr) = new Array();
            (yyval.arr)->array = SymbolTable::gentemp((yyvsp[-1].arr)->array->sym_type);      // Generate a new temporary
            emit("=", (yyval.arr)->array->name, (yyvsp[-1].arr)->array->name);            // First assign the old value
            emit("+", (yyvsp[-1].arr)->array->name, (yyvsp[-1].arr)->array->name, "1");       // Then add 1
        }
#line 2073 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 15:
#line 210 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.arr) = new Array();
            (yyval.arr)->array = SymbolTable::gentemp((yyvsp[-1].arr)->array->sym_type);      // Generate a new temporary
            emit("=", (yyval.arr)->array->name, (yyvsp[-1].arr)->array->name);            // First assign the old value
            emit("-", (yyvsp[-1].arr)->array->name, (yyvsp[-1].arr)->array->name, "1");       // Then subtract 1
        }
#line 2084 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 16:
#line 217 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2090 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 17:
#line 219 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2096 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 18:
#line 224 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.numParams) = (yyvsp[0].numParams);    // Assign $1 to $$
        }
#line 2104 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 19:
#line 228 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.numParams) = 0;     // No arguments, just equate to zero
        }
#line 2112 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 20:
#line 235 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.numParams) = 1;                         // consider one argument
            emit("param", (yyvsp[0].expr)->addr->name);   // emit parameter
        }
#line 2121 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 21:
#line 240 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.numParams) = (yyvsp[-2].numParams) + 1;                    // consider one more argument, so add 1
            emit("param", (yyvsp[0].expr)->addr->name);   // emit parameter
        }
#line 2130 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 22:
#line 248 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.arr) = (yyvsp[0].arr);    // Assign $1 to $$
        }
#line 2138 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 23:
#line 252 "assn5_20CS30037_20CS30049.y"
        {
            emit("+", (yyvsp[0].arr)->array->name, (yyvsp[0].arr)->array->name, "1");   // Add 1
            (yyval.arr) = (yyvsp[0].arr);    // Assign
        }
#line 2147 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 24:
#line 257 "assn5_20CS30037_20CS30049.y"
        {
            emit("-", (yyvsp[0].arr)->array->name, (yyvsp[0].arr)->array->name, "1");   // Subtract 1
            (yyval.arr) = (yyvsp[0].arr);    // Assign
        }
#line 2156 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 25:
#line 262 "assn5_20CS30037_20CS30049.y"
        {
            // Case of unary operator
            (yyval.arr) = new Array();
            switch((yyvsp[-1].unaryOp)) {
                case '&':   // Address
                    (yyval.arr)->array = SymbolTable::gentemp(new SymbolType("ptr"));    // Generate a pointer temporary
                    (yyval.arr)->array->sym_type->arrElementType = (yyvsp[0].arr)->array->sym_type;                 // Assign corresponding type
                    emit("= &", (yyval.arr)->array->name, (yyvsp[0].arr)->array->name);              // Emit the quad
                    break;
                case '*':   // De-referencing
                    (yyval.arr)->arr_type = "ptr";
                    (yyval.arr)->addr = SymbolTable::gentemp((yyvsp[0].arr)->array->sym_type->arrElementType);   // Generate a temporary of the appropriate type
                    (yyval.arr)->array = (yyvsp[0].arr)->array;                                      // Assign
                    emit("= *", (yyval.arr)->addr->name, (yyvsp[0].arr)->array->name);                // Emit the quad
                    break;
                case '+':   // Unary plus
                    (yyval.arr) = (yyvsp[0].arr);    // Simple assignment
                    break;
                case '-':   // Unary minus
                    (yyval.arr)->array = SymbolTable::gentemp(new SymbolType((yyvsp[0].arr)->array->sym_type->type));    // Generate temporary of the same base type
                    emit("= -", (yyval.arr)->array->name, (yyvsp[0].arr)->array->name);                              // Emit the quad
                    break;
                case '~':   // Bitwise not
                    (yyval.arr)->array = SymbolTable::gentemp(new SymbolType((yyvsp[0].arr)->array->sym_type->type));    // Generate temporary of the same base type
                    emit("= ~", (yyval.arr)->array->name, (yyvsp[0].arr)->array->name);                              // Emit the quad
                    break;
                case '!':   // Logical not 
                    (yyval.arr)->array = SymbolTable::gentemp(new SymbolType((yyvsp[0].arr)->array->sym_type->type));    // Generate temporary of the same base type
                    emit("= !", (yyval.arr)->array->name, (yyvsp[0].arr)->array->name);                              // Emit the quad
                    break;
            }
        }
#line 2193 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 26:
#line 295 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2199 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 27:
#line 297 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2205 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 28:
#line 302 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.unaryOp) = '&';
        }
#line 2213 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 29:
#line 306 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.unaryOp) = '*';
        }
#line 2221 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 30:
#line 310 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.unaryOp) = '+';
        }
#line 2229 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 31:
#line 314 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.unaryOp) = '-';
        }
#line 2237 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 32:
#line 318 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.unaryOp) = '~';
        }
#line 2245 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 33:
#line 322 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.unaryOp) = '!';
        }
#line 2253 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 34:
#line 329 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.arr) = (yyvsp[0].arr);    // Simple assignment
        }
#line 2261 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 35:
#line 333 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.arr) = new Array();
            (yyval.arr)->array = convertType((yyvsp[0].arr)->array, prevType);    // Generate a new symbol of the appropriate type
        }
#line 2270 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 36:
#line 341 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = new Expression();          // Generate new expression
            if((yyvsp[0].arr)->arr_type == "arr") {        // atype "arr"
                (yyval.expr)->addr = SymbolTable::gentemp((yyvsp[0].arr)->addr->sym_type);  // Generate new temporary
                emit("=[]", (yyval.expr)->addr->name, (yyvsp[0].arr)->array->name, (yyvsp[0].arr)->addr->name);     // Emit the quad
            }
            else if((yyvsp[0].arr)->arr_type == "ptr") {   // atype "ptr"
                (yyval.expr)->addr = (yyvsp[0].arr)->addr;          // Assign the symbol table entry
            }
            else {
                (yyval.expr)->addr = (yyvsp[0].arr)->array;
            }
        }
#line 2288 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 37:
#line 355 "assn5_20CS30037_20CS30049.y"
        {   
            // Indicates multiplication
            if(typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].arr)->array)) {     // Check for type compatibility
                (yyval.expr) = new Expression();                                                  // Generate new expression
                (yyval.expr)->addr = SymbolTable::gentemp(new SymbolType((yyvsp[-2].expr)->addr->sym_type->type));    // Generate new temporary
                emit("*", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].arr)->array->name);               // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2304 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 38:
#line 367 "assn5_20CS30037_20CS30049.y"
        {
            // Indicates division
            if(typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].arr)->array)) {     // Check for type compatibility
                (yyval.expr) = new Expression();                                                  // Generate new expression
                (yyval.expr)->addr = SymbolTable::gentemp(new SymbolType((yyvsp[-2].expr)->addr->sym_type->type));    // Generate new temporary
                emit("/", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].arr)->array->name);               // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2320 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 39:
#line 379 "assn5_20CS30037_20CS30049.y"
        {
            // Indicates modulo
            if(typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].arr)->array)) {     // Check for type compatibility
                (yyval.expr) = new Expression();                                                  // Generate new expression
                (yyval.expr)->addr = SymbolTable::gentemp(new SymbolType((yyvsp[-2].expr)->addr->sym_type->type));    // Generate new temporary
                emit("%", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].arr)->array->name);               // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2336 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 40:
#line 394 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2344 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 41:
#line 398 "assn5_20CS30037_20CS30049.y"
        {   
            // Indicates addition
            if(typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {       // Check for type compatibility
                (yyval.expr) = new Expression();                                                  // Generate new expression
                (yyval.expr)->addr = SymbolTable::gentemp(new SymbolType((yyvsp[-2].expr)->addr->sym_type->type));    // Generate new temporary
                emit("+", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name);                 // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2360 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 42:
#line 410 "assn5_20CS30037_20CS30049.y"
        {
            // Indicates subtraction
            if(typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {       // Check for type compatibility
                (yyval.expr) = new Expression();                                                  // Generate new expression
                (yyval.expr)->addr = SymbolTable::gentemp(new SymbolType((yyvsp[-2].expr)->addr->sym_type->type));    // Generate new temporary
                emit("-", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name);                 // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2376 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 43:
#line 425 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2384 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 44:
#line 429 "assn5_20CS30037_20CS30049.y"
        {
            // Indicates left shift
            if((yyvsp[0].expr)->addr->sym_type->type == "int") {      // Check for type compatibility (int)
                (yyval.expr) = new Expression();                                      // Generate new expression
                (yyval.expr)->addr = SymbolTable::gentemp(new SymbolType("int"));      // Generate new temporary
                emit("<<", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name);    // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2400 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 45:
#line 441 "assn5_20CS30037_20CS30049.y"
        {
            // Indicates right shift
            if((yyvsp[0].expr)->addr->sym_type->type == "int") {      // Check for type compatibility (int)
                (yyval.expr) = new Expression();                                      // Generate new expression
                (yyval.expr)->addr = SymbolTable::gentemp(new SymbolType("int"));      // Generate new temporary
                emit(">>", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name);    // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2416 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 46:
#line 456 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2424 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 47:
#line 460 "assn5_20CS30037_20CS30049.y"
        {
            if(typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {                   // Check for type compatibility
                (yyval.expr) = new Expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit("<", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name);    // Emit "if x < y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2442 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 48:
#line 474 "assn5_20CS30037_20CS30049.y"
        {
            if(typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {                   // Check for type compatibility
                (yyval.expr) = new Expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit(">", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name);    // Emit "if x > y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2460 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 49:
#line 488 "assn5_20CS30037_20CS30049.y"
        {
            if(typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {                   // Check for type compatibility
                (yyval.expr) = new Expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit("<=", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name);   // Emit "if x <= y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2478 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 50:
#line 502 "assn5_20CS30037_20CS30049.y"
        {
            if(typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {                   // Check for type compatibility
                (yyval.expr) = new Expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit(">=", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name);   // Emit "if x >= y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2496 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 51:
#line 519 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2504 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 52:
#line 523 "assn5_20CS30037_20CS30049.y"
        {
            if(typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {                   // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                           // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new Expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit("==", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name);   // Emit "if x == y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2524 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 53:
#line 539 "assn5_20CS30037_20CS30049.y"
        {
            if(typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {                   // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                           // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new Expression();                          // Generate new expression of type bool
                (yyval.expr)->type = "bool";
                (yyval.expr)->truelist = makelist(nextinstr());           // Create truelist for boolean expression
                (yyval.expr)->falselist = makelist(nextinstr() + 1);      // Create falselist for boolean expression
                emit("!=", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name);   // Emit "if x != y goto ..."
                emit("goto", "");                               // Emit "goto ..."
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2544 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 54:
#line 558 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2552 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 55:
#line 562 "assn5_20CS30037_20CS30049.y"
        {
            if(typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {                               // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                                       // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new Expression();
                (yyval.expr)->type = "not_bool";                                      // The new result is not bool
                (yyval.expr)->addr = SymbolTable::gentemp(new SymbolType("int"));      // Create a new temporary
                emit("&", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name);     // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2570 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 56:
#line 579 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2578 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 57:
#line 583 "assn5_20CS30037_20CS30049.y"
        {
            if(typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {                               // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                                       // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new Expression();
                (yyval.expr)->type = "not_bool";                                      // The new result is not bool
                (yyval.expr)->addr = SymbolTable::gentemp(new SymbolType("int"));      // Create a new temporary
                emit("^", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name);     // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2596 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 58:
#line 600 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2604 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 59:
#line 604 "assn5_20CS30037_20CS30049.y"
        {
            if(typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {                               // Check for type compatibility
                convertBoolToInt((yyvsp[-2].expr));                                       // Convert bool to int
                convertBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new Expression();
                (yyval.expr)->type = "not_bool";                                      // The new result is not bool
                (yyval.expr)->addr = SymbolTable::gentemp(new SymbolType("int"));      // Create a new temporary
                emit("|", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name);     // Emit the quad
            }
            else {
                yyerror("Type Error");
            }
        }
#line 2622 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 60:
#line 621 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2630 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 61:
#line 625 "assn5_20CS30037_20CS30049.y"
        {
            /*
                Here, we have augmented the grammar with the non-terminal M to facilitate backpatching
            */
            convertIntToBool((yyvsp[-3].expr));                                   // Convert the expressions from int to bool
            convertIntToBool((yyvsp[0].expr));
            (yyval.expr) = new Expression();                                  // Create a new bool expression for the result
            (yyval.expr)->type = "bool";
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr));                            // Backpatching
            (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;                            // Generate truelist from truelist of $4
            (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);    // Generate falselist by merging the falselists of $1 and $4
        }
#line 2647 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 62:
#line 641 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2655 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 63:
#line 645 "assn5_20CS30037_20CS30049.y"
        {
            convertIntToBool((yyvsp[-3].expr));                                   // Convert the expressions from int to bool
            convertIntToBool((yyvsp[0].expr));
            (yyval.expr) = new Expression();                                  // Create a new bool expression for the result
            (yyval.expr)->type = "bool";
            backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].instr));                           // Backpatching
            (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;                          // Generate falselist from falselist of $4
            (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);       // Generate truelist by merging the truelists of $1 and $4
        }
#line 2669 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 64:
#line 658 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2677 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 65:
#line 662 "assn5_20CS30037_20CS30049.y"
        {   
            /*
                Note the augmented grammar with the non-terminals M and N
            */
            (yyval.expr)->addr = SymbolTable::gentemp((yyvsp[-4].expr)->addr->sym_type);      // Generate temporary for the expression
            (yyval.expr)->addr->update_symbol((yyvsp[-4].expr)->addr->sym_type);
            emit("=", (yyval.expr)->addr->name, (yyvsp[0].expr)->addr->name);            // Assign the conditional expression
            list<int> l1 = makelist(nextinstr());
            emit("goto", "");                                   // Prevent fall-through
            backpatch((yyvsp[-3].stmt)->nextlist, nextinstr());               // Make list with next instruction
            emit("=", (yyval.expr)->addr->name, (yyvsp[-4].expr)->addr->name);
            list<int> l2 = makelist(nextinstr());               // Make list with next instruction
            l1 = merge(l1, l2);                                 // Merge the two lists
            emit("goto", "");                                   // Prevent fall-through
            backpatch((yyvsp[-7].stmt)->nextlist, nextinstr());               // Backpatching
            convertIntToBool((yyvsp[-8].expr));                               // Convert expression to bool
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr));                        // When $1 is true, control goes to $4 (expression)
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr));                       // When $1 is false, control goes to $8 (conditional_expression)
            backpatch(l1, nextinstr());
        }
#line 2702 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 66:
#line 685 "assn5_20CS30037_20CS30049.y"
        {   
            // Stores the next instruction value, and helps in backpatching
            (yyval.instr) = nextinstr();
        }
#line 2711 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 67:
#line 692 "assn5_20CS30037_20CS30049.y"
        {
            // Helps in control flow
            (yyval.stmt) = new Statement();
            (yyval.stmt)->nextlist = makelist(nextinstr());
            emit("goto", "");
        }
#line 2722 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 68:
#line 702 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 2730 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 69:
#line 706 "assn5_20CS30037_20CS30049.y"
        {
            if((yyvsp[-2].arr)->arr_type == "arr") {        // If atype is "arr", convert and emit
                (yyvsp[0].expr)->addr = convertType((yyvsp[0].expr)->addr, (yyvsp[-2].arr)->type->type);
                emit("[]=", (yyvsp[-2].arr)->array->name, (yyvsp[-2].arr)->addr->name, (yyvsp[0].expr)->addr->name);
            }
            else if((yyvsp[-2].arr)->arr_type == "ptr") {   // If atype is "ptr", emit 
                emit("*=", (yyvsp[-2].arr)->array->name, (yyvsp[0].expr)->addr->name);
            }
            else {
                (yyvsp[0].expr)->addr = convertType((yyvsp[0].expr)->addr, (yyvsp[-2].arr)->array->sym_type->type);
                emit("=", (yyvsp[-2].arr)->array->name, (yyvsp[0].expr)->addr->name);
            }
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2749 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 70:
#line 724 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2755 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 71:
#line 726 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2761 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 72:
#line 728 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2767 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 73:
#line 730 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2773 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 74:
#line 732 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2779 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 75:
#line 734 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2785 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 76:
#line 736 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2791 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 77:
#line 738 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2797 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 78:
#line 740 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2803 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 79:
#line 742 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2809 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 80:
#line 744 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2815 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 81:
#line 749 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2823 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 82:
#line 753 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2829 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 83:
#line 758 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2835 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 84:
#line 763 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2841 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 85:
#line 765 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2847 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 86:
#line 770 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2853 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 87:
#line 772 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2859 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 88:
#line 774 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2865 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 89:
#line 776 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2871 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 90:
#line 778 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2877 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 91:
#line 780 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2883 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 92:
#line 782 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2889 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 93:
#line 784 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2895 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 94:
#line 789 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2901 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 95:
#line 791 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2907 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 96:
#line 796 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.symptr) = (yyvsp[0].symptr);
        }
#line 2915 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 97:
#line 800 "assn5_20CS30037_20CS30049.y"
        {   
            // Find out the initial value and emit it
            if((yyvsp[0].symptr)->val != "") {
                (yyvsp[-2].symptr)->val = (yyvsp[0].symptr)->val;
            }
            emit("=", (yyvsp[-2].symptr)->name, (yyvsp[0].symptr)->name);
        }
#line 2927 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 98:
#line 811 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2933 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 99:
#line 813 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2939 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 100:
#line 815 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2945 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 101:
#line 817 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2951 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 102:
#line 822 "assn5_20CS30037_20CS30049.y"
        {
            prevType = "void";   // Store the latest encountered type in prevType
        }
#line 2959 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 103:
#line 826 "assn5_20CS30037_20CS30049.y"
        {
            prevType = "char";   // Store the latest encountered type in prevType
        }
#line 2967 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 104:
#line 830 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2973 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 105:
#line 832 "assn5_20CS30037_20CS30049.y"
        {
            prevType = "int";    // Store the latest encountered type in prevType
        }
#line 2981 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 106:
#line 836 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 2987 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 107:
#line 838 "assn5_20CS30037_20CS30049.y"
        {
            prevType = "float";  // Store the latest encountered type in prevType
        }
#line 2995 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 108:
#line 842 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3001 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 109:
#line 844 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3007 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 110:
#line 846 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3013 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 111:
#line 848 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3019 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 112:
#line 850 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3025 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 113:
#line 852 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3031 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 114:
#line 854 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3037 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 115:
#line 859 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3043 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 116:
#line 861 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3049 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 117:
#line 866 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3055 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 118:
#line 868 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3061 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 119:
#line 873 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3067 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 120:
#line 875 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3073 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 121:
#line 877 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3079 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 122:
#line 882 "assn5_20CS30037_20CS30049.y"
        {/* Ignored */}
#line 3085 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 123:
#line 884 "assn5_20CS30037_20CS30049.y"
        {/* Ignored */}
#line 3091 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 124:
#line 889 "assn5_20CS30037_20CS30049.y"
        {/* Ignored */}
#line 3097 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 125:
#line 891 "assn5_20CS30037_20CS30049.y"
        {/* Ignored */}
#line 3103 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 126:
#line 896 "assn5_20CS30037_20CS30049.y"
        {/* Ignored */}
#line 3109 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 127:
#line 898 "assn5_20CS30037_20CS30049.y"
        {/* Ignored */}
#line 3115 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 128:
#line 903 "assn5_20CS30037_20CS30049.y"
        {/* Ignored */}
#line 3121 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 129:
#line 905 "assn5_20CS30037_20CS30049.y"
        {/* Ignored */}
#line 3127 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 130:
#line 907 "assn5_20CS30037_20CS30049.y"
        {/* Ignored */}
#line 3133 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 131:
#line 912 "assn5_20CS30037_20CS30049.y"
        {/* Ignored */}
#line 3139 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 132:
#line 917 "assn5_20CS30037_20CS30049.y"
        {
            SymbolType* t = (yyvsp[-1].symType);
            // In case of multi-dimesnional arrays, keep on going down in a hierarchial fashion to get the base type
            while(t->arrElementType != NULL) {
                t = t->arrElementType;
            }
            t->arrElementType = (yyvsp[0].symptr)->sym_type;  // Store the base type
            (yyval.symptr) = (yyvsp[0].symptr)->update_symbol((yyvsp[-1].symType));    // Update
        }
#line 3153 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 133:
#line 927 "assn5_20CS30037_20CS30049.y"
        {/* Ignored */}
#line 3159 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 134:
#line 932 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.symptr) = (yyvsp[0].symptr)->update_symbol(new SymbolType(prevType));   // For an identifier, update the type to prevType
            currentSym = (yyval.symptr);                         // Update pointer to current symbol
        }
#line 3168 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 135:
#line 937 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.symptr) = (yyvsp[-1].symptr);    // Simple assignment
        }
#line 3176 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 136:
#line 941 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3182 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 137:
#line 943 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3188 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 138:
#line 945 "assn5_20CS30037_20CS30049.y"
        {
            SymbolType* t = (yyvsp[-3].symptr)->sym_type;
            SymbolType* prev = NULL;
            // Keep moving recursively to get the base type
            while(t->type == "arr") {
                prev = t;
                t = t->arrElementType;
            }
            if(prev == NULL) {
                int temp = atoi((yyvsp[-1].expr)->addr->val.c_str());                // Get initial value
                SymbolType* tp = new SymbolType("arr", (yyvsp[-3].symptr)->sym_type, temp); // Create that type
                (yyval.symptr) = (yyvsp[-3].symptr)->update_symbol(tp);                                    // Update the symbol table for that symbol
            }
            else {
                int temp = atoi((yyvsp[-1].expr)->addr->val.c_str());                // Get initial value
                prev->arrElementType = new SymbolType("arr", t, temp);         // Create that type
                (yyval.symptr) = (yyvsp[-3].symptr)->update_symbol((yyvsp[-3].symptr)->sym_type);                              // Update the symbol table for that symbol
            }
        }
#line 3212 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 139:
#line 965 "assn5_20CS30037_20CS30049.y"
        {
            SymbolType* t = (yyvsp[-2].symptr)->sym_type;
            SymbolType* prev = NULL;
            // Keep moving recursively to get the base type
            while(t->type == "arr") {
                prev = t;
                t = t->arrElementType;
            }
            if(prev == NULL) {
                SymbolType* tp = new SymbolType("arr", (yyvsp[-2].symptr)->sym_type, 0);
                (yyval.symptr) = (yyvsp[-2].symptr)->update_symbol(tp);
            }
            else {
                prev->arrElementType = new SymbolType("arr", t, 0);
                (yyval.symptr) = (yyvsp[-2].symptr)->update_symbol((yyvsp[-2].symptr)->sym_type);
            }
        }
#line 3234 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 140:
#line 983 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3240 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 141:
#line 985 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3246 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 142:
#line 987 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3252 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 143:
#line 989 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3258 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 144:
#line 991 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3264 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 145:
#line 993 "assn5_20CS30037_20CS30049.y"
        {
            SymTbl_Current->name = (yyvsp[-4].symptr)->name;
            if((yyvsp[-4].symptr)->sym_type->type != "void") {
                Symbol* s = SymTbl_Current->lookup("return");    // Lookup for return value
                s->update_symbol((yyvsp[-4].symptr)->sym_type);
            }
            (yyvsp[-4].symptr)->nestedTblPtr = SymTbl_Current;
            SymTbl_Current->parent = SymTbl_Global;   // Update parent symbol table
            switchTable(SymTbl_Global);          // Switch current table to point to the global symbol table
            currentSym = (yyval.symptr);             // Update current symbol
        }
#line 3280 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 146:
#line 1005 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3286 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 147:
#line 1007 "assn5_20CS30037_20CS30049.y"
        {
            SymTbl_Current->name = (yyvsp[-3].symptr)->name;
            if((yyvsp[-3].symptr)->sym_type->type != "void") {
                Symbol* s = SymTbl_Current->lookup("return");    // Lookup for return value
                s->update_symbol((yyvsp[-3].symptr)->sym_type);
            }
            (yyvsp[-3].symptr)->nestedTblPtr = SymTbl_Current;
            SymTbl_Current->parent = SymTbl_Global;   // Update parent symbol table
            switchTable(SymTbl_Global);          // Switch current table to point to the global symbol table
            currentSym = (yyval.symptr);             // Update current symbol
        }
#line 3302 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 148:
#line 1022 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3308 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 149:
#line 1024 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3314 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 150:
#line 1029 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.symType) = new SymbolType("ptr");     //  Create new type "ptr"
        }
#line 3322 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 151:
#line 1033 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.symType) = new SymbolType("ptr", (yyvsp[0].symType)); //  Create new type "ptr"
        }
#line 3330 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 152:
#line 1040 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3336 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 153:
#line 1042 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3342 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 154:
#line 1047 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3348 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 155:
#line 1049 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3354 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 156:
#line 1054 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3360 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 157:
#line 1056 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3366 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 158:
#line 1061 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3372 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 159:
#line 1063 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3378 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 160:
#line 1068 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3384 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 161:
#line 1070 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3390 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 162:
#line 1075 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3396 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 163:
#line 1080 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.symptr) = (yyvsp[0].expr)->addr;   // Simple assignment
        }
#line 3404 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 164:
#line 1084 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3410 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 165:
#line 1086 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3416 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 166:
#line 1091 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3422 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 167:
#line 1093 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3428 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 168:
#line 1098 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3434 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 169:
#line 1100 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3440 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 170:
#line 1105 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3446 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 171:
#line 1110 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3452 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 172:
#line 1112 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3458 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 173:
#line 1117 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3464 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 174:
#line 1119 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3470 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 175:
#line 1124 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3476 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 176:
#line 1126 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3484 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 177:
#line 1130 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = new Statement();           // Create new statement
            (yyval.stmt)->nextlist = (yyvsp[0].expr)->nextlist;    // Assign same nextlist
        }
#line 3493 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 178:
#line 1135 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3501 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 179:
#line 1139 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3509 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 180:
#line 1143 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3517 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 181:
#line 1151 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3523 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 182:
#line 1153 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = new Statement();           // Create new statement
            (yyval.stmt)->nextlist = (yyvsp[0].expr)->nextlist;    // Assign same nextlist
        }
#line 3532 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 183:
#line 1158 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3540 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 184:
#line 1162 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3548 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 185:
#line 1166 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3556 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 186:
#line 1173 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3562 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 187:
#line 1175 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3568 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 188:
#line 1177 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3574 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 189:
#line 1182 "assn5_20CS30037_20CS30049.y"
        {
            /*
                Here, the grammar has been augmented with non-terminals like X and change_table to allow creation of nested symbol tables
            */
            (yyval.stmt) = (yyvsp[-1].stmt);
            switchTable(SymTbl_Current->parent);     // Update current symbol table
        }
#line 3586 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 190:
#line 1193 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3594 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 191:
#line 1197 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = new Statement();   // Create new statement
        }
#line 3602 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 192:
#line 1204 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3610 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 193:
#line 1208 "assn5_20CS30037_20CS30049.y"
        {   
            /*
                This production rule has been augmented with the non-terminal M
            */
            (yyval.stmt) = (yyvsp[0].stmt);
            backpatch((yyvsp[-2].stmt)->nextlist, (yyvsp[-1].instr));    // After $1, move to block_item via $2
        }
#line 3622 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 194:
#line 1219 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = new Statement();   // Create new statement
        }
#line 3630 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 195:
#line 1223 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = (yyvsp[0].stmt);    // Simple assignment
        }
#line 3638 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 196:
#line 1230 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = (yyvsp[-1].expr);    // Simple assignment
        }
#line 3646 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 197:
#line 1234 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.expr) = new Expression();  // Create new expression
        }
#line 3654 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 198:
#line 1241 "assn5_20CS30037_20CS30049.y"
        {
            /*
                This production rule has been augmented for control flow
            */
            backpatch((yyvsp[-4].stmt)->nextlist, nextinstr());                   // nextlist of N now has nextinstr
            convertIntToBool((yyvsp[-5].expr));                                   // Convert expression to bool
            (yyval.stmt) = new Statement();                                   // Create new statement
            backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr));                            // Backpatching - if expression is true, go to M
            // Merge falselist of expression, nextlist of statement and nextlist of the last N
            list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge((yyvsp[0].stmt)->nextlist, temp);
        }
#line 3671 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 199:
#line 1254 "assn5_20CS30037_20CS30049.y"
        {
            /*
                This production rule has been augmented for control flow
            */
            backpatch((yyvsp[-7].stmt)->nextlist, nextinstr());                   // nextlist of N now has nextinstr
            convertIntToBool((yyvsp[-8].expr));                                   // Convert expression to bool
            (yyval.stmt) = new Statement();                                   // Create new statement
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr));                            // Backpatching - if expression is true, go to first M, else go to second M
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr));
            // Merge nextlist of statement, nextlist of N and nextlist of the last statement
            list<int> temp = merge((yyvsp[-4].stmt)->nextlist, (yyvsp[-3].stmt)->nextlist);
            (yyval.stmt)->nextlist = merge((yyvsp[0].stmt)->nextlist, temp);
        }
#line 3689 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 200:
#line 1268 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3695 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 201:
#line 1273 "assn5_20CS30037_20CS30049.y"
        {   
            /*
                This production rule has been augmented with non-terminals like W, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmt) = new Statement();                   // Create a new statement
            convertIntToBool((yyvsp[-3].expr));                   // Convert expression to bool
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-4].instr));           // Go back to M1 and expression after one iteration of loop_statement
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr));            // Go to M2 and loop_statement if expression is true
            (yyval.stmt)->nextlist = (yyvsp[-3].expr)->falselist;           // Exit loop if expression is false
            emit("goto", to_string((yyvsp[-4].instr)));   // Emit to prevent fall-through
            BlockName = "";
            switchTable(SymTbl_Current->parent);
        }
#line 3714 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 202:
#line 1288 "assn5_20CS30037_20CS30049.y"
        {
            /*
                This production rule has been augmented with non-terminals like W, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmt) = new Statement();                   // Create a new statement
            convertIntToBool((yyvsp[-5].expr));                   // Convert expression to bool
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-6].instr));           // Go back to M1 and expression after one iteration
            backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr));           // Go to M2 and block_item_list_opt if expression is true
            (yyval.stmt)->nextlist = (yyvsp[-5].expr)->falselist;           // Exit loop if expression is false
            emit("goto", to_string((yyvsp[-6].instr)));   // Emit to prevent fall-through
            BlockName = "";
            switchTable(SymTbl_Current->parent);
        }
#line 3733 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 203:
#line 1303 "assn5_20CS30037_20CS30049.y"
        {
            /*
                This production rule has been augmented with non-terminals like D and M to handle the control flow, backpatching and detect the kind of loop
            */
            (yyval.stmt) = new Statement();                   // Create a new statement     
            convertIntToBool((yyvsp[-2].expr));                   // Convert expression to bool
            backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-7].instr));            // Go back to M1 and loop_statement if expression is true
            backpatch((yyvsp[-6].stmt)->nextlist, (yyvsp[-5].instr));            // Go to M2 to check expression after statement is complete
            (yyval.stmt)->nextlist = (yyvsp[-2].expr)->falselist;           // Exit loop if expression is false  
            BlockName = "";
        }
#line 3749 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 204:
#line 1315 "assn5_20CS30037_20CS30049.y"
        {
            /*
                This production rule has been augmented with non-terminals like D and M to handle the control flow, backpatching and detect the kind of loop
            */
            (yyval.stmt) = new Statement();                   // Create a new statement  
            convertIntToBool((yyvsp[-2].expr));                  // Convert expression to bool
            backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-8].instr));           // Go back to M1 and block_item_list_opt if expression is true
            backpatch((yyvsp[-7].stmt)->nextlist, (yyvsp[-5].instr));            // Go to M2 to check expression after block_item_list_opt is complete
            (yyval.stmt)->nextlist = (yyvsp[-2].expr)->falselist;          // Exit loop if expression is false  
            BlockName = "";
        }
#line 3765 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 205:
#line 1327 "assn5_20CS30037_20CS30049.y"
        {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmt) = new Statement();                   // Create a new statement
            convertIntToBool((yyvsp[-6].expr));                   // Convert expression to bool
            backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr));           // Go to M3 if expression is true
            backpatch((yyvsp[-3].stmt)->nextlist, (yyvsp[-7].instr));           // Go back to M1 after N
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-5].instr));           // Go back to expression after loop_statement
            emit("goto", to_string((yyvsp[-5].instr)));   // Emit to prevent fall-through
            (yyval.stmt)->nextlist = (yyvsp[-6].expr)->falselist;           // Exit loop if expression_statement is false
            BlockName = "";
            switchTable(SymTbl_Current->parent);
        }
#line 3785 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 206:
#line 1343 "assn5_20CS30037_20CS30049.y"
        {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmt) = new Statement();                   // Create a new statement
            convertIntToBool((yyvsp[-6].expr));                   // Convert expression to bool
            backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr));           // Go to M3 if expression is true
            backpatch((yyvsp[-3].stmt)->nextlist, (yyvsp[-7].instr));           // Go back to M1 after N
            backpatch((yyvsp[0].stmt)->nextlist, (yyvsp[-5].instr));           // Go back to expression after loop_statement
            emit("goto", to_string((yyvsp[-5].instr)));   // Emit to prevent fall-through
            (yyval.stmt)->nextlist = (yyvsp[-6].expr)->falselist;           // Exit loop if expression_statement is false
            BlockName = "";
            switchTable(SymTbl_Current->parent);
        }
#line 3805 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 207:
#line 1359 "assn5_20CS30037_20CS30049.y"
        {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmt) = new Statement();                   // Create a new statement
            convertIntToBool((yyvsp[-8].expr));                   // Convert expression to bool
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr));           // Go to M3 if expression is true
            backpatch((yyvsp[-5].stmt)->nextlist, (yyvsp[-9].instr));           // Go back to M1 after N
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-7].instr));           // Go back to expression after loop_statement
            emit("goto", to_string((yyvsp[-7].instr)));   // Emit to prevent fall-through
            (yyval.stmt)->nextlist = (yyvsp[-8].expr)->falselist;           // Exit loop if expression_statement is false
            BlockName = "";
            switchTable(SymTbl_Current->parent);
        }
#line 3825 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 208:
#line 1375 "assn5_20CS30037_20CS30049.y"
        {
            /*
                This production rule has been augmented with non-terminals like F, X, change_table and M to handle the control flow, 
                backpatching, detect the kind of loop, create a separate symbol table for the loop block and give it an appropriate name
            */
            (yyval.stmt) = new Statement();                   // Create a new statement
            convertIntToBool((yyvsp[-8].expr));                   // Convert expression to bool
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr));           // Go to M3 if expression is true
            backpatch((yyvsp[-5].stmt)->nextlist, (yyvsp[-9].instr));           // Go back to M1 after N
            backpatch((yyvsp[-1].stmt)->nextlist, (yyvsp[-7].instr));           // Go back to expression after loop_statement
            emit("goto", to_string((yyvsp[-7].instr)));            // Emit to prevent fall-through
            (yyval.stmt)->nextlist = (yyvsp[-8].expr)->falselist;           // Exit loop if expression_statement is false
            BlockName = "";
            switchTable(SymTbl_Current->parent);
        }
#line 3845 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 209:
#line 1393 "assn5_20CS30037_20CS30049.y"
        {   
            /*
            This non-terminal indicates the start of a for loop
            */
            BlockName = "FOR";
        }
#line 3856 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 210:
#line 1402 "assn5_20CS30037_20CS30049.y"
        {
            /*
            This non-terminal indicates the start of a while loop
            */
            BlockName = "WHILE";
        }
#line 3867 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 211:
#line 1411 "assn5_20CS30037_20CS30049.y"
        {
            /*
            This non-terminal indicates the start of a do-while loop
            */
            BlockName = "DO_WHILE";
        }
#line 3878 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 212:
#line 1420 "assn5_20CS30037_20CS30049.y"
        {   
            // Used for creating new nested symbol tables for nested blocks
            string newST = SymTbl_Current->name + "." + BlockName + "$" + to_string(SymTbl_Count++);  // Generate name for new symbol table
            Symbol* sym = SymTbl_Current->lookup(newST);
            sym->nestedTblPtr = new SymbolTable(newST);  // Create new symbol table
            sym->name = newST;
            sym->nestedTblPtr->parent = SymTbl_Current;
            sym->sym_type = new SymbolType("block");    // The type will be "block"
            currentSym = sym;    // Change the current symbol pointer
        }
#line 3893 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 213:
#line 1433 "assn5_20CS30037_20CS30049.y"
        {   
            // Used for changing the symbol table on encountering functions
            if(currentSym->nestedTblPtr != NULL) {
                // If the symbol table already exists, switch to that table
                switchTable(currentSym->nestedTblPtr);
                emit("label", SymTbl_Current->name);
            }
            else {
                // If the symbol table does not exist already, create it and switch to it
                switchTable(new SymbolTable(""));
            }
        }
#line 3910 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 214:
#line 1449 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3916 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 215:
#line 1451 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = new Statement();
        }
#line 3924 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 216:
#line 1455 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = new Statement();
        }
#line 3932 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 217:
#line 1459 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = new Statement();
            emit("return", (yyvsp[-1].expr)->addr->name);  // Emit return alongwith return value
        }
#line 3941 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 218:
#line 1464 "assn5_20CS30037_20CS30049.y"
        {
            (yyval.stmt) = new Statement();
            emit("return", "");             // Emit return without any return value
        }
#line 3950 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 219:
#line 1472 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3956 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 220:
#line 1474 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3962 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 221:
#line 1479 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3968 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 222:
#line 1481 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3974 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 223:
#line 1486 "assn5_20CS30037_20CS30049.y"
        {   
            SymTbl_Current->parent = SymTbl_Global;
            SymTbl_Count = 0;
            switchTable(SymTbl_Global);          // After reaching end of a function, change cureent symbol table to the global symbol table
        }
#line 3984 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 224:
#line 1495 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3990 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 225:
#line 1497 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 3996 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 226:
#line 1502 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 4002 "assn5_20CS30037_20CS30049.tab.c"
    break;

  case 227:
#line 1504 "assn5_20CS30037_20CS30049.y"
        { /* Ignored */ }
#line 4008 "assn5_20CS30037_20CS30049.tab.c"
    break;


#line 4012 "assn5_20CS30037_20CS30049.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1507 "assn5_20CS30037_20CS30049.y"


void yyerror(string s) {
    /*
        This function prints any error encountered while parsing
    */
    cout << "Error occurred: " << s << endl;
    cout << "Line no.: " << yylineno << endl;
    cout << "Unable to parse: " << yytext << endl; 
}
