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
    #include <string.h>
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

    int temp_id;

#line 91 "parser.tab.c"

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
#line 126 "parser.y"

    float      ty_num_real;
    long int    ty_num_entero;
    char        *ty_string;
    char        ty_caracter;
    int         ty_boolean;

    int         ty_tipo;

    st_arit     ty_st_ari;
    st_bool     ty_st_bool;

    st_exp      ty_st_exp;

    st_listID   ty_listaID;

#line 235 "parser.tab.c"

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
#define YYLAST   367

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  260

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
       0,   146,   146,   154,   162,   170,   175,   180,   188,   193,
     198,   206,   214,   219,   224,   229,   239,   247,   255,   263,
     268,   276,   282,   288,   294,   300,   306,   312,   318,   324,
     330,   336,   345,   350,   358,   363,   371,   376,   384,   389,
     394,   399,   404,   409,   419,   427,   435,   445,   455,   464,
     476,   481,   486,   494,   503,   512,   520,   528,   536,   592,
     646,   700,   764,   782,   800,   806,   812,   822,   832,   861,
     869,   877,   884,   890,   895,   900,   910,   918,   924,   930,
     936,   942,   948,   957,   963,   971,   976,   981,   989,  1000,
    1005,  1010,  1018,  1023,  1031,  1036,  1041,  1046,  1051,  1059,
    1070,  1084,  1092,  1097,  1105,  1110,  1118,  1126,  1135,  1143,
    1151,  1159,  1167,  1172,  1180,  1185,  1190,  1198,  1206,  1214,
    1219
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

#define YYPACT_NINF (-141)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,     9,    48,    59,  -141,    -2,    35,    44,     6,    30,
      -2,    -2,    56,    95,    62,    97,   -34,   124,    87,     7,
       6,     6,     6,    96,   109,    67,    30,    30,  -141,  -141,
     147,   143,   195,   159,    98,   106,   134,   161,   131,  -141,
    -141,   137,   139,   137,   157,  -141,    10,    12,  -141,   167,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,   162,
       6,   168,     6,   -34,   -34,   140,   206,  -141,  -141,  -141,
     147,  -141,  -141,   154,  -141,  -141,  -141,  -141,  -141,   185,
     137,    53,   137,   -24,   -11,  -141,  -141,  -141,   188,   186,
     258,   270,    64,    11,    13,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,   189,  -141,   -34,   147,   -34,   147,   197,
     -34,  -141,   241,     8,   252,   212,   137,  -141,   137,   137,
     226,  -141,   137,   137,   238,     7,   -34,   310,   163,   311,
    -141,  -141,  -141,  -141,  -141,   277,   312,    73,   258,   257,
     -23,    53,  -141,   133,   225,   137,    35,    73,  -141,  -141,
    -141,  -141,  -141,  -141,   137,    53,    53,    53,    53,    53,
      53,  -141,  -141,    44,  -141,  -141,  -141,  -141,  -141,  -141,
       7,   137,     7,   236,   289,   258,   187,    11,   258,   193,
      13,  -141,   291,   137,   -34,   -34,   -34,   292,   303,  -141,
     147,  -141,   297,  -141,  -141,   257,   295,  -141,  -141,   258,
     205,   281,   133,   105,   290,  -141,   137,   137,  -141,   327,
     164,   307,   137,  -141,  -141,  -141,   345,   181,   302,   304,
     305,   314,   163,   315,    73,  -141,   242,   271,  -141,   137,
     137,   332,  -141,   147,  -141,   147,   147,   147,  -141,  -141,
     154,   308,    54,   218,  -141,   317,  -141,  -141,  -141,  -141,
     355,     7,     7,  -141,   147,   337,   307,  -141,  -141,  -141
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    37,    15,    10,
       7,     7,     0,     0,     0,     0,    45,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
      94,     0,     0,     0,    84,    88,     0,     0,    11,    93,
      95,    96,    97,   105,   104,    98,    12,    13,    14,     0,
      15,     0,    15,    45,    45,     0,    50,    52,     8,     9,
       0,    73,    74,    35,    30,    27,    28,    31,    29,     0,
       0,     0,     0,    84,    88,    33,    66,    67,     0,     0,
      32,    55,    56,    65,    72,    57,    16,    40,    39,    41,
      42,    43,    38,     0,    17,     0,     0,     0,     0,     0,
      45,     2,    84,     0,     0,     0,     0,    87,     0,     0,
       0,    91,     0,     0,     0,     0,    45,     0,   113,     0,
      53,    54,     3,    51,    26,     0,     0,     0,     0,    55,
      56,     0,    84,    68,    71,     0,    20,     0,    77,    78,
      79,    80,    81,    82,     0,     0,     0,     0,     0,     0,
       0,    83,    83,    37,    48,    46,    49,    47,    18,    44,
       0,     0,     0,   120,     0,    99,     0,    85,   100,     0,
      89,    92,     0,     0,     0,     0,     0,     0,     0,   108,
       0,    21,     0,    64,    76,     0,     0,    19,    25,    75,
      58,    60,    59,    61,    63,    62,     0,     0,    36,     0,
       0,   103,     0,   117,    86,    90,     0,     0,     0,     0,
       0,     0,   113,     0,     0,   118,    70,    69,   106,     0,
       0,     0,   119,     0,   109,     0,     0,     0,   110,   112,
      35,     0,     0,     0,   101,     0,   114,   116,   115,    34,
       0,     0,     0,   111,     0,     0,   103,    22,   107,   102
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,  -141,  -141,   182,   172,    20,    43,    94,   127,
    -141,   215,   -69,  -135,   122,   200,  -141,   -49,   -94,  -141,
    -141,   298,   -35,   -62,   -73,  -141,   203,   -19,   -16,  -121,
    -141,  -141,  -141,   110,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,   145,  -141,  -141,  -141,  -140
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    88,    89,   136,    15,   103,    36,    37,    65,
      66,    67,    90,    91,    92,   154,   206,    93,    94,    48,
      49,    50,    51,   231,    52,    53,    54,    26,    27,    62,
      60,   187,   188,    55,    95,   174
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,   134,   192,    47,   181,   196,   113,   140,   115,   144,
      40,   164,   198,   166,   130,   131,   170,   -23,   139,   143,
     117,   117,   121,   121,     6,   -23,   145,    41,   194,    42,
     -24,    43,     6,    34,    35,     7,    16,   165,   -24,   167,
       1,   161,   162,     7,    23,   138,    24,   138,     4,   209,
     118,   211,   122,   119,   119,   123,   123,   120,   120,   124,
     124,   169,   251,    56,    57,    58,   148,   149,   150,   151,
     152,   153,   232,    63,    44,    45,     3,   182,    64,   195,
     127,   173,   129,   175,   176,    71,    72,   178,   179,   241,
     218,   219,   220,   200,   201,   202,   203,   204,   205,    10,
       5,   177,    12,   141,    10,    10,    46,    81,   180,    47,
     173,    14,   148,   149,   150,   151,   152,   153,    30,   199,
     142,   223,    31,    80,    32,    86,    87,    81,   161,   162,
     255,   256,    11,   226,   227,    33,   210,    11,    11,    82,
     112,    45,    85,    38,   105,    86,    87,   106,   217,    71,
      72,    46,   107,    46,    47,   108,    47,    70,    39,    71,
      72,   159,   160,    59,   245,   109,   246,   247,   248,   184,
     185,   138,   138,   229,   186,    73,    61,   173,   111,    74,
      75,    76,    77,    78,    96,   257,    79,    80,   158,   159,
     160,    81,    28,    29,   242,   243,   234,    80,    68,    69,
     104,    81,   110,    82,   112,    45,   114,   116,   125,    86,
      87,   132,   126,    82,    83,    84,    85,    64,   128,    86,
      87,   135,   148,   149,   150,   151,   152,   153,   137,   146,
     163,   214,    46,    46,   147,    47,    47,   215,   168,   148,
     149,   150,   151,   152,   153,   148,   149,   150,   151,   152,
     153,   148,   149,   150,   151,   152,   153,   172,   156,   157,
     158,   159,   160,   252,    97,    98,    99,   100,   101,   102,
     148,   149,   150,   151,   152,   153,   148,   149,   150,   151,
     152,   153,   212,   -56,   -56,   -56,   -56,   -56,   -56,   161,
     162,   145,   171,   142,   148,   149,   150,   151,   152,   153,
     -56,   -56,   -56,   -56,   -56,   -56,    45,   162,   193,   155,
     156,   157,   158,   159,   160,   183,   148,   149,   150,   151,
     152,   153,   155,   156,   157,   158,   159,   160,   189,   -56,
     -56,   -56,   -56,   -56,   -56,   157,   158,   159,   160,   190,
     213,   191,   216,   221,   222,   224,   225,   160,   228,   230,
     233,   235,   250,   236,   237,   238,   240,   244,   253,   254,
     258,   197,   249,   208,   133,   207,   259,   239
};

static const yytype_int16 yycheck[] =
{
      19,    70,   137,    19,   125,   145,    41,    80,    43,    82,
       3,   105,   147,   107,    63,    64,     8,    41,    80,    81,
      10,    10,    10,    10,    26,    49,    50,    20,    51,    22,
      41,    24,    26,    67,    68,    37,    30,   106,    49,   108,
      18,    64,    65,    37,    14,    80,    16,    82,     0,   170,
      40,   172,    40,    43,    43,    43,    43,    47,    47,    47,
      47,   110,     8,    20,    21,    22,    58,    59,    60,    61,
      62,    63,   212,     6,    67,    68,    67,   126,    11,   141,
      60,   116,    62,   118,   119,    12,    13,   122,   123,   224,
     184,   185,   186,   155,   156,   157,   158,   159,   160,     5,
      41,   120,    67,    50,    10,    11,   125,    54,   124,   125,
     145,    67,    58,    59,    60,    61,    62,    63,    62,   154,
      67,   190,    27,    50,    62,    72,    73,    54,    64,    65,
     251,   252,     5,   206,   207,    38,   171,    10,    11,    66,
      67,    68,    69,    19,    46,    72,    73,    49,   183,    12,
      13,   170,    46,   172,   170,    49,   172,    10,    71,    12,
      13,    56,    57,    67,   233,    31,   235,   236,   237,     6,
       7,   206,   207,     9,    11,    28,    67,   212,    47,    32,
      33,    34,    35,    36,    41,   254,    39,    50,    55,    56,
      57,    54,    10,    11,   229,   230,    15,    50,    26,    27,
      41,    54,    41,    66,    67,    68,    67,    50,    41,    72,
      73,    71,    50,    66,    67,    68,    69,    11,    50,    72,
      73,    67,    58,    59,    60,    61,    62,    63,    43,    41,
      41,    44,   251,   252,    48,   251,   252,    44,    41,    58,
      59,    60,    61,    62,    63,    58,    59,    60,    61,    62,
      63,    58,    59,    60,    61,    62,    63,    45,    53,    54,
      55,    56,    57,    45,    69,    70,    71,    72,    73,    74,
      58,    59,    60,    61,    62,    63,    58,    59,    60,    61,
      62,    63,    46,    58,    59,    60,    61,    62,    63,    64,
      65,    50,    40,    67,    58,    59,    60,    61,    62,    63,
      58,    59,    60,    61,    62,    63,    68,    65,    51,    52,
      53,    54,    55,    56,    57,     5,    58,    59,    60,    61,
      62,    63,    52,    53,    54,    55,    56,    57,    17,    58,
      59,    60,    61,    62,    63,    54,    55,    56,    57,    62,
      51,    29,    51,    51,    41,    48,    51,    57,    21,    42,
       5,    49,    44,    49,    49,    41,    41,    25,    41,     4,
      23,   146,   240,   163,    66,   162,   256,   222
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
      50,    54,    66,    67,    68,    69,    72,    73,    87,    88,
      97,    98,    99,   102,   103,   119,    41,    69,    70,    71,
      72,    73,    74,    91,    41,    46,    49,    46,    49,    31,
      41,    47,    67,    97,    67,    97,    50,    10,    40,    43,
      47,    10,    40,    43,    47,    41,    50,    81,    50,    81,
      92,    92,    71,    96,    87,    67,    89,    43,    97,    98,
      99,    50,    67,    98,    99,    50,    41,    48,    58,    59,
      60,    61,    62,    63,   100,    52,    53,    54,    55,    56,
      57,    64,    65,    41,    93,    87,    93,    87,    41,    92,
       8,    40,    45,    97,   120,    97,    97,   102,    97,    97,
     103,   104,    92,     5,     6,     7,    11,   116,   117,    17,
      62,    29,    88,    51,    51,    98,   120,    86,    88,    97,
      98,    98,    98,    98,    98,    98,   101,   101,    90,   104,
      97,   104,    46,    51,    44,    44,    51,    97,    93,    93,
      93,    51,    41,    87,    48,    51,    99,    99,    21,     9,
      42,   108,   120,     5,    15,    49,    49,    49,    41,   116,
      41,    88,    97,    97,    25,    87,    87,    87,    87,    89,
      44,     8,    45,    41,     4,   104,   104,    87,    23,   108
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    75,    76,    77,    78,    79,    79,    79,    80,    80,
      80,    81,    82,    82,    82,    82,    83,    84,    85,    86,
      86,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    89,    89,    90,    90,    91,    91,
      91,    91,    91,    91,    92,    92,    93,    93,    93,    93,
      94,    94,    94,    95,    96,    97,    97,    97,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    99,
      99,    99,    99,    99,    99,    99,    99,   100,   100,   100,
     100,   100,   100,   101,   102,   102,   102,   102,   103,   103,
     103,   103,   104,   104,   105,   105,   105,   105,   105,   106,
     106,   107,   108,   108,   109,   109,   110,   111,   112,   113,
     114,   115,   116,   116,   117,   117,   117,   118,   119,   120,
     120
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     5,     0,     5,     0,     1,     1,
       1,     1,     1,     1,     3,     0,     3,     3,     3,     3,
       1,     2,     1,     2,     2,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     2,     4,
       4,     2,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     0,     1,     3,     4,     2,     1,     3,
       4,     2,     3,     1,     1,     1,     1,     1,     1,     3,
       3,     6,     5,     0,     1,     1,     5,     9,     4,     6,
       5,     7,     3,     0,     4,     4,     4,     4,     4,     3,
       1
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
#line 146 "parser.y"
                                                                                               {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de algoritmo detectada.\n"); 
        #endif
	}
#line 1631 "parser.tab.c"
    break;

  case 3:
#line 154 "parser.y"
                                                         {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de cabecera_alg detectada.\n"); 
        #endif
    }
#line 1641 "parser.tab.c"
    break;

  case 4:
#line 162 "parser.y"
                            {
         #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de bloque_alg detectada.\n"); 
        #endif
    }
#line 1651 "parser.tab.c"
    break;

  case 5:
#line 170 "parser.y"
                                  {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_globales detectada 1.\n"); 
        #endif
    }
#line 1661 "parser.tab.c"
    break;

  case 6:
#line 175 "parser.y"
                                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_globales detectada 2.\n"); 
        #endif
    }
#line 1671 "parser.tab.c"
    break;

  case 7:
#line 180 "parser.y"
             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_globales detectada: VACIO 3.\n"); 
        #endif
    }
#line 1681 "parser.tab.c"
    break;

  case 8:
#line 188 "parser.y"
                     {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_a_f detectada 1.\n"); 
        #endif
    }
#line 1691 "parser.tab.c"
    break;

  case 9:
#line 193 "parser.y"
                        {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_a_f detectada 2.\n"); 
        #endif
    }
#line 1701 "parser.tab.c"
    break;

  case 10:
#line 198 "parser.y"
             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_a_f detectada: VACIO 3.\n"); 
        #endif
    }
#line 1711 "parser.tab.c"
    break;

  case 11:
#line 206 "parser.y"
                               {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de bloque detectada.\n"); 
        #endif
    }
#line 1721 "parser.tab.c"
    break;

  case 12:
#line 214 "parser.y"
                                  {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaraciones detectada 1.\n"); 
        #endif
    }
#line 1731 "parser.tab.c"
    break;

  case 13:
#line 219 "parser.y"
                                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaraciones detectada 2.\n"); 
        #endif
    }
#line 1741 "parser.tab.c"
    break;

  case 14:
#line 224 "parser.y"
                                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaraciones detectada 3.\n"); 
        #endif
    }
#line 1751 "parser.tab.c"
    break;

  case 15:
#line 229 "parser.y"
            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaraciones detectada: VACIO 4.\n"); 
        #endif
    }
#line 1761 "parser.tab.c"
    break;

  case 16:
#line 239 "parser.y"
                                                        {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaracion_tipo encontrada.\n"); 
        #endif
	}
#line 1771 "parser.tab.c"
    break;

  case 17:
#line 247 "parser.y"
                                                          {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaracion_cte encontrada.\n"); 
        #endif
	}
#line 1781 "parser.tab.c"
    break;

  case 18:
#line 255 "parser.y"
                                                      {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaracion_var encontrada.\n"); 
        #endif
	}
#line 1791 "parser.tab.c"
    break;

  case 19:
#line 263 "parser.y"
                                                               {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_d_tipo encontrada 1.\n"); 
        #endif
	}
#line 1801 "parser.tab.c"
    break;

  case 20:
#line 268 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_d_tipo encontrada: VACIO 2.\n"); 
        #endif
    }
#line 1811 "parser.tab.c"
    break;

  case 21:
#line 276 "parser.y"
                                              {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 1.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1822 "parser.tab.c"
    break;

  case 22:
#line 282 "parser.y"
                                                                                                        {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 2.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1833 "parser.tab.c"
    break;

  case 23:
#line 288 "parser.y"
                    {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 3.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1844 "parser.tab.c"
    break;

  case 24:
#line 294 "parser.y"
                {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 3.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1855 "parser.tab.c"
    break;

  case 25:
#line 300 "parser.y"
                                                 {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 4.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1866 "parser.tab.c"
    break;

  case 26:
#line 306 "parser.y"
                           {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 5.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1877 "parser.tab.c"
    break;

  case 27:
#line 312 "parser.y"
                       {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada int 6.\n"); 
        #endif
        (yyval.ty_tipo) = T_ENTERO;
	}
#line 1888 "parser.tab.c"
    break;

  case 28:
#line 318 "parser.y"
                     {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada bool 7.\n"); 
        #endif
        (yyval.ty_tipo) = T_BOOL;
	}
#line 1899 "parser.tab.c"
    break;

  case 29:
#line 324 "parser.y"
                     {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada char 8.\n"); 
        #endif
        (yyval.ty_tipo) = T_CHAR;
	}
#line 1910 "parser.tab.c"
    break;

  case 30:
#line 330 "parser.y"
                     {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada real 9.\n"); 
        #endif
        (yyval.ty_tipo) = T_REAL;
	}
#line 1921 "parser.tab.c"
    break;

  case 31:
#line 336 "parser.y"
                       {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada cadena 10.\n"); 
        #endif
        (yyval.ty_tipo) = T_CADENA;
	}
#line 1932 "parser.tab.c"
    break;

  case 32:
#line 345 "parser.y"
                  {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura expreasion_t econtrada 1.\n"); 
        #endif
	}
#line 1942 "parser.tab.c"
    break;

  case 33:
#line 350 "parser.y"
                       {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura expreasion_t econtrada 2.\n"); 
        #endif
	}
#line 1952 "parser.tab.c"
    break;

  case 34:
#line 358 "parser.y"
                                                               {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_campos econtrada 1.\n"); 
        #endif
	}
#line 1962 "parser.tab.c"
    break;

  case 35:
#line 363 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_campos econtrada:VACIO 2.\n"); 
        #endif
    }
#line 1972 "parser.tab.c"
    break;

  case 36:
#line 371 "parser.y"
                                                               {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_d_cte econtrada 1.\n"); 
        #endif
	}
#line 1982 "parser.tab.c"
    break;

  case 37:
#line 376 "parser.y"
                 {
            #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_d_cte econtrada: VACIO 7.\n"); 
        #endif
    }
#line 1992 "parser.tab.c"
    break;

  case 38:
#line 384 "parser.y"
                {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_BOOL econtrada 1 -> %d.\n",(yyvsp[0].ty_boolean)); 
        #endif
	}
#line 2002 "parser.tab.c"
    break;

  case 39:
#line 389 "parser.y"
                      {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_CADE econtrada 2 -> %s.\n",(yyvsp[0].ty_string)); 
        #endif
	}
#line 2012 "parser.tab.c"
    break;

  case 40:
#line 394 "parser.y"
                       {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_CARAC econtrada 3 -> %c.\n",(yyvsp[0].ty_caracter)); 
        #endif
	}
#line 2022 "parser.tab.c"
    break;

  case 41:
#line 399 "parser.y"
                            {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_COMENTARIO econtrada 4.\n"); 
        #endif
	}
#line 2032 "parser.tab.c"
    break;

  case 42:
#line 404 "parser.y"
                        {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_ENTERO econtrada 5 -> %ld.\n",(yyvsp[0].ty_num_entero)); 
        #endif
	}
#line 2042 "parser.tab.c"
    break;

  case 43:
#line 409 "parser.y"
                      {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_REAL econtrada 6 -> %f.\n",(yyvsp[0].ty_num_real)); 
        #endif
	}
#line 2052 "parser.tab.c"
    break;

  case 44:
#line 419 "parser.y"
                                      {
        /*Hemos bajado 'TK_PR_DEFVAL d_tipo' a lista_id */
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_d_var detectada 1.\n");
        #endif
        (yyval.ty_tipo) = (yyvsp[-2].ty_listaID).idList;
        inc_idLista();
    }
#line 2065 "parser.tab.c"
    break;

  case 45:
#line 427 "parser.y"
            { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_d_var detectada: VACIO 2.\n"); 
        #endif
    }
#line 2075 "parser.tab.c"
    break;

  case 46:
#line 435 "parser.y"
                                  {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_id detectada 1 -> %s.\n",(yyvsp[-2].ty_string)); 
        #endif
        if (inserHead_tsym(&miSimTab,(yyvsp[-2].ty_string),(yyvsp[0].ty_tipo),get_idList()) == ERR_YA_EXISTE_VAR)
            yyerror("!! Variable (%s) ya definida.",(yyvsp[-2].ty_string));
        
        (yyval.ty_listaID).idList = get_idList();
        (yyval.ty_listaID).tipo = (yyvsp[0].ty_tipo);
    }
#line 2090 "parser.tab.c"
    break;

  case 47:
#line 445 "parser.y"
                                    {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_id detectada 3.\n"); 
        #endif
        if (inserHead_tsym(&miSimTab,(yyvsp[-2].ty_string),(yyvsp[0].ty_tipo),get_idList()) == ERR_YA_EXISTE_VAR)
            yyerror("!! Variable (%s) ya definida.",(yyvsp[-2].ty_string));

        (yyval.ty_listaID).idList = get_idList();
        (yyval.ty_listaID).tipo = (yyvsp[0].ty_tipo);
    }
#line 2105 "parser.tab.c"
    break;

  case 48:
#line 455 "parser.y"
                                    {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_id detectada 5.\n"); 
        #endif
        if (inserHead_tsym(&miSimTab,(yyvsp[-2].ty_string),(yyvsp[0].ty_listaID).tipo,get_idList()) == ERR_YA_EXISTE_VAR)
            yyerror("!! Variable (%s) ya definida.",(yyvsp[-2].ty_string));
        
        (yyval.ty_listaID) = (yyvsp[0].ty_listaID);
    }
#line 2119 "parser.tab.c"
    break;

  case 49:
#line 464 "parser.y"
                                    {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_id detectada 6.\n"); 
        #endif
        if (inserHead_tsym(&miSimTab,(yyvsp[-2].ty_string),(yyvsp[0].ty_listaID).tipo,get_idList()) == ERR_YA_EXISTE_VAR)
            yyerror("!! Variable (%s) ya definida.",(yyvsp[-2].ty_string));
        
        (yyval.ty_listaID) = (yyvsp[0].ty_listaID);
    }
#line 2133 "parser.tab.c"
    break;

  case 50:
#line 476 "parser.y"
            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_ent_sal detectada 1.\n"); 
        #endif
    }
#line 2143 "parser.tab.c"
    break;

  case 51:
#line 481 "parser.y"
                        {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_ent_sal detectada 2.\n"); 
        #endif
    }
#line 2153 "parser.tab.c"
    break;

  case 52:
#line 486 "parser.y"
              {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_ent_sal detectada 3.\n"); 
        #endif
    }
#line 2163 "parser.tab.c"
    break;

  case 53:
#line 494 "parser.y"
                          {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_ent detectada.\n"); 
        #endif
        set_ioType(&miSimTab,(yyvsp[0].ty_tipo),DF_IN);
    }
#line 2174 "parser.tab.c"
    break;

  case 54:
#line 503 "parser.y"
                         {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_sal detectada.\n"); 
        #endif
        set_ioType(&miSimTab,(yyvsp[0].ty_tipo),DF_OUT);
    }
#line 2185 "parser.tab.c"
    break;

  case 55:
#line 512 "parser.y"
          {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de expresion detectada 1.\n"); 
        #endif
        (yyval.ty_st_exp).tipo = EXP_ARI;
        (yyval.ty_st_exp).ari.id = (yyvsp[0].ty_st_ari).id;
        (yyval.ty_st_exp).ari.tipo = (yyvsp[0].ty_st_ari).tipo;
    }
#line 2198 "parser.tab.c"
    break;

  case 56:
#line 520 "parser.y"
            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de expresion detectada 2.\n"); 
        #endif
        (yyval.ty_st_exp).tipo = EXP_BOOL;
        (yyval.ty_st_exp).bool.trues = (yyvsp[0].ty_st_bool).trues;
        (yyval.ty_st_exp).bool.falses = (yyvsp[0].ty_st_bool).falses;
    }
#line 2211 "parser.tab.c"
    break;

  case 57:
#line 528 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de expresion detectada 3.\n"); 
        #endif
    }
#line 2221 "parser.tab.c"
    break;

  case 58:
#line 536 "parser.y"
                          {
        /*hacemos solo pra enteros con entero y real con real o mezcaloms int real */
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 1.\n"); 
        #endif
        if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_ENTERO){
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;

            int id_res = newTemp(&miSimTab,idTemp,T_ENTERO);
            gen(&miQuadTab,OP_SUMA_INT,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_ENTERO;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_REAL && (yyvsp[0].ty_st_ari).tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_SUMA_REAL,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);
            
            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_REAL && (yyvsp[0].ty_st_ari).tipo == T_ENTERO) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[0].ty_st_ari).id,OPERNDO_NULL,op1);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_SUMA_REAL,(yyvsp[-2].ty_st_ari).id,op1,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[-2].ty_st_ari).id,OPERNDO_NULL,op1);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_SUMA_REAL,(yyvsp[0].ty_st_ari).id,op1,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else {
            yyerror("!! El tipo %s y el %s no son compatibles para la suma.",DF_NAMES[(yyvsp[-2].ty_st_ari).tipo],DF_NAMES[(yyvsp[0].ty_st_ari).tipo]);
        }
    }
#line 2282 "parser.tab.c"
    break;

  case 59:
#line 592 "parser.y"
                              {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 2.\n"); 
        #endif
        if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_ENTERO){
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_ENTERO);
            gen(&miQuadTab,OP_RESTA_INT,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_ENTERO;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_REAL && (yyvsp[0].ty_st_ari).tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_RESTA_REAL,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);
            
            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_REAL && (yyvsp[0].ty_st_ari).tipo == T_ENTERO) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[0].ty_st_ari).id,OPERNDO_NULL,op1);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_RESTA_REAL,(yyvsp[-2].ty_st_ari).id,op1,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[-2].ty_st_ari).id,OPERNDO_NULL,op1);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_RESTA_REAL,(yyvsp[0].ty_st_ari).id,op1,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else {
            yyerror("!! El tipo %s y el %s no son compatibles para la resta.",DF_NAMES[(yyvsp[-2].ty_st_ari).tipo],DF_NAMES[(yyvsp[0].ty_st_ari).tipo]);
        }
    }
#line 2341 "parser.tab.c"
    break;

  case 60:
#line 646 "parser.y"
                            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 3.\n"); 
        #endif
        if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_ENTERO){
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_ENTERO);
            gen(&miQuadTab,OP_MULT_INT,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_ENTERO;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_REAL && (yyvsp[0].ty_st_ari).tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_MULT_REAL,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);
            
            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_REAL && (yyvsp[0].ty_st_ari).tipo == T_ENTERO) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[0].ty_st_ari).id,OPERNDO_NULL,op1);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_MULT_REAL,(yyvsp[-2].ty_st_ari).id,op1,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[-2].ty_st_ari).id,OPERNDO_NULL,op1);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_MULT_REAL,(yyvsp[0].ty_st_ari).id,op1,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        }  else {
            yyerror("!! El tipo %s y el %s no son compatibles para la multiplicacion.",DF_NAMES[(yyvsp[-2].ty_st_ari).tipo],DF_NAMES[(yyvsp[0].ty_st_ari).tipo]);
        }
    }
#line 2400 "parser.tab.c"
    break;

  case 61:
#line 700 "parser.y"
                             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 4.\n"); 
        #endif
        if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_ENTERO){
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[-2].ty_st_ari).id,OPERNDO_NULL,op1);
            
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op2 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[0].ty_st_ari).id,OPERNDO_NULL,op2);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_MULT_INT,op1,op2,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_REAL && (yyvsp[0].ty_st_ari).tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_DIV_REAL,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);
            
            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_REAL && (yyvsp[0].ty_st_ari).tipo == T_ENTERO) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[0].ty_st_ari).id,OPERNDO_NULL,op1);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_DIV_REAL,(yyvsp[-2].ty_st_ari).id,op1,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        } else if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,(yyvsp[-2].ty_st_ari).id,OPERNDO_NULL,op1);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_DIV_REAL,(yyvsp[0].ty_st_ari).id,op1,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        }  else {
            yyerror("!! El tipo %s y el %s no son compatibles para la division.",DF_NAMES[(yyvsp[-2].ty_st_ari).tipo],DF_NAMES[(yyvsp[0].ty_st_ari).tipo]);
        }
    }
#line 2469 "parser.tab.c"
    break;

  case 62:
#line 764 "parser.y"
                           {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 5.\n"); 
        #endif
        /*solo con entero*/
        if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_ENTERO){
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_ENTERO);
            gen(&miQuadTab,OP_MOD,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_ENTERO;
        } else {
            yyerror("!! El tipo %s y el %s no son compatibles para el resto , solo int.",DF_NAMES[(yyvsp[-2].ty_st_ari).tipo],DF_NAMES[(yyvsp[0].ty_st_ari).tipo]);
        }
    }
#line 2492 "parser.tab.c"
    break;

  case 63:
#line 782 "parser.y"
                           {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 6.\n"); 
        #endif
        /*solo con enteros*/
        if ((yyvsp[-2].ty_st_ari).tipo == T_ENTERO && (yyvsp[0].ty_st_ari).tipo == T_ENTERO){
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_ENTERO);
            gen(&miQuadTab,OP_DIV_INT,(yyvsp[-2].ty_st_ari).id,(yyvsp[0].ty_st_ari).id,id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_ENTERO;
        }  else {
            yyerror("!! El tipo %s y el %s no son compatibles para la division entera.",DF_NAMES[(yyvsp[-2].ty_st_ari).tipo],DF_NAMES[(yyvsp[0].ty_st_ari).tipo]);
        }
    }
#line 2515 "parser.tab.c"
    break;

  case 64:
#line 800 "parser.y"
                                          {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 7.\n"); 
        #endif
        (yyval.ty_st_ari) = (yyvsp[-1].ty_st_ari);
    }
#line 2526 "parser.tab.c"
    break;

  case 65:
#line 806 "parser.y"
                  {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 8.\n"); 
        #endif
        (yyval.ty_st_ari) = (yyvsp[0].ty_st_ari);
    }
#line 2537 "parser.tab.c"
    break;

  case 66:
#line 812 "parser.y"
                    {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 9.\n"); 
        #endif
        char idTemp[10];
        sprintf(idTemp, "temp%d", temp_id);
        temp_id++;
        (yyval.ty_st_ari).id = newTemp(&miSimTab,idTemp,T_ENTERO);
        (yyval.ty_st_ari).tipo = T_ENTERO;
    }
#line 2552 "parser.tab.c"
    break;

  case 67:
#line 822 "parser.y"
                  {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 10.\n"); 
        #endif
        char idTemp[10];
        sprintf(idTemp, "temp%d", temp_id);
        temp_id++;
        (yyval.ty_st_ari).id = newTemp(&miSimTab,idTemp,T_REAL);
        (yyval.ty_st_ari).tipo = T_REAL;
    }
#line 2567 "parser.tab.c"
    break;

  case 68:
#line 832 "parser.y"
                       { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 11.\n"); 
        #endif
        if ((yyvsp[0].ty_st_ari).tipo == T_ENTERO) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab, idTemp, T_ENTERO);
            gen(&miQuadTab, OP_TO_NEG_INT, (yyvsp[0].ty_st_ari).id, OPERNDO_NULL, id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_ENTERO;
        } else if ((yyvsp[0].ty_st_ari).tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab, idTemp, T_REAL);
            gen(&miQuadTab, OP_TO_NEG_REAL, (yyvsp[0].ty_st_ari).id, OPERNDO_NULL, id_res);

            (yyval.ty_st_ari).id = id_res;
            (yyval.ty_st_ari).tipo = T_REAL;
        }   else {
            yyerror("!! El tipo %s es compatibles para la opearcion negativo .",DF_NAMES[(yyvsp[0].ty_st_ari).tipo]);
        }
    }
#line 2598 "parser.tab.c"
    break;

  case 69:
#line 861 "parser.y"
                             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 1.\n"); 
        #endif
        backpatch(&miQuadTab,(yyvsp[-3].ty_st_bool).trues,(yyvsp[-1].ty_tipo));
        (yyval.ty_st_bool).trues = merge((yyvsp[-3].ty_st_bool).falses,(yyvsp[0].ty_st_bool).falses);
        (yyval.ty_st_bool).falses = (yyvsp[0].ty_st_bool).falses;
    }
#line 2611 "parser.tab.c"
    break;

  case 70:
#line 869 "parser.y"
                               {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 2.\n"); 
        #endif
        backpatch(&miQuadTab,(yyvsp[-3].ty_st_bool).trues,(yyvsp[-1].ty_tipo));
        (yyval.ty_st_bool).trues = merge((yyvsp[-3].ty_st_bool).falses,(yyvsp[0].ty_st_bool).falses);
        (yyval.ty_st_bool).falses = (yyvsp[0].ty_st_bool).falses;
    }
#line 2624 "parser.tab.c"
    break;

  case 71:
#line 877 "parser.y"
                    {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 3.\n"); 
        #endif
        (yyval.ty_st_bool).trues = (yyvsp[0].ty_st_bool).falses;
        (yyval.ty_st_bool).falses = (yyvsp[0].ty_st_bool).trues;
    }
#line 2636 "parser.tab.c"
    break;

  case 72:
#line 884 "parser.y"
                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 4.\n"); 
        #endif
        (yyval.ty_st_bool) = (yyvsp[0].ty_st_bool);
    }
#line 2647 "parser.tab.c"
    break;

  case 73:
#line 890 "parser.y"
                      {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 5.\n"); 
        #endif
    }
#line 2657 "parser.tab.c"
    break;

  case 74:
#line 895 "parser.y"
                 { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 6.\n"); 
        #endif
    }
#line 2667 "parser.tab.c"
    break;

  case 75:
#line 900 "parser.y"
                                { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 7.\n"); 
        #endif
        (yyval.ty_st_bool).trues = makelist(miQuadTab.nextQua);
        (yyval.ty_st_bool).falses = makelist(miQuadTab.nextQua);

        gen(&miQuadTab,(yyvsp[-1].ty_tipo),(yyvsp[-2].ty_st_exp).ari.id,(yyvsp[0].ty_st_exp).ari.id,OPERNDO_NULL);
        gen(&miQuadTab,OP_GOTO,OPERNDO_NULL,OPERNDO_NULL,OPERNDO_NULL);
    }
#line 2682 "parser.tab.c"
    break;

  case 76:
#line 910 "parser.y"
                                          { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 8.\n"); 
        #endif
    }
#line 2692 "parser.tab.c"
    break;

  case 77:
#line 918 "parser.y"
                { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 1.\n"); 
        #endif
        (yyval.ty_tipo) = OP_MAYOR;
    }
#line 2703 "parser.tab.c"
    break;

  case 78:
#line 924 "parser.y"
                  { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 2.\n"); 
        #endif
        (yyval.ty_tipo) = OP_MENOR;
    }
#line 2714 "parser.tab.c"
    break;

  case 79:
#line 930 "parser.y"
                   { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 3.\n"); 
        #endif
        (yyval.ty_tipo) = OP_MAYOR_IGUAL;
    }
#line 2725 "parser.tab.c"
    break;

  case 80:
#line 936 "parser.y"
                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 4.\n"); 
        #endif
        (yyval.ty_tipo) = OP_MENOR_IGUAL;
    }
#line 2736 "parser.tab.c"
    break;

  case 81:
#line 942 "parser.y"
                 { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 5.\n"); 
        #endif
        (yyval.ty_tipo) = OP_DISTINTO;
    }
#line 2747 "parser.tab.c"
    break;

  case 82:
#line 948 "parser.y"
                 { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 6.\n"); 
        #endif
        (yyval.ty_tipo) = OP_IGUAL;
    }
#line 2758 "parser.tab.c"
    break;

  case 83:
#line 957 "parser.y"
          {
        (yyval.ty_tipo) = miQuadTab.nextQua;
    }
#line 2766 "parser.tab.c"
    break;

  case 84:
#line 963 "parser.y"
              {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando_ari detectada 1.\n"); 
        #endif
        nodeTab *nodo = find_tsym_by_name(&miSimTab,(yyvsp[0].ty_string));
        (yyval.ty_st_ari).id = nodo->id;
        (yyval.ty_st_ari).tipo = nodo->type;
    }
#line 2779 "parser.tab.c"
    break;

  case 85:
#line 971 "parser.y"
                                            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando_ari detectada 2.\n"); 
        #endif
    }
#line 2789 "parser.tab.c"
    break;

  case 86:
#line 976 "parser.y"
                                                         {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando_ari detectada 3.\n"); 
        #endif
    }
#line 2799 "parser.tab.c"
    break;

  case 87:
#line 981 "parser.y"
                            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando_ari detectada 4.\n"); 
        #endif
    }
#line 2809 "parser.tab.c"
    break;

  case 88:
#line 989 "parser.y"
              {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando_bool detectada 1.\n"); 
        #endif
        (yyval.ty_st_bool).trues = makelist(miQuadTab.nextQua);
        (yyval.ty_st_bool).falses = makelist(miQuadTab.nextQua+1);

        nodeTab *nodo = find_tsym_by_name(&miSimTab,(yyvsp[0].ty_string));
        gen(&miQuadTab,OP_GOTO_CONDI,nodo->id,OPERNDO_NULL,OPERNDO_NULL);
        gen(&miQuadTab,OP_GOTO,OPERNDO_NULL,OPERNDO_NULL,OPERNDO_NULL);
    }
#line 2825 "parser.tab.c"
    break;

  case 89:
#line 1000 "parser.y"
                                              {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando_bool detectada 2.\n"); 
        #endif
    }
#line 2835 "parser.tab.c"
    break;

  case 90:
#line 1005 "parser.y"
                                                          {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando_bool detectada 3.\n"); 
        #endif
    }
#line 2845 "parser.tab.c"
    break;

  case 91:
#line 1010 "parser.y"
                             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando_bool detectada 4.\n"); 
        #endif
    }
#line 2855 "parser.tab.c"
    break;

  case 92:
#line 1018 "parser.y"
                                          {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instrucciones detectada 1.\n"); 
        #endif
    }
#line 2865 "parser.tab.c"
    break;

  case 93:
#line 1023 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instrucciones detectada 2.\n"); 
        #endif
    }
#line 2875 "parser.tab.c"
    break;

  case 94:
#line 1031 "parser.y"
                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 1.\n"); 
        #endif
    }
#line 2885 "parser.tab.c"
    break;

  case 95:
#line 1036 "parser.y"
                {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 2.\n"); 
        #endif
    }
#line 2895 "parser.tab.c"
    break;

  case 96:
#line 1041 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 3.\n"); 
        #endif
    }
#line 2905 "parser.tab.c"
    break;

  case 97:
#line 1046 "parser.y"
               {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 4.\n"); 
        #endif
    }
#line 2915 "parser.tab.c"
    break;

  case 98:
#line 1051 "parser.y"
               {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 5.\n"); 
        #endif
    }
#line 2925 "parser.tab.c"
    break;

  case 99:
#line 1059 "parser.y"
                                     {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de asignacion detectada.\n"); 
        #endif
        if ((yyvsp[0].ty_st_exp).tipo == EXP_ARI && (yyvsp[-2].ty_st_ari).tipo == (yyvsp[0].ty_st_exp).ari.tipo){

            gen(&miQuadTab,OP_ASIGNA,(yyvsp[0].ty_st_exp).ari.id,OPERNDO_NULL,(yyvsp[-2].ty_st_ari).id);
        } else {
            yyerror("!! El tipo %s no se puede asignar al %s.", DF_NAMES[(yyvsp[0].ty_st_exp).ari.tipo],DF_NAMES[(yyvsp[-2].ty_st_ari).tipo]);
        }
    }
#line 2941 "parser.tab.c"
    break;

  case 100:
#line 1070 "parser.y"
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
#line 2957 "parser.tab.c"
    break;

  case 101:
#line 1084 "parser.y"
                                                                            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de alternativa detectada.\n"); 
        #endif
    }
#line 2967 "parser.tab.c"
    break;

  case 102:
#line 1092 "parser.y"
                                                                     {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_opciones detectada 1.\n"); 
        #endif
    }
#line 2977 "parser.tab.c"
    break;

  case 103:
#line 1097 "parser.y"
             {
       #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_opciones detectada: VACIO 2.\n"); 
        #endif
    }
#line 2987 "parser.tab.c"
    break;

  case 104:
#line 1105 "parser.y"
                {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de iteracion detectada 1.\n"); 
        #endif
    }
#line 2997 "parser.tab.c"
    break;

  case 105:
#line 1110 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de iteracion detectada 2.\n"); 
        #endif
    }
#line 3007 "parser.tab.c"
    break;

  case 106:
#line 1118 "parser.y"
                                                                    {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de it_cota_exp detectada.\n"); 
        #endif
    }
#line 3017 "parser.tab.c"
    break;

  case 107:
#line 1126 "parser.y"
                                                                                                         {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de it_cota_fija detectada.\n"); 
        #endif
    }
#line 3027 "parser.tab.c"
    break;

  case 108:
#line 1135 "parser.y"
                                                    {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura accion_d econtrada.\n"); 
        #endif
	}
#line 3037 "parser.tab.c"
    break;

  case 109:
#line 1143 "parser.y"
                                                                           {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura funcion_d econtrada.\n"); 
        #endif
	}
#line 3047 "parser.tab.c"
    break;

  case 110:
#line 1151 "parser.y"
                                                                         {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura funcion_d econtrada .\n"); 
        #endif
	}
#line 3057 "parser.tab.c"
    break;

  case 111:
#line 1159 "parser.y"
                                                                                           {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura f_cabecera econtrada.\n"); 
        #endif
	}
#line 3067 "parser.tab.c"
    break;

  case 112:
#line 1167 "parser.y"
                                         {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_par_form econtrada 1.\n"); 
        #endif
	}
#line 3077 "parser.tab.c"
    break;

  case 113:
#line 1172 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_par_form econtrada:VACIO 2.\n"); 
        #endif
    }
#line 3087 "parser.tab.c"
    break;

  case 114:
#line 1180 "parser.y"
                                               {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_p_form econtrada 1.\n"); 
        #endif
	}
#line 3097 "parser.tab.c"
    break;

  case 115:
#line 1185 "parser.y"
                                                 {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_p_form econtrada 2.\n"); 
        #endif 
	}
#line 3107 "parser.tab.c"
    break;

  case 116:
#line 1190 "parser.y"
                                                   {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_p_form econtrada 3.\n"); 
        #endif 
	}
#line 3117 "parser.tab.c"
    break;

  case 117:
#line 1198 "parser.y"
                                                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de accion_ll detectada.\n"); 
        #endif
    }
#line 3127 "parser.tab.c"
    break;

  case 118:
#line 1206 "parser.y"
                                                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de funcion_ll detectada.\n"); 
        #endif
    }
#line 3137 "parser.tab.c"
    break;

  case 119:
#line 1214 "parser.y"
                             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de ll_ll detectada 1.\n"); 
        #endif
    }
#line 3147 "parser.tab.c"
    break;

  case 120:
#line 1219 "parser.y"
               {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de ll_ll detectada 2.\n"); 
        #endif
    }
#line 3157 "parser.tab.c"
    break;


#line 3161 "parser.tab.c"

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
#line 1226 "parser.y"


void yyerror (char const *s, ...){
    va_list args;
    fprintf(stderr, "\n!! Error en la linea %d: \n", yylineno);
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

    temp_id = 0;

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

    print_3dir_tqua(&miQuadTab,&miSimTab);
	return 0;
}
