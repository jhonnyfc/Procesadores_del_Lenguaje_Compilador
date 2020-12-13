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

    double      ty_num_real;
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
#define YYLAST   370

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
     476,   481,   486,   494,   504,   514,   522,   530,   538,   594,
     648,   702,   766,   784,   802,   808,   814,   824,   834,   863,
     871,   879,   886,   892,   897,   902,   912,   920,   926,   932,
     938,   944,   950,   959,   965,   973,   978,   983,   991,  1002,
    1007,  1012,  1020,  1025,  1033,  1038,  1043,  1048,  1053,  1061,
    1072,  1086,  1094,  1099,  1107,  1112,  1120,  1128,  1137,  1145,
    1153,  1161,  1169,  1174,  1182,  1187,  1192,  1200,  1208,  1216,
    1221
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
       6,   -30,    46,    23,  -141,    -3,    61,    65,    -5,    40,
      -3,    -3,    17,    63,    76,    97,   102,   125,    78,     7,
      -5,    -5,    -5,    80,    85,   118,    40,    40,  -141,  -141,
     147,   117,   238,   124,     4,    27,   145,   143,   149,  -141,
    -141,    50,   133,    50,   162,  -141,    18,   103,  -141,   179,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,   205,
      -5,   206,    -5,   102,   102,   169,   246,  -141,  -141,  -141,
     147,  -141,  -141,   207,   -23,  -141,  -141,  -141,  -141,   215,
      50,   -15,    50,    -8,    -1,  -141,  -141,   218,   225,   255,
     267,   109,    12,    68,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,   235,  -141,   102,   147,   102,   147,   236,   102,
    -141,  -141,   248,     8,   285,   202,    50,  -141,    50,    50,
     208,  -141,    50,    50,   269,     7,   102,   333,    96,   322,
    -141,  -141,  -141,  -141,  -141,   278,   312,    73,   255,   249,
     -21,   -15,  -141,   106,   226,    50,    61,    73,  -141,  -141,
    -141,  -141,  -141,  -141,    50,   -15,   -15,   -15,   -15,   -15,
     -15,  -141,  -141,    65,  -141,  -141,  -141,  -141,  -141,  -141,
       7,    50,     7,   220,   291,   255,   183,    12,   255,   190,
      68,  -141,   292,    50,   102,   102,   102,   293,   304,  -141,
     147,  -141,   298,  -141,  -141,   249,   296,  -141,  -141,   255,
     279,   174,   106,   154,   294,  -141,    50,    50,  -141,   327,
     146,   307,    50,  -141,  -141,  -141,   345,   163,   303,   305,
     306,   315,    96,   316,    73,  -141,   234,   268,  -141,    50,
      50,   328,  -141,   147,  -141,   147,   147,   147,  -141,  -141,
     207,   314,   129,   209,  -141,   318,  -141,  -141,  -141,  -141,
     356,     7,     7,  -141,   147,   338,   307,  -141,  -141,  -141
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
       0,    73,    74,    35,    67,    27,    28,    31,    29,     0,
       0,     0,     0,    84,    88,    33,    66,     0,     0,    32,
      55,    56,    65,    72,    57,    16,    40,    39,    41,    42,
      43,    38,     0,    17,     0,     0,     0,     0,     0,    45,
       2,    67,    84,     0,     0,     0,     0,    87,     0,     0,
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
    -141,  -141,  -141,  -141,   192,   191,    52,   217,   115,   188,
    -141,   216,   -69,  -135,   123,   201,  -141,   -49,   -93,  -141,
    -141,   299,   -35,   -61,   -73,  -141,   204,   -19,   -16,  -121,
    -141,  -141,  -141,   111,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,   148,  -141,  -141,  -141,  -140
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    87,    88,   136,    15,   102,    36,    37,    65,
      66,    67,    89,    90,    91,   154,   206,    92,    93,    48,
      49,    50,    51,   231,    52,    53,    54,    26,    27,    62,
      60,   187,   188,    55,    94,   174
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,   134,   192,    47,   181,   196,   113,   140,   115,   144,
      40,   164,   198,   166,   130,   131,   170,   111,   -30,   139,
     143,     6,   117,     6,     1,    16,   -30,    41,   117,    42,
     194,    43,     7,   -23,     7,   141,   165,     3,   167,    81,
     -24,   -23,   145,   161,   162,   138,     4,   138,   -24,   209,
     104,   211,   142,   105,    23,   119,    24,    86,   118,   120,
     169,   119,    71,    72,     5,   120,   148,   149,   150,   151,
     152,   153,   232,   106,    44,    45,   107,   182,   121,    30,
     195,   173,   111,   175,   176,    71,    72,   178,   179,   241,
      31,   218,   219,   220,   200,   201,   202,   203,   204,   205,
      80,   177,   184,   185,    81,   111,    46,   186,   180,    47,
     173,   123,   127,   121,   129,   124,    82,   112,    45,   199,
      10,   223,    86,    80,    63,    10,    10,    81,    12,    64,
     255,   256,    14,   226,   227,    33,   210,   251,    32,    82,
     112,    45,    85,   122,    38,    86,   123,    59,   217,    39,
     124,    46,    61,    46,    47,   229,    47,    70,    95,    71,
      72,   158,   159,   160,   245,   103,   246,   247,   248,    34,
      35,   138,   138,   161,   162,    73,   108,   173,   234,    74,
      75,    76,    77,    78,   109,   257,    79,   148,   149,   150,
     151,   152,   153,    11,   242,   243,   110,    80,    11,    11,
     114,    81,    28,    29,   148,   149,   150,   151,   152,   153,
     159,   160,   116,    82,    83,    84,    85,    68,    69,    86,
     125,   148,   149,   150,   151,   152,   153,   214,   157,   158,
     159,   160,    46,    46,   215,    47,    47,    56,    57,    58,
     132,   148,   149,   150,   151,   152,   153,   172,   148,   149,
     150,   151,   152,   153,   252,   126,   128,    64,   137,   146,
     148,   149,   150,   151,   152,   153,   212,   148,   149,   150,
     151,   152,   153,   147,   135,   142,   163,   168,   148,   149,
     150,   151,   152,   153,   -56,   -56,   -56,   -56,   -56,   -56,
     161,   162,   -56,   -56,   -56,   -56,   -56,   -56,   145,   162,
     193,   155,   156,   157,   158,   159,   160,    96,    97,    98,
      99,   100,   101,   148,   149,   150,   151,   152,   153,   155,
     156,   157,   158,   159,   160,   171,   -56,   -56,   -56,   -56,
     -56,   -56,   156,   157,   158,   159,   160,    45,   183,   189,
     190,   191,   213,   216,   221,   222,   224,   225,   228,   230,
     233,   160,   235,   244,   236,   237,   238,   240,   250,   253,
     254,   258,   197,   249,   208,   133,   207,   259,     0,     0,
     239
};

static const yytype_int16 yycheck[] =
{
      19,    70,   137,    19,   125,   145,    41,    80,    43,    82,
       3,   104,   147,   106,    63,    64,     8,    32,    41,    80,
      81,    26,    10,    26,    18,    30,    49,    20,    10,    22,
      51,    24,    37,    41,    37,    50,   105,    67,   107,    54,
      41,    49,    50,    64,    65,    80,     0,    82,    49,   170,
      46,   172,    67,    49,    14,    43,    16,    72,    40,    47,
     109,    43,    12,    13,    41,    47,    58,    59,    60,    61,
      62,    63,   212,    46,    67,    68,    49,   126,    10,    62,
     141,   116,    32,   118,   119,    12,    13,   122,   123,   224,
      27,   184,   185,   186,   155,   156,   157,   158,   159,   160,
      50,   120,     6,     7,    54,    32,   125,    11,   124,   125,
     145,    43,    60,    10,    62,    47,    66,    67,    68,   154,
       5,   190,    72,    50,     6,    10,    11,    54,    67,    11,
     251,   252,    67,   206,   207,    38,   171,     8,    62,    66,
      67,    68,    69,    40,    19,    72,    43,    67,   183,    71,
      47,   170,    67,   172,   170,     9,   172,    10,    41,    12,
      13,    55,    56,    57,   233,    41,   235,   236,   237,    67,
      68,   206,   207,    64,    65,    28,    31,   212,    15,    32,
      33,    34,    35,    36,    41,   254,    39,    58,    59,    60,
      61,    62,    63,     5,   229,   230,    47,    50,    10,    11,
      67,    54,    10,    11,    58,    59,    60,    61,    62,    63,
      56,    57,    50,    66,    67,    68,    69,    26,    27,    72,
      41,    58,    59,    60,    61,    62,    63,    44,    54,    55,
      56,    57,   251,   252,    44,   251,   252,    20,    21,    22,
      71,    58,    59,    60,    61,    62,    63,    45,    58,    59,
      60,    61,    62,    63,    45,    50,    50,    11,    43,    41,
      58,    59,    60,    61,    62,    63,    46,    58,    59,    60,
      61,    62,    63,    48,    67,    67,    41,    41,    58,    59,
      60,    61,    62,    63,    58,    59,    60,    61,    62,    63,
      64,    65,    58,    59,    60,    61,    62,    63,    50,    65,
      51,    52,    53,    54,    55,    56,    57,    69,    70,    71,
      72,    73,    74,    58,    59,    60,    61,    62,    63,    52,
      53,    54,    55,    56,    57,    40,    58,    59,    60,    61,
      62,    63,    53,    54,    55,    56,    57,    68,     5,    17,
      62,    29,    51,    51,    51,    41,    48,    51,    21,    42,
       5,    57,    49,    25,    49,    49,    41,    41,    44,    41,
       4,    23,   146,   240,   163,    66,   162,   256,    -1,    -1,
     222
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
      50,    54,    66,    67,    68,    69,    72,    87,    88,    97,
      98,    99,   102,   103,   119,    41,    69,    70,    71,    72,
      73,    74,    91,    41,    46,    49,    46,    49,    31,    41,
      47,    32,    67,    97,    67,    97,    50,    10,    40,    43,
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
#line 1633 "parser.tab.c"
    break;

  case 3:
#line 154 "parser.y"
                                                         {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de cabecera_alg detectada.\n"); 
        #endif
    }
#line 1643 "parser.tab.c"
    break;

  case 4:
#line 162 "parser.y"
                            {
         #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de bloque_alg detectada.\n"); 
        #endif
    }
#line 1653 "parser.tab.c"
    break;

  case 5:
#line 170 "parser.y"
                                  {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_globales detectada 1.\n"); 
        #endif
    }
#line 1663 "parser.tab.c"
    break;

  case 6:
#line 175 "parser.y"
                                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_globales detectada 2.\n"); 
        #endif
    }
#line 1673 "parser.tab.c"
    break;

  case 7:
#line 180 "parser.y"
             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_globales detectada: VACIO 3.\n"); 
        #endif
    }
#line 1683 "parser.tab.c"
    break;

  case 8:
#line 188 "parser.y"
                     {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_a_f detectada 1.\n"); 
        #endif
    }
#line 1693 "parser.tab.c"
    break;

  case 9:
#line 193 "parser.y"
                        {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_a_f detectada 2.\n"); 
        #endif
    }
#line 1703 "parser.tab.c"
    break;

  case 10:
#line 198 "parser.y"
             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_a_f detectada: VACIO 3.\n"); 
        #endif
    }
#line 1713 "parser.tab.c"
    break;

  case 11:
#line 206 "parser.y"
                               {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de bloque detectada.\n"); 
        #endif
    }
#line 1723 "parser.tab.c"
    break;

  case 12:
#line 214 "parser.y"
                                  {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaraciones detectada 1.\n"); 
        #endif
    }
#line 1733 "parser.tab.c"
    break;

  case 13:
#line 219 "parser.y"
                                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaraciones detectada 2.\n"); 
        #endif
    }
#line 1743 "parser.tab.c"
    break;

  case 14:
#line 224 "parser.y"
                                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaraciones detectada 3.\n"); 
        #endif
    }
#line 1753 "parser.tab.c"
    break;

  case 15:
#line 229 "parser.y"
            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaraciones detectada: VACIO 4.\n"); 
        #endif
    }
#line 1763 "parser.tab.c"
    break;

  case 16:
#line 239 "parser.y"
                                                        {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaracion_tipo encontrada.\n"); 
        #endif
	}
#line 1773 "parser.tab.c"
    break;

  case 17:
#line 247 "parser.y"
                                                          {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaracion_cte encontrada.\n"); 
        #endif
	}
#line 1783 "parser.tab.c"
    break;

  case 18:
#line 255 "parser.y"
                                                      {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaracion_var encontrada.\n"); 
        #endif
	}
#line 1793 "parser.tab.c"
    break;

  case 19:
#line 263 "parser.y"
                                                               {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_d_tipo encontrada 1.\n"); 
        #endif
	}
#line 1803 "parser.tab.c"
    break;

  case 20:
#line 268 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_d_tipo encontrada: VACIO 2.\n"); 
        #endif
    }
#line 1813 "parser.tab.c"
    break;

  case 21:
#line 276 "parser.y"
                                              {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 1.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1824 "parser.tab.c"
    break;

  case 22:
#line 282 "parser.y"
                                                                                                        {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 2.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1835 "parser.tab.c"
    break;

  case 23:
#line 288 "parser.y"
                    {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 3.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1846 "parser.tab.c"
    break;

  case 24:
#line 294 "parser.y"
                {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 3.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1857 "parser.tab.c"
    break;

  case 25:
#line 300 "parser.y"
                                                 {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 4.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1868 "parser.tab.c"
    break;

  case 26:
#line 306 "parser.y"
                           {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 5.\n"); 
        #endif
        (yyval.ty_tipo) = T_DESC;
	}
#line 1879 "parser.tab.c"
    break;

  case 27:
#line 312 "parser.y"
                       {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada int 6.\n"); 
        #endif
        (yyval.ty_tipo) = T_ENTERO;
	}
#line 1890 "parser.tab.c"
    break;

  case 28:
#line 318 "parser.y"
                     {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada bool 7.\n"); 
        #endif
        (yyval.ty_tipo) = T_BOOL;
	}
#line 1901 "parser.tab.c"
    break;

  case 29:
#line 324 "parser.y"
                     {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada char 8.\n"); 
        #endif
        (yyval.ty_tipo) = T_CHAR;
	}
#line 1912 "parser.tab.c"
    break;

  case 30:
#line 330 "parser.y"
                     {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada real 9.\n"); 
        #endif
        (yyval.ty_tipo) = T_REAL;
	}
#line 1923 "parser.tab.c"
    break;

  case 31:
#line 336 "parser.y"
                       {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada cadena 10.\n"); 
        #endif
        (yyval.ty_tipo) = T_CADENA;
	}
#line 1934 "parser.tab.c"
    break;

  case 32:
#line 345 "parser.y"
                  {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura expreasion_t econtrada 1.\n"); 
        #endif
	}
#line 1944 "parser.tab.c"
    break;

  case 33:
#line 350 "parser.y"
                       {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura expreasion_t econtrada 2.\n"); 
        #endif
	}
#line 1954 "parser.tab.c"
    break;

  case 34:
#line 358 "parser.y"
                                                               {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_campos econtrada 1.\n"); 
        #endif
	}
#line 1964 "parser.tab.c"
    break;

  case 35:
#line 363 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_campos econtrada:VACIO 2.\n"); 
        #endif
    }
#line 1974 "parser.tab.c"
    break;

  case 36:
#line 371 "parser.y"
                                                               {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_d_cte econtrada 1.\n"); 
        #endif
	}
#line 1984 "parser.tab.c"
    break;

  case 37:
#line 376 "parser.y"
                 {
            #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_d_cte econtrada: VACIO 7.\n"); 
        #endif
    }
#line 1994 "parser.tab.c"
    break;

  case 38:
#line 384 "parser.y"
                {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_BOOL econtrada 1 -> %d.\n",(yyvsp[0].ty_boolean)); 
        #endif
	}
#line 2004 "parser.tab.c"
    break;

  case 39:
#line 389 "parser.y"
                      {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_CADE econtrada 2 -> %s.\n",(yyvsp[0].ty_string)); 
        #endif
	}
#line 2014 "parser.tab.c"
    break;

  case 40:
#line 394 "parser.y"
                       {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_CARAC econtrada 3 -> %c.\n",(yyvsp[0].ty_caracter)); 
        #endif
	}
#line 2024 "parser.tab.c"
    break;

  case 41:
#line 399 "parser.y"
                            {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_COMENTARIO econtrada 4.\n"); 
        #endif
	}
#line 2034 "parser.tab.c"
    break;

  case 42:
#line 404 "parser.y"
                        {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_ENTERO econtrada 5 -> %ld.\n",(yyvsp[0].ty_num_entero)); 
        #endif
	}
#line 2044 "parser.tab.c"
    break;

  case 43:
#line 409 "parser.y"
                      {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_REAL econtrada 6 -> %f.\n",(yyvsp[0].ty_num_real)); 
        #endif
	}
#line 2054 "parser.tab.c"
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
#line 2067 "parser.tab.c"
    break;

  case 45:
#line 427 "parser.y"
            { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_d_var detectada: VACIO 2.\n"); 
        #endif
    }
#line 2077 "parser.tab.c"
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
#line 2092 "parser.tab.c"
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
#line 2107 "parser.tab.c"
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
#line 2121 "parser.tab.c"
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
#line 2135 "parser.tab.c"
    break;

  case 50:
#line 476 "parser.y"
            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_ent_sal detectada 1.\n"); 
        #endif
    }
#line 2145 "parser.tab.c"
    break;

  case 51:
#line 481 "parser.y"
                        {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_ent_sal detectada 2.\n"); 
        #endif
    }
#line 2155 "parser.tab.c"
    break;

  case 52:
#line 486 "parser.y"
              {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_ent_sal detectada 3.\n"); 
        #endif
    }
#line 2165 "parser.tab.c"
    break;

  case 53:
#line 494 "parser.y"
                          {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_ent detectada.\n"); 
        #endif
        printf("%d\n",(yyvsp[0].ty_tipo));
        set_ioType(&miSimTab,(yyvsp[0].ty_tipo),DF_IN);
    }
#line 2177 "parser.tab.c"
    break;

  case 54:
#line 504 "parser.y"
                         {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_sal detectada.\n"); 
        #endif
        printf("%d\n",(yyvsp[0].ty_tipo));
        set_ioType(&miSimTab,(yyvsp[0].ty_tipo),DF_OUT);
    }
#line 2189 "parser.tab.c"
    break;

  case 55:
#line 514 "parser.y"
          {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de expresion detectada 1.\n"); 
        #endif
        (yyval.ty_st_exp).tipo = EXP_ARI;
        (yyval.ty_st_exp).ari.id = (yyvsp[0].ty_st_ari).id;
        (yyval.ty_st_exp).ari.tipo = (yyvsp[0].ty_st_ari).tipo;
    }
#line 2202 "parser.tab.c"
    break;

  case 56:
#line 522 "parser.y"
            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de expresion detectada 2.\n"); 
        #endif
        (yyval.ty_st_exp).tipo = EXP_BOOL;
        (yyval.ty_st_exp).bool.trues = (yyvsp[0].ty_st_bool).trues;
        (yyval.ty_st_exp).bool.falses = (yyvsp[0].ty_st_bool).falses;
    }
#line 2215 "parser.tab.c"
    break;

  case 57:
#line 530 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de expresion detectada 3.\n"); 
        #endif
    }
#line 2225 "parser.tab.c"
    break;

  case 58:
#line 538 "parser.y"
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
#line 2286 "parser.tab.c"
    break;

  case 59:
#line 594 "parser.y"
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
#line 2345 "parser.tab.c"
    break;

  case 60:
#line 648 "parser.y"
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
#line 2404 "parser.tab.c"
    break;

  case 61:
#line 702 "parser.y"
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
#line 2473 "parser.tab.c"
    break;

  case 62:
#line 766 "parser.y"
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
#line 2496 "parser.tab.c"
    break;

  case 63:
#line 784 "parser.y"
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
#line 2519 "parser.tab.c"
    break;

  case 64:
#line 802 "parser.y"
                                          {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 7.\n"); 
        #endif
        (yyval.ty_st_ari) = (yyvsp[-1].ty_st_ari);
    }
#line 2530 "parser.tab.c"
    break;

  case 65:
#line 808 "parser.y"
                  {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 8.\n"); 
        #endif
        (yyval.ty_st_ari) = (yyvsp[0].ty_st_ari);
    }
#line 2541 "parser.tab.c"
    break;

  case 66:
#line 814 "parser.y"
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
#line 2556 "parser.tab.c"
    break;

  case 67:
#line 824 "parser.y"
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
#line 2571 "parser.tab.c"
    break;

  case 68:
#line 834 "parser.y"
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
#line 2602 "parser.tab.c"
    break;

  case 69:
#line 863 "parser.y"
                             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 1.\n"); 
        #endif
        backpatch(&miQuadTab,(yyvsp[-3].ty_st_bool).trues,(yyvsp[-1].ty_tipo));
        (yyval.ty_st_bool).trues = merge((yyvsp[-3].ty_st_bool).falses,(yyvsp[0].ty_st_bool).falses);
        (yyval.ty_st_bool).falses = (yyvsp[0].ty_st_bool).falses;
    }
#line 2615 "parser.tab.c"
    break;

  case 70:
#line 871 "parser.y"
                               {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 2.\n"); 
        #endif
        backpatch(&miQuadTab,(yyvsp[-3].ty_st_bool).trues,(yyvsp[-1].ty_tipo));
        (yyval.ty_st_bool).trues = merge((yyvsp[-3].ty_st_bool).falses,(yyvsp[0].ty_st_bool).falses);
        (yyval.ty_st_bool).falses = (yyvsp[0].ty_st_bool).falses;
    }
#line 2628 "parser.tab.c"
    break;

  case 71:
#line 879 "parser.y"
                    {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 3.\n"); 
        #endif
        (yyval.ty_st_bool).trues = (yyvsp[0].ty_st_bool).falses;
        (yyval.ty_st_bool).falses = (yyvsp[0].ty_st_bool).trues;
    }
#line 2640 "parser.tab.c"
    break;

  case 72:
#line 886 "parser.y"
                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 4.\n"); 
        #endif
        (yyval.ty_st_bool) = (yyvsp[0].ty_st_bool);
    }
#line 2651 "parser.tab.c"
    break;

  case 73:
#line 892 "parser.y"
                      {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 5.\n"); 
        #endif
    }
#line 2661 "parser.tab.c"
    break;

  case 74:
#line 897 "parser.y"
                 { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 6.\n"); 
        #endif
    }
#line 2671 "parser.tab.c"
    break;

  case 75:
#line 902 "parser.y"
                                { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 7.\n"); 
        #endif
        (yyval.ty_st_bool).trues = makelist(miQuadTab.nextQua);
        (yyval.ty_st_bool).falses = makelist(miQuadTab.nextQua);

        gen(&miQuadTab,(yyvsp[-1].ty_tipo),(yyvsp[-2].ty_st_exp).ari.id,(yyvsp[0].ty_st_exp).ari.id,OPERNDO_NULL);
        gen(&miQuadTab,OP_GOTO,OPERNDO_NULL,OPERNDO_NULL,OPERNDO_NULL);
    }
#line 2686 "parser.tab.c"
    break;

  case 76:
#line 912 "parser.y"
                                          { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 8.\n"); 
        #endif
    }
#line 2696 "parser.tab.c"
    break;

  case 77:
#line 920 "parser.y"
                { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 1.\n"); 
        #endif
        (yyval.ty_tipo) = OP_MAYOR;
    }
#line 2707 "parser.tab.c"
    break;

  case 78:
#line 926 "parser.y"
                  { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 2.\n"); 
        #endif
        (yyval.ty_tipo) = OP_MENOR;
    }
#line 2718 "parser.tab.c"
    break;

  case 79:
#line 932 "parser.y"
                   { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 3.\n"); 
        #endif
        (yyval.ty_tipo) = OP_MAYOR_IGUAL;
    }
#line 2729 "parser.tab.c"
    break;

  case 80:
#line 938 "parser.y"
                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 4.\n"); 
        #endif
        (yyval.ty_tipo) = OP_MENOR_IGUAL;
    }
#line 2740 "parser.tab.c"
    break;

  case 81:
#line 944 "parser.y"
                 { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 5.\n"); 
        #endif
        (yyval.ty_tipo) = OP_DISTINTO;
    }
#line 2751 "parser.tab.c"
    break;

  case 82:
#line 950 "parser.y"
                 { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 6.\n"); 
        #endif
        (yyval.ty_tipo) = OP_IGUAL;
    }
#line 2762 "parser.tab.c"
    break;

  case 83:
#line 959 "parser.y"
          {
        (yyval.ty_tipo) = miQuadTab.nextQua;
    }
#line 2770 "parser.tab.c"
    break;

  case 84:
#line 965 "parser.y"
              {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando detectada 1.\n"); 
        #endif
        nodeTab *nodo = find_tsym(&miSimTab,(yyvsp[0].ty_string));
        (yyval.ty_st_ari).id = nodo->id;
        (yyval.ty_st_ari).tipo = nodo->type;
    }
#line 2783 "parser.tab.c"
    break;

  case 85:
#line 973 "parser.y"
                                            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando detectada 2.\n"); 
        #endif
    }
#line 2793 "parser.tab.c"
    break;

  case 86:
#line 978 "parser.y"
                                                         {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando detectada 3.\n"); 
        #endif
    }
#line 2803 "parser.tab.c"
    break;

  case 87:
#line 983 "parser.y"
                            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando detectada 4.\n"); 
        #endif
    }
#line 2813 "parser.tab.c"
    break;

  case 88:
#line 991 "parser.y"
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
#line 2829 "parser.tab.c"
    break;

  case 89:
#line 1002 "parser.y"
                                              {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando detectada 2.\n"); 
        #endif
    }
#line 2839 "parser.tab.c"
    break;

  case 90:
#line 1007 "parser.y"
                                                          {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando detectada 3.\n"); 
        #endif
    }
#line 2849 "parser.tab.c"
    break;

  case 91:
#line 1012 "parser.y"
                             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando detectada 4.\n"); 
        #endif
    }
#line 2859 "parser.tab.c"
    break;

  case 92:
#line 1020 "parser.y"
                                          {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instrucciones detectada 1.\n"); 
        #endif
    }
#line 2869 "parser.tab.c"
    break;

  case 93:
#line 1025 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instrucciones detectada 2.\n"); 
        #endif
    }
#line 2879 "parser.tab.c"
    break;

  case 94:
#line 1033 "parser.y"
                   {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 1.\n"); 
        #endif
    }
#line 2889 "parser.tab.c"
    break;

  case 95:
#line 1038 "parser.y"
                {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 2.\n"); 
        #endif
    }
#line 2899 "parser.tab.c"
    break;

  case 96:
#line 1043 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 3.\n"); 
        #endif
    }
#line 2909 "parser.tab.c"
    break;

  case 97:
#line 1048 "parser.y"
               {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 4.\n"); 
        #endif
    }
#line 2919 "parser.tab.c"
    break;

  case 98:
#line 1053 "parser.y"
               {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 5.\n"); 
        #endif
    }
#line 2929 "parser.tab.c"
    break;

  case 99:
#line 1061 "parser.y"
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
#line 2945 "parser.tab.c"
    break;

  case 100:
#line 1072 "parser.y"
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
#line 2961 "parser.tab.c"
    break;

  case 101:
#line 1086 "parser.y"
                                                                            {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de alternativa detectada.\n"); 
        #endif
    }
#line 2971 "parser.tab.c"
    break;

  case 102:
#line 1094 "parser.y"
                                                                     {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_opciones detectada 1.\n"); 
        #endif
    }
#line 2981 "parser.tab.c"
    break;

  case 103:
#line 1099 "parser.y"
             {
       #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_opciones detectada: VACIO 2.\n"); 
        #endif
    }
#line 2991 "parser.tab.c"
    break;

  case 104:
#line 1107 "parser.y"
                {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de iteracion detectada 1.\n"); 
        #endif
    }
#line 3001 "parser.tab.c"
    break;

  case 105:
#line 1112 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de iteracion detectada 2.\n"); 
        #endif
    }
#line 3011 "parser.tab.c"
    break;

  case 106:
#line 1120 "parser.y"
                                                                    {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de it_cota_exp detectada.\n"); 
        #endif
    }
#line 3021 "parser.tab.c"
    break;

  case 107:
#line 1128 "parser.y"
                                                                                                         {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de it_cota_fija detectada.\n"); 
        #endif
    }
#line 3031 "parser.tab.c"
    break;

  case 108:
#line 1137 "parser.y"
                                                    {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura accion_d econtrada.\n"); 
        #endif
	}
#line 3041 "parser.tab.c"
    break;

  case 109:
#line 1145 "parser.y"
                                                                           {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura funcion_d econtrada.\n"); 
        #endif
	}
#line 3051 "parser.tab.c"
    break;

  case 110:
#line 1153 "parser.y"
                                                                         {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura funcion_d econtrada .\n"); 
        #endif
	}
#line 3061 "parser.tab.c"
    break;

  case 111:
#line 1161 "parser.y"
                                                                                           {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura f_cabecera econtrada.\n"); 
        #endif
	}
#line 3071 "parser.tab.c"
    break;

  case 112:
#line 1169 "parser.y"
                                         {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_par_form econtrada 1.\n"); 
        #endif
	}
#line 3081 "parser.tab.c"
    break;

  case 113:
#line 1174 "parser.y"
                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_par_form econtrada:VACIO 2.\n"); 
        #endif
    }
#line 3091 "parser.tab.c"
    break;

  case 114:
#line 1182 "parser.y"
                                               {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_p_form econtrada 1.\n"); 
        #endif
	}
#line 3101 "parser.tab.c"
    break;

  case 115:
#line 1187 "parser.y"
                                                 {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_p_form econtrada 2.\n"); 
        #endif 
	}
#line 3111 "parser.tab.c"
    break;

  case 116:
#line 1192 "parser.y"
                                                   {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_p_form econtrada 3.\n"); 
        #endif 
	}
#line 3121 "parser.tab.c"
    break;

  case 117:
#line 1200 "parser.y"
                                                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de accion_ll detectada.\n"); 
        #endif
    }
#line 3131 "parser.tab.c"
    break;

  case 118:
#line 1208 "parser.y"
                                                 {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de funcion_ll detectada.\n"); 
        #endif
    }
#line 3141 "parser.tab.c"
    break;

  case 119:
#line 1216 "parser.y"
                             {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de ll_ll detectada 1.\n"); 
        #endif
    }
#line 3151 "parser.tab.c"
    break;

  case 120:
#line 1221 "parser.y"
               {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de ll_ll detectada 2.\n"); 
        #endif
    }
#line 3161 "parser.tab.c"
    break;


#line 3165 "parser.tab.c"

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
#line 1228 "parser.y"


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
	return 0;
}
