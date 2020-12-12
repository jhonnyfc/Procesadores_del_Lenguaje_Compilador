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
#line 2 "parser.y"

    #include <stdio.h>
    #include <stdarg.h>
    #include "utiles.h"
    #include "tab_sim.h"
    #include "tab_cua.h"
    #include "bool_tools.h"

    extern FILE *yyin;
    extern int yylineno;

    symTab      miSimTab;
    quadTab     miQuadTab;

    int yylex (void);
    void yyerror (char const *, ...);

#line 88 "parser.tab.c"

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
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_PR_CONTINUAR = 258,
    TK_PR_DE = 259,
    TK_PR_DEV = 260,
    TK_PR_ENT = 261,
    TK_PR_INOUT = 262,
    TK_PR_HACER = 263,
    TK_PR_HASTA = 264,
    TK_PR_REF = 265,
    TK_PR_SAL = 266,
    TK_PR_VERDADERO = 267,
    TK_PR_FALSO = 268,
    TK_PR_FUNCION = 269,
    TK_PR_FFUNCION = 270,
    TK_PR_ACCION = 271,
    TK_PR_FACCIO = 272,
    TK_PR_ALGORIT = 273,
    TK_PR_FALGORI = 274,
    TK_PR_MIENTRAS = 275,
    TK_PR_FMIENTR = 276,
    TK_PR_PARA = 277,
    TK_PR_FPARA = 278,
    TK_PR_SI = 279,
    TK_PR_FSI = 280,
    TK_PR_TIPO = 281,
    TK_PR_FTIPO = 282,
    TK_PR_TUPLA = 283,
    TK_PR_FTUPLA = 284,
    TK_PR_VAR = 285,
    TK_PR_FVAR = 286,
    TK_PR_REAL = 287,
    TK_PR_ENTERO = 288,
    TK_PR_BOOL = 289,
    TK_PR_CADENA = 290,
    TK_PR_CHAR = 291,
    TK_PR_CONST = 292,
    TK_PR_FCONST = 293,
    TK_PR_TABLA = 294,
    TK_PR_ASIG = 295,
    TK_PR_SECUEN = 296,
    TK_PR_ELSE = 297,
    TK_PR_INIARRA = 298,
    TK_PR_FINARRA = 299,
    TK_PR_ENTONCES = 300,
    TK_PR_COMA = 301,
    TK_PR_PUNTO = 302,
    TK_PR_SUBRANGO = 303,
    TK_PR_DEFVAL = 304,
    TK_PR_ABRIRPAR = 305,
    TK_PR_CERRARPAR = 306,
    TK_PR_SUMA = 307,
    TK_PR_MULT = 308,
    TK_PR_RESTA = 309,
    TK_PR_BARRA = 310,
    TK_PR_DIV = 311,
    TK_PR_MOD = 312,
    TK_PR_MAYOR = 313,
    TK_PR_MENOR = 314,
    TK_PR_MAYIGU = 315,
    TK_PR_MENIGU = 316,
    TK_PR_IGUAL = 317,
    TK_PR_DIST = 318,
    TK_PR_O = 319,
    TK_PR_Y = 320,
    TK_PR_NO = 321,
    TK_ID_ARI = 322,
    TK_ID_BOL = 323,
    TK_LIT_CARAC = 324,
    TK_LIT_CADE = 325,
    TK_LIT_COMENTARIO = 326,
    TK_LIT_ENTERO = 327,
    TK_LIT_REAL = 328,
    TK_LIT_BOOL = 329
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 122 "parser.y"

    double      ty_num_real;
    long int    ty_num_entero;
    char        *ty_string;
    char        ty_caracter;
    int         ty_boolean;

    int         ty_tipo;

    st_arit     ty_st_ari;
    st_bool     ty_st_bool;

    st_exp      ty_st_exp;

#line 230 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   368

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  259

#define YYUNDEFTOK  2
#define YYMAXUTOK   329


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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   140,   140,   148,   156,   164,   169,   174,   182,   187,
     192,   200,   208,   213,   218,   223,   233,   241,   249,   257,
     262,   270,   276,   282,   288,   294,   300,   306,   312,   318,
     324,   333,   338,   346,   351,   359,   364,   372,   377,   382,
     387,   392,   397,   407,   413,   421,   431,   439,   447,   458,
     463,   468,   476,   484,   492,   500,   508,   516,   555,   593,
     631,   675,   690,   705,   711,   717,   724,   731,   754,   762,
     770,   777,   783,   788,   793,   803,   811,   817,   823,   829,
     835,   841,   850,   856,   864,   869,   874,   882,   893,   898,
     903,   911,   916,   924,   929,   934,   939,   944,   952,   963,
     977,   985,   990,   998,  1003,  1011,  1019,  1028,  1036,  1044,
    1052,  1060,  1065,  1073,  1078,  1083,  1091,  1099,  1107,  1112
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_PR_CONTINUAR", "TK_PR_DE",
  "TK_PR_DEV", "TK_PR_ENT", "TK_PR_INOUT", "TK_PR_HACER", "TK_PR_HASTA",
  "TK_PR_REF", "TK_PR_SAL", "TK_PR_VERDADERO", "TK_PR_FALSO",
  "TK_PR_FUNCION", "TK_PR_FFUNCION", "TK_PR_ACCION", "TK_PR_FACCIO",
  "TK_PR_ALGORIT", "TK_PR_FALGORI", "TK_PR_MIENTRAS", "TK_PR_FMIENTR",
  "TK_PR_PARA", "TK_PR_FPARA", "TK_PR_SI", "TK_PR_FSI", "TK_PR_TIPO",
  "TK_PR_FTIPO", "TK_PR_TUPLA", "TK_PR_FTUPLA", "TK_PR_VAR", "TK_PR_FVAR",
  "TK_PR_REAL", "TK_PR_ENTERO", "TK_PR_BOOL", "TK_PR_CADENA", "TK_PR_CHAR",
  "TK_PR_CONST", "TK_PR_FCONST", "TK_PR_TABLA", "TK_PR_ASIG",
  "TK_PR_SECUEN", "TK_PR_ELSE", "TK_PR_INIARRA", "TK_PR_FINARRA",
  "TK_PR_ENTONCES", "TK_PR_COMA", "TK_PR_PUNTO", "TK_PR_SUBRANGO",
  "TK_PR_DEFVAL", "TK_PR_ABRIRPAR", "TK_PR_CERRARPAR", "TK_PR_SUMA",
  "TK_PR_MULT", "TK_PR_RESTA", "TK_PR_BARRA", "TK_PR_DIV", "TK_PR_MOD",
  "TK_PR_MAYOR", "TK_PR_MENOR", "TK_PR_MAYIGU", "TK_PR_MENIGU",
  "TK_PR_IGUAL", "TK_PR_DIST", "TK_PR_O", "TK_PR_Y", "TK_PR_NO",
  "TK_ID_ARI", "TK_ID_BOL", "TK_LIT_CARAC", "TK_LIT_CADE",
  "TK_LIT_COMENTARIO", "TK_LIT_ENTERO", "TK_LIT_REAL", "TK_LIT_BOOL",
  "$accept", "desc_algoritmo", "cabecera_alg", "bloque_alg",
  "decl_globales", "decl_a_f", "bloque", "declaraciones",
  "declaracion_tipo", "declaracion_cte", "declaracion_var", "lista_d_tipo",
  "d_tipo", "expresion_t", "lista_campos", "lista_d_cte", "literal",
  "lista_d_var", "lista_id", "decl_ent_sal", "decl_ent", "decl_sal",
  "expresion", "exp_a", "exp_b", "compop", "aux_b", "operando_ari",
  "operando_bool", "instrucciones", "instruccion", "asignacion",
  "alternativa", "lista_opciones", "iteracion", "it_cota_exp",
  "it_cota_fija", "accion_d", "funcion_d", "a_cabecera", "f_cabecera",
  "d_par_form", "d_p_form", "accion_ll", "funcion_ll", "l_ll", YY_NULLPTR
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
     325,   326,   327,   328,   329
};
# endif

#define YYPACT_NINF (-140)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-56)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,   -45,    26,   -11,  -140,    -3,     0,     6,    -5,   105,
      -3,    -3,    15,    57,    39,    66,   -24,    92,    55,     7,
      -5,    -5,    -5,    62,    67,    44,   105,   105,  -140,  -140,
     146,    98,   233,   110,     8,    50,   115,   113,   128,  -140,
    -140,   136,   124,   136,   127,  -140,    38,   117,  -140,   142,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,   145,
      -5,   149,    -5,   -24,   -24,   134,   205,  -140,  -140,  -140,
     146,  -140,  -140,   150,    30,  -140,  -140,  -140,  -140,   203,
     136,   -14,   136,    53,  -140,  -140,   213,   214,   250,   262,
      97,     9,    23,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,   222,  -140,   -24,   146,   -24,   146,   224,   -24,  -140,
    -140,   243,    82,   232,   197,   136,  -140,   136,   136,   253,
    -140,   136,   136,   268,     7,   -24,   259,    13,   320,  -140,
    -140,  -140,  -140,  -140,   276,   310,    56,   250,   244,   -23,
     -14,  -140,    81,   221,   136,     0,    56,  -140,  -140,  -140,
    -140,  -140,  -140,   136,   -14,   -14,   -14,   -14,   -14,   -14,
    -140,  -140,     6,  -140,  -140,  -140,  -140,  -140,  -140,     7,
     136,     7,   215,   289,   250,   167,     9,   250,   189,    23,
    -140,   290,   136,   -24,   -24,   -24,   291,   302,  -140,   146,
    -140,   296,  -140,  -140,   244,   294,  -140,  -140,   250,   274,
     278,    81,   116,   292,  -140,   136,   136,  -140,   325,   178,
     305,   136,  -140,  -140,  -140,   343,     2,   301,   303,   304,
     313,    13,   314,    56,  -140,   229,   263,  -140,   136,   136,
     326,  -140,   146,  -140,   146,   146,   146,  -140,  -140,   150,
     312,   161,   208,  -140,   316,  -140,  -140,  -140,  -140,   354,
       7,     7,  -140,   146,   336,   305,  -140,  -140,  -140
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    36,    15,    10,
       7,     7,     0,     0,     0,     0,    44,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
      93,     0,     0,     0,    83,    87,     0,     0,    11,    92,
      94,    95,    96,   104,   103,    97,    12,    13,    14,     0,
      15,     0,    15,    44,    44,     0,    49,    51,     8,     9,
       0,    72,    73,    34,    66,    26,    27,    30,    28,     0,
       0,     0,     0,    83,    32,    65,     0,     0,    31,    54,
      55,    64,    71,    56,    16,    39,    38,    40,    41,    42,
      37,     0,    17,     0,     0,     0,     0,     0,    44,     2,
      66,    83,     0,     0,     0,     0,    86,     0,     0,     0,
      90,     0,     0,     0,     0,    44,     0,   112,     0,    52,
      53,     3,    50,    25,     0,     0,     0,     0,    54,    55,
       0,    83,    67,    70,     0,    20,     0,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,     0,     0,
      82,    82,    36,    47,    45,    48,    46,    18,    43,     0,
       0,     0,   119,     0,    98,     0,    84,    99,     0,    88,
      91,     0,     0,     0,     0,     0,     0,     0,   107,     0,
      21,     0,    63,    75,     0,     0,    19,    24,    74,    57,
      59,    58,    60,    62,    61,     0,     0,    35,     0,     0,
     102,     0,   116,    85,    89,     0,     0,     0,     0,     0,
       0,   112,     0,     0,   117,    69,    68,   105,     0,     0,
       0,   118,     0,   108,     0,     0,     0,   109,   111,    34,
       0,     0,     0,   100,     0,   115,   114,   113,    33,     0,
       0,     0,   110,     0,     0,   102,    22,   106,   101
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,  -140,   199,   162,    35,   223,   187,   196,
    -140,   216,   -69,  -134,   121,   200,  -140,   -49,   -92,  -140,
    -140,   297,   -35,   -42,   -73,  -140,   204,   -19,   -16,  -120,
    -140,  -140,  -140,   109,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,   147,  -140,  -140,  -140,  -139
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    86,    87,   135,    15,   101,    36,    37,    65,
      66,    67,    88,    89,    90,   153,   205,    91,    92,    48,
      49,    50,    51,   230,    52,    53,    54,    26,    27,    62,
      60,   186,   187,    55,    93,   173
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,   133,   191,    47,   180,   195,   112,   139,   114,   143,
      40,   163,   197,   165,   129,   130,     1,   233,   110,   116,
     183,     6,     3,     6,   184,    16,     4,    41,   193,    42,
       5,    43,     7,   120,     7,   164,   140,   166,   138,   142,
      81,   160,   161,    34,    35,   137,   185,   137,   116,   208,
      63,   210,   118,   141,   103,    64,   119,   104,    85,   168,
     147,   148,   149,   150,   151,   152,   122,    12,    71,    72,
     123,   -29,   231,    14,    44,    45,   181,    30,   117,   -29,
     172,   118,   174,   175,    31,   119,   177,   178,   110,   240,
     169,   217,   218,   219,   -23,   126,   105,   128,   194,   106,
     176,    32,   -23,   144,    33,    46,    80,   179,    47,   172,
      81,    38,   199,   200,   201,   202,   203,   204,   198,    23,
     222,    24,    82,   111,    45,    84,    39,   120,    85,    59,
     254,   255,   225,   226,    61,   209,   157,   158,   159,    94,
     147,   148,   149,   150,   151,   152,   107,   216,    71,    72,
      46,   102,    46,    47,   108,    47,    70,   121,    71,    72,
     122,   160,   161,   244,   123,   245,   246,   247,   110,   250,
     137,   137,   158,   159,    73,   109,   172,   115,    74,    75,
      76,    77,    78,   124,   256,    79,    80,   228,    68,    69,
      81,   113,    10,   241,   242,   125,    80,    10,    10,   127,
      81,    11,    82,   111,    45,   131,    11,    11,    85,    28,
      29,   213,    82,    83,    45,    84,    64,   134,    85,   147,
     148,   149,   150,   151,   152,   147,   148,   149,   150,   151,
     152,    46,    46,   214,    47,    47,   147,   148,   149,   150,
     151,   152,   171,    56,    57,    58,   136,   147,   148,   149,
     150,   151,   152,   251,   145,   147,   148,   149,   150,   151,
     152,   211,   146,   162,   182,   167,   147,   148,   149,   150,
     151,   152,   170,   147,   148,   149,   150,   151,   152,   -55,
     -55,   -55,   -55,   -55,   -55,   160,   161,   -55,   -55,   -55,
     -55,   -55,   -55,   144,   161,   192,   154,   155,   156,   157,
     158,   159,    95,    96,    97,    98,    99,   100,   147,   148,
     149,   150,   151,   152,   154,   155,   156,   157,   158,   159,
     141,   -55,   -55,   -55,   -55,   -55,   -55,   155,   156,   157,
     158,   159,   156,   157,   158,   159,    45,   188,   189,   190,
     212,   215,   220,   221,   223,   224,   227,   229,   232,   159,
     234,   243,   235,   236,   237,   239,   249,   252,   253,   257,
     248,   196,   207,   132,   258,   206,     0,     0,   238
};

static const yytype_int16 yycheck[] =
{
      19,    70,   136,    19,   124,   144,    41,    80,    43,    82,
       3,   103,   146,   105,    63,    64,    18,    15,    32,    10,
       7,    26,    67,    26,    11,    30,     0,    20,    51,    22,
      41,    24,    37,    10,    37,   104,    50,   106,    80,    81,
      54,    64,    65,    67,    68,    80,    33,    82,    10,   169,
       6,   171,    43,    67,    46,    11,    47,    49,    72,   108,
      58,    59,    60,    61,    62,    63,    43,    67,    12,    13,
      47,    41,   211,    67,    67,    68,   125,    62,    40,    49,
     115,    43,   117,   118,    27,    47,   121,   122,    32,   223,
       8,   183,   184,   185,    41,    60,    46,    62,   140,    49,
     119,    62,    49,    50,    38,   124,    50,   123,   124,   144,
      54,    19,   154,   155,   156,   157,   158,   159,   153,    14,
     189,    16,    66,    67,    68,    69,    71,    10,    72,    67,
     250,   251,   205,   206,    67,   170,    55,    56,    57,    41,
      58,    59,    60,    61,    62,    63,    31,   182,    12,    13,
     169,    41,   171,   169,    41,   171,    10,    40,    12,    13,
      43,    64,    65,   232,    47,   234,   235,   236,    32,     8,
     205,   206,    56,    57,    28,    47,   211,    50,    32,    33,
      34,    35,    36,    41,   253,    39,    50,     9,    26,    27,
      54,    67,     5,   228,   229,    50,    50,    10,    11,    50,
      54,     5,    66,    67,    68,    71,    10,    11,    72,    10,
      11,    44,    66,    67,    68,    69,    11,    67,    72,    58,
      59,    60,    61,    62,    63,    58,    59,    60,    61,    62,
      63,   250,   251,    44,   250,   251,    58,    59,    60,    61,
      62,    63,    45,    20,    21,    22,    43,    58,    59,    60,
      61,    62,    63,    45,    41,    58,    59,    60,    61,    62,
      63,    46,    48,    41,     5,    41,    58,    59,    60,    61,
      62,    63,    40,    58,    59,    60,    61,    62,    63,    58,
      59,    60,    61,    62,    63,    64,    65,    58,    59,    60,
      61,    62,    63,    50,    65,    51,    52,    53,    54,    55,
      56,    57,    69,    70,    71,    72,    73,    74,    58,    59,
      60,    61,    62,    63,    52,    53,    54,    55,    56,    57,
      67,    58,    59,    60,    61,    62,    63,    53,    54,    55,
      56,    57,    54,    55,    56,    57,    68,    17,    62,    29,
      51,    51,    51,    41,    48,    51,    21,    42,     5,    57,
      49,    25,    49,    49,    41,    41,    44,    41,     4,    23,
     239,   145,   162,    66,   255,   161,    -1,    -1,   221
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    76,    67,     0,    41,    26,    37,    77,    79,
      83,    84,    67,    86,    67,    90,    30,    78,    81,    82,
      83,    84,    85,    14,    16,    80,   112,   113,    79,    79,
      62,    27,    62,    38,    67,    68,    92,    93,    19,    71,
       3,    20,    22,    24,    67,    68,   102,   103,   104,   105,
     106,   107,   109,   110,   111,   118,    82,    82,    82,    67,
     115,    67,   114,     6,    11,    94,    95,    96,    80,    80,
      10,    12,    13,    28,    32,    33,    34,    35,    36,    39,
      50,    54,    66,    67,    69,    72,    87,    88,    97,    98,
      99,   102,   103,   119,    41,    69,    70,    71,    72,    73,
      74,    91,    41,    46,    49,    46,    49,    31,    41,    47,
      32,    67,    97,    67,    97,    50,    10,    40,    43,    47,
      10,    40,    43,    47,    41,    50,    81,    50,    81,    92,
      92,    71,    96,    87,    67,    89,    43,    97,    98,    99,
      50,    67,    98,    99,    50,    41,    48,    58,    59,    60,
      61,    62,    63,   100,    52,    53,    54,    55,    56,    57,
      64,    65,    41,    93,    87,    93,    87,    41,    92,     8,
      40,    45,    97,   120,    97,    97,   102,    97,    97,   103,
     104,    92,     5,     7,    11,    33,   116,   117,    17,    62,
      29,    88,    51,    51,    98,   120,    86,    88,    97,    98,
      98,    98,    98,    98,    98,   101,   101,    90,   104,    97,
     104,    46,    51,    44,    44,    51,    97,    93,    93,    93,
      51,    41,    87,    48,    51,    99,    99,    21,     9,    42,
     108,   120,     5,    15,    49,    49,    49,    41,   116,    41,
      88,    97,    97,    25,    87,    87,    87,    87,    89,    44,
       8,    45,    41,     4,   104,   104,    87,    23,   108
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    75,    76,    77,    78,    79,    79,    79,    80,    80,
      80,    81,    82,    82,    82,    82,    83,    84,    85,    86,
      86,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    91,    92,    92,    93,    93,    93,    93,    94,
      94,    94,    95,    96,    97,    97,    97,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    99,    99,
      99,    99,    99,    99,    99,    99,   100,   100,   100,   100,
     100,   100,   101,   102,   102,   102,   102,   103,   103,   103,
     103,   104,   104,   105,   105,   105,   105,   105,   106,   106,
     107,   108,   108,   109,   109,   110,   111,   112,   113,   114,
     115,   116,   116,   117,   117,   117,   118,   119,   120,   120
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     5,     0,     5,     0,     1,     1,     1,
       1,     1,     1,     3,     0,     3,     3,     3,     3,     1,
       2,     1,     2,     2,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     2,     4,     4,
       2,     1,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     0,     1,     3,     4,     2,     1,     3,     4,
       2,     3,     1,     1,     1,     1,     1,     1,     3,     3,
       6,     5,     0,     1,     1,     5,     9,     4,     6,     5,
       7,     3,     0,     4,     4,     4,     4,     4,     3,     1
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
#line 140 "parser.y"
                                                                                               {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de algoritmo detectada.\n"); 
        #endif
	}
#line 1623 "parser.tab.c"
    break;

  case 3:
#line 148 "parser.y"
                                                         {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de cabecera_alg detectada.\n"); 
        #endif
    }
#line 1633 "parser.tab.c"
    break;

  case 4:
#line 156 "parser.y"
                            {
         #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de bloque_alg detectada.\n"); 
        #endif
    }
#line 1643 "parser.tab.c"
    break;

  case 5:
#line 164 "parser.y"
                                  {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_globales detectada 1.\n"); 
        #endif
    }
#line 1653 "parser.tab.c"
    break;

  case 6:
#line 169 "parser.y"
                                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_globales detectada 2.\n"); 
        #endif
    }
#line 1663 "parser.tab.c"
    break;

  case 7:
#line 174 "parser.y"
             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_globales detectada: VACIO 3.\n"); 
        #endif
    }
#line 1673 "parser.tab.c"
    break;

  case 8:
#line 182 "parser.y"
                     {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_a_f detectada 1.\n"); 
        #endif
    }
#line 1683 "parser.tab.c"
    break;

  case 9:
#line 187 "parser.y"
                        {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_a_f detectada 2.\n"); 
        #endif
    }
#line 1693 "parser.tab.c"
    break;

  case 10:
#line 192 "parser.y"
             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_a_f detectada: VACIO 3.\n"); 
        #endif
    }
#line 1703 "parser.tab.c"
    break;

  case 11:
#line 200 "parser.y"
                               {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de bloque detectada.\n"); 
        #endif
    }
#line 1713 "parser.tab.c"
    break;

  case 12:
#line 208 "parser.y"
                                  {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaraciones detectada 1.\n"); 
        #endif
    }
#line 1723 "parser.tab.c"
    break;

  case 13:
#line 213 "parser.y"
                                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaraciones detectada 2.\n"); 
        #endif
    }
#line 1733 "parser.tab.c"
    break;

  case 14:
#line 218 "parser.y"
                                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaraciones detectada 3.\n"); 
        #endif
    }
#line 1743 "parser.tab.c"
    break;

  case 15:
#line 223 "parser.y"
            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaraciones detectada: VACIO 4.\n"); 
        #endif
    }
#line 1753 "parser.tab.c"
    break;

  case 16:
#line 233 "parser.y"
                                                        {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaracion_tipo encontrada.\n"); 
        #endif
	}
#line 1763 "parser.tab.c"
    break;

  case 17:
#line 241 "parser.y"
                                                         {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaracion_cte encontrada.\n"); 
        #endif
	}
#line 1773 "parser.tab.c"
    break;

  case 18:
#line 249 "parser.y"
                                                     {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaracion_var encontrada.\n"); 
        #endif
	}
#line 1783 "parser.tab.c"
    break;

  case 19:
#line 257 "parser.y"
                                                               {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_d_tipo encontrada 1.\n"); 
        #endif
	}
#line 1793 "parser.tab.c"
    break;

  case 20:
#line 262 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_d_tipo encontrada: VACIO 2.\n"); 
        #endif
    }
#line 1803 "parser.tab.c"
    break;

  case 21:
#line 270 "parser.y"
                                              {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 1.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1814 "parser.tab.c"
    break;

  case 22:
#line 276 "parser.y"
                                                                                                        {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 2.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1825 "parser.tab.c"
    break;

  case 23:
#line 282 "parser.y"
                    {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 3.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1836 "parser.tab.c"
    break;

  case 24:
#line 288 "parser.y"
                                                 {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 4.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1847 "parser.tab.c"
    break;

  case 25:
#line 294 "parser.y"
                           {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 5.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1858 "parser.tab.c"
    break;

  case 26:
#line 300 "parser.y"
                       {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada int 6.\n"); 
        #endif
        (yyval.ty_tipo) = T_ENTERO;
	}
#line 1869 "parser.tab.c"
    break;

  case 27:
#line 306 "parser.y"
                     {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada bool 7.\n"); 
        #endif
        (yyval.ty_tipo) = T_BOOL;
	}
#line 1880 "parser.tab.c"
    break;

  case 28:
#line 312 "parser.y"
                     {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada char 8.\n"); 
        #endif
        (yyval.ty_tipo) = T_CHAR;
	}
#line 1891 "parser.tab.c"
    break;

  case 29:
#line 318 "parser.y"
                     {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada real 9.\n"); 
        #endif
        (yyval.ty_tipo) = T_REAL;
	}
#line 1902 "parser.tab.c"
    break;

  case 30:
#line 324 "parser.y"
                       {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada cadena 10.\n"); 
        #endif
        (yyval.ty_tipo) = T_CADENA;
	}
#line 1913 "parser.tab.c"
    break;

  case 31:
#line 333 "parser.y"
                  {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura expreasion_t econtrada 1.\n"); 
        #endif
	}
#line 1923 "parser.tab.c"
    break;

  case 32:
#line 338 "parser.y"
                       {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura expreasion_t econtrada 2.\n"); 
        #endif
	}
#line 1933 "parser.tab.c"
    break;

  case 33:
#line 346 "parser.y"
                                                               {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_campos econtrada 1.\n"); 
        #endif
	}
#line 1943 "parser.tab.c"
    break;

  case 34:
#line 351 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_campos econtrada:VACIO 2.\n"); 
        #endif
    }
#line 1953 "parser.tab.c"
    break;

  case 35:
#line 359 "parser.y"
                                                               {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_d_cte econtrada 1.\n"); 
        #endif
	}
#line 1963 "parser.tab.c"
    break;

  case 36:
#line 364 "parser.y"
                 {
            #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_d_cte econtrada: VACIO 7.\n"); 
        #endif
    }
#line 1973 "parser.tab.c"
    break;

  case 37:
#line 372 "parser.y"
                {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_BOOL econtrada 1 -> %d.\n",(yyvsp[0].ty_boolean)); 
        #endif
	}
#line 1983 "parser.tab.c"
    break;

  case 38:
#line 377 "parser.y"
                      {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_CADE econtrada 2 -> %s.\n",(yyvsp[0].ty_string)); 
        #endif
	}
#line 1993 "parser.tab.c"
    break;

  case 39:
#line 382 "parser.y"
                       {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_CARAC econtrada 3 -> %c.\n",(yyvsp[0].ty_caracter)); 
        #endif
	}
#line 2003 "parser.tab.c"
    break;

  case 40:
#line 387 "parser.y"
                            {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_COMENTARIO econtrada 4.\n"); 
        #endif
	}
#line 2013 "parser.tab.c"
    break;

  case 41:
#line 392 "parser.y"
                        {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_ENTERO econtrada 5 -> %ld.\n",(yyvsp[0].ty_num_entero)); 
        #endif
	}
#line 2023 "parser.tab.c"
    break;

  case 42:
#line 397 "parser.y"
                      {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_REAL econtrada 6 -> %f.\n",(yyvsp[0].ty_num_real)); 
        #endif
	}
#line 2033 "parser.tab.c"
    break;

  case 43:
#line 407 "parser.y"
                                     {
        /*Hemos bajado 'TK_PR_DEFVAL d_tipo' a lista_id */
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_d_var detectada 1.\n"); 
        #endif
    }
#line 2044 "parser.tab.c"
    break;

  case 44:
#line 413 "parser.y"
            { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_d_var detectada: VACIO 2.\n"); 
        #endif
    }
#line 2054 "parser.tab.c"
    break;

  case 45:
#line 421 "parser.y"
                                  {
        /*Control de errores ?*/
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_id detectada 1 -> %s.\n",(yyvsp[-2].ty_string)); 
        #endif
        if (newTemp(&miSimTab,(yyvsp[-2].ty_string),(yyvsp[0].ty_tipo)) == ERR_YA_EXISTE_VAR)
            yyerror("!! Variable (%s) ya definida.",(yyvsp[-2].ty_string));

        (yyval.ty_tipo) = (yyvsp[0].ty_tipo);
    }
#line 2069 "parser.tab.c"
    break;

  case 46:
#line 431 "parser.y"
                                    {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_id detectada 3.\n"); 
        #endif
        if (newTemp(&miSimTab,(yyvsp[-2].ty_string),(yyvsp[0].ty_tipo)) == ERR_YA_EXISTE_VAR)
            yyerror("!! Variable (%s) ya definida.",(yyvsp[-2].ty_string));
        (yyval.ty_tipo) = (yyvsp[0].ty_tipo);
    }
#line 2082 "parser.tab.c"
    break;

  case 47:
#line 439 "parser.y"
                                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_id detectada 5.\n"); 
        #endif
        if (newTemp(&miSimTab,(yyvsp[-2].ty_string),(yyvsp[0].ty_tipo)) == ERR_YA_EXISTE_VAR)
            yyerror("!! Variable (%s) ya definida.",(yyvsp[-2].ty_string));
        (yyval.ty_tipo) = (yyvsp[0].ty_tipo);
    }
#line 2095 "parser.tab.c"
    break;

  case 48:
#line 447 "parser.y"
                                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_id detectada 6.\n"); 
        #endif
        if (newTemp(&miSimTab,(yyvsp[-2].ty_string),(yyvsp[0].ty_tipo)) == ERR_YA_EXISTE_VAR)
            yyerror("!! Variable (%s) ya definida.",(yyvsp[-2].ty_string));
        (yyval.ty_tipo) = (yyvsp[0].ty_tipo);
    }
#line 2108 "parser.tab.c"
    break;

  case 49:
#line 458 "parser.y"
            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_ent_sal detectada 1.\n"); 
        #endif
    }
#line 2118 "parser.tab.c"
    break;

  case 50:
#line 463 "parser.y"
                       {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_ent_sal detectada 2.\n"); 
        #endif
    }
#line 2128 "parser.tab.c"
    break;

  case 51:
#line 468 "parser.y"
              {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_ent_sal detectada 3.\n"); 
        #endif
    }
#line 2138 "parser.tab.c"
    break;

  case 52:
#line 476 "parser.y"
                         {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_ent detectada.\n"); 
        #endif
    }
#line 2148 "parser.tab.c"
    break;

  case 53:
#line 484 "parser.y"
                         {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_sal detectada.\n"); 
        #endif
    }
#line 2158 "parser.tab.c"
    break;

  case 54:
#line 492 "parser.y"
          {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de expresion detectada 1.\n"); 
        #endif
        (yyval.ty_st_exp).tipo = EXP_ARI;
        (yyval.ty_st_exp).ari.id = (yyvsp[0].ty_st_ari).id;
        (yyval.ty_st_exp).ari.tipo = (yyvsp[0].ty_st_ari).tipo;
    }
#line 2171 "parser.tab.c"
    break;

  case 55:
#line 500 "parser.y"
            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de expresion detectada 2.\n"); 
        #endif
        (yyval.ty_st_exp).tipo = EXP_BOOL;
        (yyval.ty_st_exp).bool.trues = (yyvsp[0].ty_st_bool).trues;
        (yyval.ty_st_exp).bool.falses = (yyvsp[0].ty_st_bool).falses;
    }
#line 2184 "parser.tab.c"
    break;

  case 56:
#line 508 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de expresion detectada 3.\n"); 
        #endif
    }
#line 2194 "parser.tab.c"
    break;

  case 57:
#line 516 "parser.y"
                          {
        /*hacemos solo pra enteros con entero y real con real o mezcaloms int real */
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 1.\n"); 
        #endif
        if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_ENTERO){
            int id_res = newTemp(&miSimTab,"",T_ENTERO);
            gen(&miQuadTab,OP_SUMA_INT,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_ENTERO;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_REAL && (yyvsp[0].ty_st_ari).tipo == T_REAL) {
            int id_res = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_SUMA_REAL,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);
            
            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_REAL && (yyvsp[0].ty_st_ari).tipo == T_ENTERO) {
            int op1 = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[0].ty_st_ari).id,OPERNDO_NULL,op1);

            int id_res = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_SUMA_REAL,(yyvsp[-2].ty_st_ari).id,op1,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_REAL) {
            int op1 = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[-2].ty_st_ari).id,OPERNDO_NULL,op1);

            int id_res = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_SUMA_REAL,(yyvsp[0].ty_st_ari).id,op1,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else {
            yyerror("!! El tipo %s y el %s no son compatibles para la suma.",DF_NAMES[(yyvsp[-2].ty_st_ari).tipo],DF_NAMES[(yyvsp[0].ty_st_ari).tipo]);
        }
    }
#line 2238 "parser.tab.c"
    break;

  case 58:
#line 555 "parser.y"
                              {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 2.\n"); 
        #endif
        if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_ENTERO){
            int id_res = newTemp(&miSimTab,"",T_ENTERO);
            gen(&miQuadTab,OP_RESTA_INT,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_ENTERO;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_REAL && (yyvsp[0].ty_st_ari).tipo == T_REAL) {
            int id_res = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_RESTA_REAL,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);
            
            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_REAL && (yyvsp[0].ty_st_ari).tipo == T_ENTERO) {
            int op1 = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[0].ty_st_ari).id,OPERNDO_NULL,op1);

            int id_res = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_RESTA_REAL,(yyvsp[-2].ty_st_ari).id,op1,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_REAL) {
            int op1 = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[-2].ty_st_ari).id,OPERNDO_NULL,op1);

            int id_res = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_RESTA_REAL,(yyvsp[0].ty_st_ari).id,op1,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else {
            yyerror("!! El tipo %s y el %s no son compatibles para la resta.",DF_NAMES[(yyvsp[-2].ty_st_ari).tipo],DF_NAMES[(yyvsp[0].ty_st_ari).tipo]);
        }
    }
#line 2281 "parser.tab.c"
    break;

  case 59:
#line 593 "parser.y"
                            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 3.\n"); 
        #endif
        if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_ENTERO){
            int id_res = newTemp(&miSimTab,"",T_ENTERO);
            gen(&miQuadTab,OP_MULT_INT,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_ENTERO;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_REAL && (yyvsp[0].ty_st_ari).tipo == T_REAL) {
            int id_res = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_MULT_REAL,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);
            
            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_REAL && (yyvsp[0].ty_st_ari).tipo == T_ENTERO) {
            int op1 = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[0].ty_st_ari).id,OPERNDO_NULL,op1);

            int id_res = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_MULT_REAL,(yyvsp[-2].ty_st_ari).id,op1,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_REAL) {
            int op1 = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[-2].ty_st_ari).id,OPERNDO_NULL,op1);

            int id_res = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_MULT_REAL,(yyvsp[0].ty_st_ari).id,op1,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        }  else {
            yyerror("!! El tipo %s y el %s no son compatibles para la multiplicacion.",DF_NAMES[(yyvsp[-2].ty_st_ari).tipo],DF_NAMES[(yyvsp[0].ty_st_ari).tipo]);
        }
    }
#line 2324 "parser.tab.c"
    break;

  case 60:
#line 631 "parser.y"
                             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 4.\n"); 
        #endif
        if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_ENTERO){
            int op1 = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[-2].ty_st_ari).id,OPERNDO_NULL,op1);

            int op2 = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[0].ty_st_ari).id,OPERNDO_NULL,op2);

            int id_res = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_MULT_INT,op1,op2,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_REAL && (yyvsp[0].ty_st_ari).tipo == T_REAL) {
            int id_res = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_DIV_REAL,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);
            
            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_REAL && (yyvsp[0].ty_st_ari).tipo == T_ENTERO) {
            int op1 = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[0].ty_st_ari).id,OPERNDO_NULL,op1);

            int id_res = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_DIV_REAL,(yyvsp[-2].ty_st_ari).id,op1,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_REAL) {
            int op1 = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[-2].ty_st_ari).id,OPERNDO_NULL,op1);

            int id_res = newTemp(&miSimTab,"",T_REAL);
            gen(&miQuadTab,OP_DIV_REAL,(yyvsp[0].ty_st_ari).id,op1,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        }  else {
            yyerror("!! El tipo %s y el %s no son compatibles para la division.",DF_NAMES[(yyvsp[-2].ty_st_ari).tipo],DF_NAMES[(yyvsp[0].ty_st_ari).tipo]);
        }
    }
#line 2373 "parser.tab.c"
    break;

  case 61:
#line 675 "parser.y"
                           {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 5.\n"); 
        #endif
        /*solo con entero*/
        if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_ENTERO){
            int id_res = newTemp(&miSimTab,"",T_ENTERO);
            gen(&miQuadTab,OP_MOD,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_ENTERO;
        } else {
            yyerror("!! El tipo %s y el %s no son compatibles para el resto , solo int.",DF_NAMES[(yyvsp[-2].ty_st_ari).tipo],DF_NAMES[(yyvsp[0].ty_st_ari).tipo]);
        }
    }
#line 2393 "parser.tab.c"
    break;

  case 62:
#line 690 "parser.y"
                           {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 6.\n"); 
        #endif
        /*solo con enteros*/
        if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_ENTERO){
            int id_res = newTemp(&miSimTab,"",T_ENTERO);
            gen(&miQuadTab,OP_DIV_INT,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_ENTERO;
        }  else {
            yyerror("!! El tipo %s y el %s no son compatibles para la division entera.",DF_NAMES[(yyvsp[-2].ty_st_ari).tipo],DF_NAMES[(yyvsp[0].ty_st_ari).tipo]);
        }
    }
#line 2413 "parser.tab.c"
    break;

  case 63:
#line 705 "parser.y"
                                          {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 7.\n"); 
        #endif
        (yyval.ty_st_ari) = (yyvsp[-1].ty_st_ari);
    }
#line 2424 "parser.tab.c"
    break;

  case 64:
#line 711 "parser.y"
                  {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 8.\n"); 
        #endif
        (yyval.ty_st_ari) = (yyvsp[0].ty_st_ari);
    }
#line 2435 "parser.tab.c"
    break;

  case 65:
#line 717 "parser.y"
                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 9.\n"); 
        #endif
        (yyval.ty_st_ari).id = newTemp(&miSimTab,"",T_ENTERO);
        (yyval.ty_st_ari).tipo = T_ENTERO;
    }
#line 2447 "parser.tab.c"
    break;

  case 66:
#line 724 "parser.y"
                {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 10.\n"); 
        #endif
        (yyval.ty_st_ari).id = newTemp(&miSimTab,"",T_REAL);
        (yyval.ty_st_ari).tipo = T_REAL;
    }
#line 2459 "parser.tab.c"
    break;

  case 67:
#line 731 "parser.y"
                       { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 11.\n"); 
        #endif
        if ((yyvsp[0].ty_st_ari).tipo == T_ENTERO) {
            int id_res = newTemp(&miSimTab, "", T_ENTERO);
            gen(&miQuadTab, OP_TO_NEG_INT, (yyvsp[0].ty_st_ari).id, OPERNDO_NULL, id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_ENTERO;
        } else if ((yyvsp[0].ty_st_ari).tipo == T_REAL) {
            int id_res = newTemp(&miSimTab, "", T_REAL);
            gen(&miQuadTab, OP_TO_NEG_REAL, (yyvsp[0].ty_st_ari).id, OPERNDO_NULL, id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        }   else {
            yyerror("!! El tipo %s es compatibles para la opearcion negativo .",DF_NAMES[(yyvsp[0].ty_st_ari).tipo]);
        }
    }
#line 2484 "parser.tab.c"
    break;

  case 68:
#line 754 "parser.y"
                             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 1.\n"); 
        #endif
        backpatch(&miQuadTab,(yyvsp[-3].ty_st_bool).trues,(yyvsp[-1].ty_tipo));
        (yyval.ty_st_bool).trues = merge((yyvsp[-3].ty_st_bool).falses,(yyvsp[0].ty_st_bool).falses);
        (yyval.ty_st_bool).falses = (yyvsp[0].ty_st_bool).falses;
    }
#line 2497 "parser.tab.c"
    break;

  case 69:
#line 762 "parser.y"
                               {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 2.\n"); 
        #endif
        backpatch(&miQuadTab,(yyvsp[-3].ty_st_bool).trues,(yyvsp[-1].ty_tipo));
        (yyval.ty_st_bool).trues = merge((yyvsp[-3].ty_st_bool).falses,(yyvsp[0].ty_st_bool).falses);
        (yyval.ty_st_bool).falses = (yyvsp[0].ty_st_bool).falses;
    }
#line 2510 "parser.tab.c"
    break;

  case 70:
#line 770 "parser.y"
                    {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 3.\n"); 
        #endif
        (yyval.ty_st_bool).trues = (yyvsp[0].ty_st_bool).falses;
        (yyval.ty_st_bool).falses = (yyvsp[0].ty_st_bool).trues;
    }
#line 2522 "parser.tab.c"
    break;

  case 71:
#line 777 "parser.y"
                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 4.\n"); 
        #endif
        (yyval.ty_st_bool) = (yyvsp[0].ty_st_bool);
    }
#line 2533 "parser.tab.c"
    break;

  case 72:
#line 783 "parser.y"
                      {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 5.\n"); 
        #endif
    }
#line 2543 "parser.tab.c"
    break;

  case 73:
#line 788 "parser.y"
                 { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 6.\n"); 
        #endif
    }
#line 2553 "parser.tab.c"
    break;

  case 74:
#line 793 "parser.y"
                                { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 7.\n"); 
        #endif
        (yyval.ty_st_bool).trues = makelist(miQuadTab.nextQua);
        (yyval.ty_st_bool).falses = makelist(miQuadTab.nextQua);

        gen(&miQuadTab,(yyvsp[-1].ty_tipo),(yyvsp[-2].ty_st_exp).ari.id,(yyvsp[0].ty_st_exp).ari.id,OPERNDO_NULL);
        gen(&miQuadTab,OP_GOTO,OPERNDO_NULL,OPERNDO_NULL,OPERNDO_NULL);
    }
#line 2568 "parser.tab.c"
    break;

  case 75:
#line 803 "parser.y"
                                          { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 13.\n"); 
        #endif
    }
#line 2578 "parser.tab.c"
    break;

  case 76:
#line 811 "parser.y"
                { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 7.\n"); 
        #endif
        (yyval.ty_tipo) = OP_MAYOR;
    }
#line 2589 "parser.tab.c"
    break;

  case 77:
#line 817 "parser.y"
                  { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 8.\n"); 
        #endif
        (yyval.ty_tipo) = OP_MENOR;
    }
#line 2600 "parser.tab.c"
    break;

  case 78:
#line 823 "parser.y"
                   { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 9.\n"); 
        #endif
        (yyval.ty_tipo) = OP_MAYOR_IGUAL;
    }
#line 2611 "parser.tab.c"
    break;

  case 79:
#line 829 "parser.y"
                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 10.\n"); 
        #endif
        (yyval.ty_tipo) = OP_MENOR_IGUAL;
    }
#line 2622 "parser.tab.c"
    break;

  case 80:
#line 835 "parser.y"
                 { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 11.\n"); 
        #endif
        (yyval.ty_tipo) = OP_DISTINTO;
    }
#line 2633 "parser.tab.c"
    break;

  case 81:
#line 841 "parser.y"
                 { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 12.\n"); 
        #endif
        (yyval.ty_tipo) = OP_IGUAL;
    }
#line 2644 "parser.tab.c"
    break;

  case 82:
#line 850 "parser.y"
          {
        (yyval.ty_tipo) = miQuadTab.nextQua;
    }
#line 2652 "parser.tab.c"
    break;

  case 83:
#line 856 "parser.y"
              {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando detectada 1.\n"); 
        #endif
        nodeTab *nodo = find_tsym(&miSimTab,(yyvsp[0].ty_string));
        (yyval.ty_st_ari).id = nodo->id;
        (yyval.ty_st_ari).tipo = nodo->type;
    }
#line 2665 "parser.tab.c"
    break;

  case 84:
#line 864 "parser.y"
                                            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando detectada 2.\n"); 
        #endif
    }
#line 2675 "parser.tab.c"
    break;

  case 85:
#line 869 "parser.y"
                                                         {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando detectada 3.\n"); 
        #endif
    }
#line 2685 "parser.tab.c"
    break;

  case 86:
#line 874 "parser.y"
                            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando detectada 4.\n"); 
        #endif
    }
#line 2695 "parser.tab.c"
    break;

  case 87:
#line 882 "parser.y"
              {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando detectada 1.\n"); 
        #endif
        (yyval.ty_st_bool).trues = makelist(miQuadTab.nextQua);
        (yyval.ty_st_bool).falses = makelist(miQuadTab.nextQua+1);

        nodeTab *nodo = find_tsym(&miSimTab,(yyvsp[0].ty_string));
        gen(&miQuadTab,OP_GOTO_CONDI,nodo->id,OPERNDO_NULL,OPERNDO_NULL);
        gen(&miQuadTab,OP_GOTO,OPERNDO_NULL,OPERNDO_NULL,OPERNDO_NULL);
    }
#line 2711 "parser.tab.c"
    break;

  case 88:
#line 893 "parser.y"
                                              {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando detectada 2.\n"); 
        #endif
    }
#line 2721 "parser.tab.c"
    break;

  case 89:
#line 898 "parser.y"
                                                          {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando detectada 3.\n"); 
        #endif
    }
#line 2731 "parser.tab.c"
    break;

  case 90:
#line 903 "parser.y"
                             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando detectada 4.\n"); 
        #endif
    }
#line 2741 "parser.tab.c"
    break;

  case 91:
#line 911 "parser.y"
                                          {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instrucciones detectada 1.\n"); 
        #endif
    }
#line 2751 "parser.tab.c"
    break;

  case 92:
#line 916 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instrucciones detectada 2.\n"); 
        #endif
    }
#line 2761 "parser.tab.c"
    break;

  case 93:
#line 924 "parser.y"
                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 1.\n"); 
        #endif
    }
#line 2771 "parser.tab.c"
    break;

  case 94:
#line 929 "parser.y"
                {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 2.\n"); 
        #endif
    }
#line 2781 "parser.tab.c"
    break;

  case 95:
#line 934 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 3.\n"); 
        #endif
    }
#line 2791 "parser.tab.c"
    break;

  case 96:
#line 939 "parser.y"
               {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 4.\n"); 
        #endif
    }
#line 2801 "parser.tab.c"
    break;

  case 97:
#line 944 "parser.y"
               {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 5.\n"); 
        #endif
    }
#line 2811 "parser.tab.c"
    break;

  case 98:
#line 952 "parser.y"
                                     {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de asignacion detectada.\n"); 
        #endif
        if ((yyvsp[-2].ty_st_ari).tipo == EXP_ARI && (yyvsp[-2].ty_st_ari).tipo == (yyvsp[0].ty_st_exp).ari.tipo){

            gen(&miQuadTab,OP_ASIGNA,(yyvsp[0].ty_st_exp).ari.id,OPERNDO_NULL,(yyvsp[-2].ty_st_ari).id);
        } else {
            yyerror("!! El tipo %s no se puede asignar al %s.", DF_NAMES[(yyvsp[0].ty_st_exp).ari.tipo],DF_NAMES[(yyvsp[-2].ty_st_ari).tipo]);
        }
    }
#line 2827 "parser.tab.c"
    break;

  case 99:
#line 963 "parser.y"
                                        {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de asignacion detectada 2.\n"); 
        #endif
        if ((yyvsp[0].ty_st_exp).tipo == EXP_BOOL){
            (yyvsp[-2].ty_st_bool).trues = (yyvsp[0].ty_st_exp).bool.trues;
            (yyvsp[-2].ty_st_bool).falses = (yyvsp[0].ty_st_exp).bool.falses;
        } else {
            yyerror("!! El tipo %s no se puede asignar al tipo bool", DF_NAMES[(yyvsp[0].ty_st_exp).tipo]);
        }
    }
#line 2843 "parser.tab.c"
    break;

  case 100:
#line 977 "parser.y"
                                                                            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de alternativa detectada.\n"); 
        #endif
    }
#line 2853 "parser.tab.c"
    break;

  case 101:
#line 985 "parser.y"
                                                                     {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_opciones detectada 1.\n"); 
        #endif
    }
#line 2863 "parser.tab.c"
    break;

  case 102:
#line 990 "parser.y"
             {
       #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_opciones detectada: VACIO 2.\n"); 
        #endif
    }
#line 2873 "parser.tab.c"
    break;

  case 103:
#line 998 "parser.y"
                {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de iteracion detectada 1.\n"); 
        #endif
    }
#line 2883 "parser.tab.c"
    break;

  case 104:
#line 1003 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de iteracion detectada 2.\n"); 
        #endif
    }
#line 2893 "parser.tab.c"
    break;

  case 105:
#line 1011 "parser.y"
                                                                    {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de it_cota_exp detectada.\n"); 
        #endif
    }
#line 2903 "parser.tab.c"
    break;

  case 106:
#line 1019 "parser.y"
                                                                                                         {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de it_cota_fija detectada.\n"); 
        #endif
    }
#line 2913 "parser.tab.c"
    break;

  case 107:
#line 1028 "parser.y"
                                                    {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura accion_d econtrada.\n"); 
        #endif
	}
#line 2923 "parser.tab.c"
    break;

  case 108:
#line 1036 "parser.y"
                                                                           {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura funcion_d econtrada.\n"); 
        #endif
	}
#line 2933 "parser.tab.c"
    break;

  case 109:
#line 1044 "parser.y"
                                                                         {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura funcion_d econtrada .\n"); 
        #endif
	}
#line 2943 "parser.tab.c"
    break;

  case 110:
#line 1052 "parser.y"
                                                                                           {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura f_cabecera econtrada.\n"); 
        #endif
	}
#line 2953 "parser.tab.c"
    break;

  case 111:
#line 1060 "parser.y"
                                         {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_par_form econtrada 1.\n"); 
        #endif
	}
#line 2963 "parser.tab.c"
    break;

  case 112:
#line 1065 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_par_form econtrada:VACIO 2.\n"); 
        #endif
    }
#line 2973 "parser.tab.c"
    break;

  case 113:
#line 1073 "parser.y"
                                                  {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_p_form econtrada 1.\n"); 
        #endif
	}
#line 2983 "parser.tab.c"
    break;

  case 114:
#line 1078 "parser.y"
                                                 {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_p_form econtrada 2.\n"); 
        #endif 
	}
#line 2993 "parser.tab.c"
    break;

  case 115:
#line 1083 "parser.y"
                                                   {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_p_form econtrada 3.\n"); 
        #endif 
	}
#line 3003 "parser.tab.c"
    break;

  case 116:
#line 1091 "parser.y"
                                                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de accion_ll detectada.\n"); 
        #endif
    }
#line 3013 "parser.tab.c"
    break;

  case 117:
#line 1099 "parser.y"
                                                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de funcion_ll detectada.\n"); 
        #endif
    }
#line 3023 "parser.tab.c"
    break;

  case 118:
#line 1107 "parser.y"
                             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de ll_ll detectada 1.\n"); 
        #endif
    }
#line 3033 "parser.tab.c"
    break;

  case 119:
#line 1112 "parser.y"
               {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de ll_ll detectada 2.\n"); 
        #endif
    }
#line 3043 "parser.tab.c"
    break;


#line 3047 "parser.tab.c"

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
#line 1119 "parser.y"


void yyerror (char const *s, ...){
    va_list args;
    fprintf(stderr, "!! Error en la linea %d: \n", yylineno);
    va_start(args, s);
    vfprintf(stderr, s, args);
    va_end(args);
    printf("\n\n");
}

int main (int argc, char **argv){
    ++argv, --argc;

    printf("\nCRERADORES 04-09-2020\n");
	printf("\t @Daniel del Barrio\n");
	printf("\t @Jhonny F. Chicaiza\n");

	if ( argc > 0 ){
		printf("\n");
		yyin = fopen( argv[0], "r" );
	}else{
		printf("\nInserte por teclado para comprobar\n");
		printf("Ctr + d para salir\n\n");
		yyin = stdin;
	}

    //mostrar_tqua(&miQuadTab);
    ini_tsym(&miSimTab);
    ini_tqua(&miQuadTab);

    yyparse();

    print_tsym(&miSimTab);
    print_tqua(&miQuadTab);
	return 0;
}
