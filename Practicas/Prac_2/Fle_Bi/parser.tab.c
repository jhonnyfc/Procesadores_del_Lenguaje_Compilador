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
	#include <math.h>
    extern FILE *yyin;
	int yylex (void);
	void yyerror (char const *);

#line 78 "parser.tab.c"

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
    TK_ID_OTHER = 322,
    TK_ID_ARI = 323,
    TK_ID_BOL = 324,
    TK_LIT_ENTERO = 325,
    TK_LIT_REAL = 326,
    TK_LIT_BOOL = 327,
    TK_LIT_CARAC = 328,
    TK_LIT_CADE = 329,
    TK_LIT_COMENTARIO = 330
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 99 "parser.y"

    double          num_real;
    long int        num_entero;
    char            *string;
    char            caracter;
    int             boolean;

#line 214 "parser.tab.c"

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
#define YYLAST   405

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  271

#define YYUNDEFTOK  2
#define YYMAXUTOK   330


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
      75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   110,   110,   116,   121,   126,   129,   132,   137,   140,
     143,   148,   153,   156,   159,   162,   170,   176,   182,   188,
     191,   197,   200,   203,   206,   209,   212,   215,   218,   221,
     224,   230,   233,   239,   242,   248,   251,   254,   257,   260,
     263,   266,   273,   276,   281,   284,   287,   290,   293,   296,
     301,   304,   307,   312,   317,   322,   325,   328,   333,   336,
     339,   342,   345,   348,   351,   354,   357,   360,   363,   368,
     371,   374,   377,   380,   383,   386,   389,   392,   395,   398,
     401,   404,   409,   412,   415,   418,   423,   426,   429,   432,
     437,   440,   445,   448,   451,   454,   457,   462,   465,   470,
     475,   478,   483,   486,   491,   496,   503,   509,   515,   521,
     527,   530,   536,   539,   542,   548,   553,   558,   561
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
  "TK_ID_OTHER", "TK_ID_ARI", "TK_ID_BOL", "TK_LIT_ENTERO", "TK_LIT_REAL",
  "TK_LIT_BOOL", "TK_LIT_CARAC", "TK_LIT_CADE", "TK_LIT_COMENTARIO",
  "$accept", "desc_algoritmo", "cabecera_alg", "bloque_alg",
  "decl_globales", "decl_a_f", "bloque", "declaraciones",
  "declaracion_tipo", "declaracion_cte", "declaracion_var", "lista_d_tipo",
  "d_tipo", "expresion_t", "lista_campos", "lista_d_cte", "lista_d_var",
  "lista_id", "decl_ent_sal", "decl_ent", "decl_sal", "expresion", "exp_a",
  "exp_b", "operando_ari", "operando_bool", "instrucciones", "instruccion",
  "asignacion", "alternativa", "lista_opciones", "iteracion",
  "it_cota_exp", "it_cota_fija", "accion_d", "funcion_d", "a_cabecera",
  "f_cabecera", "d_par_form", "d_p_form", "accion_ll", "funcion_ll",
  "l_ll", YY_NULLPTR
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
     325,   326,   327,   328,   329,   330
};
# endif

#define YYPACT_NINF (-138)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   -52,    56,    -1,  -138,    -3,    23,    29,   113,   110,
      -3,    -3,    87,   106,    89,   121,    -2,   134,    81,    30,
     113,   113,   113,    94,   105,    71,   110,   110,  -138,  -138,
     132,   133,   248,   156,   142,   166,   168,   200,   196,   185,
    -138,  -138,   183,   181,   183,   205,  -138,  -138,    36,    76,
    -138,   242,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,   234,   113,   235,   113,    -2,    -2,   211,   276,  -138,
    -138,  -138,   132,  -138,  -138,   244,   268,  -138,  -138,  -138,
    -138,   267,   183,   -15,   183,   286,  -138,  -138,   319,   313,
     266,   278,   -40,    91,   115,  -138,  -138,   321,   322,   323,
     324,   325,   326,  -138,    -2,    -2,    -2,   327,   132,  -138,
    -138,   286,    11,   329,   -31,   183,  -138,   183,   183,   303,
    -138,   183,   183,   301,    30,    -2,   367,    15,   356,  -138,
    -138,  -138,  -138,  -138,   312,   346,   157,   266,   165,    24,
     -15,   128,   243,   183,    23,   157,   183,   183,   183,   183,
     183,   183,   -15,   -15,   -15,   -15,   -15,   -15,   183,   183,
      29,    29,    29,    29,    29,    29,  -138,  -138,  -138,  -138,
     335,    30,   183,    30,   254,   328,   266,   210,    91,   266,
     230,   115,  -138,   330,   183,    -2,    -2,    -2,   331,   336,
    -138,   132,  -138,   332,  -138,  -138,   165,   333,  -138,  -138,
     279,   179,   118,   147,    40,   315,   302,   136,   128,    61,
     334,  -138,   217,   285,  -138,  -138,  -138,  -138,  -138,  -138,
      -2,   362,   204,   343,   183,  -138,  -138,  -138,   381,     1,
     338,   339,   340,   349,    15,   351,   157,  -138,  -138,  -138,
     183,   183,   368,  -138,   132,  -138,   132,   132,   132,  -138,
    -138,   244,   350,   198,   236,  -138,   354,  -138,  -138,  -138,
    -138,   392,    30,    30,  -138,   132,   374,   343,  -138,  -138,
    -138
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    41,    15,    10,
       7,     7,     0,     0,     0,     0,    43,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    45,    47,    49,     0,     0,     0,
       4,    92,     0,     0,     0,     0,    82,    86,     0,     0,
      11,    91,    93,    94,    95,   103,   102,    96,    12,    13,
      14,     0,    15,     0,    15,    43,    43,     0,    50,    52,
       8,     9,     0,    73,    74,    34,    67,    26,    27,    30,
      28,     0,     0,     0,     0,    23,    66,    32,     0,     0,
      31,    55,    56,    65,    72,    57,    16,     0,     0,     0,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     2,
      67,     0,     0,     0,     0,     0,    85,     0,     0,     0,
      89,     0,     0,     0,     0,    43,     0,   111,     0,    53,
      54,     3,    51,    25,     0,     0,     0,     0,    55,    56,
       0,    68,    71,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      41,    41,    41,    41,    41,    41,    44,    46,    48,    18,
       0,     0,     0,     0,   118,     0,    97,     0,    83,    98,
       0,    87,    90,     0,     0,     0,     0,     0,     0,     0,
     106,     0,    21,     0,    64,    81,     0,     0,    19,    24,
      75,    76,    77,    78,    79,    80,    58,    60,    59,    61,
      63,    62,    70,    69,    39,    40,    35,    37,    36,    38,
      43,     0,     0,   101,     0,   115,    84,    88,     0,     0,
       0,     0,     0,     0,   111,     0,     0,   116,    42,   104,
       0,     0,     0,   117,     0,   107,     0,     0,     0,   108,
     110,    34,     0,     0,     0,    99,     0,   114,   113,   112,
      33,     0,     0,     0,   109,     0,     0,   101,    22,   105,
     100
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,  -138,  -138,  -138,   126,   202,    84,   214,    31,    33,
    -138,   255,   -71,  -132,   149,   189,   -57,   -94,  -138,  -138,
     337,   -37,   -25,   -64,   -19,   -16,  -122,  -138,  -138,  -138,
     131,  -138,  -138,  -138,  -138,  -138,  -138,  -138,   167,  -138,
    -138,  -138,  -137
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    88,    89,   135,    15,    37,    38,    67,    68,
      69,    90,    91,    92,    93,    94,    50,    51,    52,    53,
     242,    54,    55,    56,    26,    27,    64,    62,   188,   189,
      57,    95,   175
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,   133,   182,    49,   193,   112,   197,   114,   129,   130,
     166,   167,   168,   199,   173,     3,   245,   110,   139,   171,
     142,     1,   185,     6,   158,   159,   186,   146,   147,   148,
     149,   150,   151,    41,     7,   140,    10,   170,    11,    83,
       5,    10,    10,    11,    11,   137,   116,   137,   187,   221,
      42,   223,    43,    46,    44,    86,     4,   138,   141,   146,
     147,   148,   149,   150,   151,    34,    35,    36,   183,   146,
     147,   148,   149,   150,   151,   195,   117,    65,   174,   118,
     176,   177,    66,   119,   179,   180,   120,   243,   158,   159,
      12,   230,   231,   232,   212,   213,    14,    45,    46,    47,
     178,   116,   -57,   151,   252,    48,   174,   181,    49,   200,
     201,   202,   203,   204,   205,   196,   121,   156,   157,   122,
     235,   137,   137,   123,    23,   120,    24,   206,   207,   208,
     209,   210,   211,    31,   118,   222,    28,    29,   119,     6,
     266,   267,    72,    16,    73,    74,   126,   229,   128,    30,
       7,    32,    48,    39,    48,    49,    40,    49,   122,    33,
      75,    61,   123,   238,    76,    77,    78,    79,    80,    73,
      74,    81,    63,   256,    96,   257,   258,   259,   -57,   149,
     150,   151,    82,   155,   156,   157,    83,   174,   104,   110,
     154,   155,   156,   157,   268,    73,    74,   103,    84,    85,
      46,    47,    86,   253,   254,    87,   262,    82,   -57,   150,
     151,    83,   105,   240,   106,   110,   194,   152,   153,   154,
     155,   156,   157,    84,   111,    46,    47,    86,    70,    71,
      87,   107,   109,    82,    58,    59,    60,    83,   -57,   148,
     149,   150,   151,    48,    48,   108,    49,    49,   113,    84,
     111,    46,    47,    86,   226,   115,   146,   147,   148,   149,
     150,   151,   146,   147,   148,   149,   150,   151,   146,   147,
     148,   149,   150,   151,   227,   -56,   -56,   -56,   -56,   -56,
     -56,   263,   159,   124,   125,   127,   131,    66,   146,   147,
     148,   149,   150,   151,   146,   147,   148,   149,   150,   151,
     224,   -56,   -56,   -56,   -56,   -56,   -56,   158,   159,   -29,
     136,   134,   146,   147,   148,   149,   150,   151,    97,    98,
      99,   100,   101,   102,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   143,   -57,   147,   148,
     149,   150,   151,   -56,   -56,   -56,   -56,   -56,   -56,   214,
     215,   216,   217,   218,   219,   153,   154,   155,   156,   157,
     144,   145,   160,   161,   162,   163,   164,   165,   169,   172,
      47,    46,   184,   190,   191,   192,   220,   234,   -57,   225,
     236,   228,   233,   239,   237,   241,   244,   246,   247,   248,
     249,   157,   251,   255,   261,   264,   265,   269,   270,   198,
     260,   250,     0,     0,     0,   132
};

static const yytype_int16 yycheck[] =
{
      19,    72,   124,    19,   136,    42,   143,    44,    65,    66,
     104,   105,   106,   145,    45,    67,    15,    32,    82,     8,
      84,    18,     7,    26,    64,    65,    11,    58,    59,    60,
      61,    62,    63,     3,    37,    50,     5,   108,     5,    54,
      41,    10,    11,    10,    11,    82,    10,    84,    33,   171,
      20,   173,    22,    68,    24,    70,     0,    82,    83,    58,
      59,    60,    61,    62,    63,    67,    68,    69,   125,    58,
      59,    60,    61,    62,    63,    51,    40,     6,   115,    43,
     117,   118,    11,    47,   121,   122,    10,   224,    64,    65,
      67,   185,   186,   187,   158,   159,    67,    67,    68,    69,
     119,    10,    62,    63,   236,   124,   143,   123,   124,   146,
     147,   148,   149,   150,   151,   140,    40,    56,    57,    43,
     191,   158,   159,    47,    14,    10,    16,   152,   153,   154,
     155,   156,   157,    27,    43,   172,    10,    11,    47,    26,
     262,   263,    10,    30,    12,    13,    62,   184,    64,    62,
      37,    62,   171,    19,   173,   171,    75,   173,    43,    38,
      28,    67,    47,   220,    32,    33,    34,    35,    36,    12,
      13,    39,    67,   244,    41,   246,   247,   248,    60,    61,
      62,    63,    50,    55,    56,    57,    54,   224,    46,    32,
      54,    55,    56,    57,   265,    12,    13,    41,    66,    67,
      68,    69,    70,   240,   241,    73,     8,    50,    61,    62,
      63,    54,    46,     9,    46,    32,    51,    52,    53,    54,
      55,    56,    57,    66,    67,    68,    69,    70,    26,    27,
      73,    31,    47,    50,    20,    21,    22,    54,    59,    60,
      61,    62,    63,   262,   263,    49,   262,   263,    67,    66,
      67,    68,    69,    70,    44,    50,    58,    59,    60,    61,
      62,    63,    58,    59,    60,    61,    62,    63,    58,    59,
      60,    61,    62,    63,    44,    58,    59,    60,    61,    62,
      63,    45,    65,    41,    50,    50,    75,    11,    58,    59,
      60,    61,    62,    63,    58,    59,    60,    61,    62,    63,
      46,    58,    59,    60,    61,    62,    63,    64,    65,    41,
      43,    67,    58,    59,    60,    61,    62,    63,    70,    71,
      72,    73,    74,    75,    58,    59,    60,    61,    62,    63,
      52,    53,    54,    55,    56,    57,    50,    58,    59,    60,
      61,    62,    63,    58,    59,    60,    61,    62,    63,   160,
     161,   162,   163,   164,   165,    53,    54,    55,    56,    57,
      41,    48,    41,    41,    41,    41,    41,    41,    41,    40,
      69,    68,     5,    17,    62,    29,    41,    41,    63,    51,
      48,    51,    51,    21,    51,    42,     5,    49,    49,    49,
      41,    57,    41,    25,    44,    41,     4,    23,   267,   144,
     251,   234,    -1,    -1,    -1,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    77,    67,     0,    41,    26,    37,    78,    80,
      84,    85,    67,    87,    67,    91,    30,    79,    82,    83,
      84,    85,    86,    14,    16,    81,   110,   111,    80,    80,
      62,    27,    62,    38,    67,    68,    69,    92,    93,    19,
      75,     3,    20,    22,    24,    67,    68,    69,   100,   101,
     102,   103,   104,   105,   107,   108,   109,   116,    83,    83,
      83,    67,   113,    67,   112,     6,    11,    94,    95,    96,
      81,    81,    10,    12,    13,    28,    32,    33,    34,    35,
      36,    39,    50,    54,    66,    67,    70,    73,    88,    89,
      97,    98,    99,   100,   101,   117,    41,    70,    71,    72,
      73,    74,    75,    41,    46,    46,    46,    31,    49,    47,
      32,    67,    97,    67,    97,    50,    10,    40,    43,    47,
      10,    40,    43,    47,    41,    50,    82,    50,    82,    92,
      92,    75,    96,    88,    67,    90,    43,    97,    98,    99,
      50,    98,    99,    50,    41,    48,    58,    59,    60,    61,
      62,    63,    52,    53,    54,    55,    56,    57,    64,    65,
      41,    41,    41,    41,    41,    41,    93,    93,    93,    41,
      88,     8,    40,    45,    97,   118,    97,    97,   100,    97,
      97,   101,   102,    92,     5,     7,    11,    33,   114,   115,
      17,    62,    29,    89,    51,    51,    98,   118,    87,    89,
      97,    97,    97,    97,    97,    97,    98,    98,    98,    98,
      98,    98,    99,    99,    91,    91,    91,    91,    91,    91,
      41,   102,    97,   102,    46,    51,    44,    44,    51,    97,
      93,    93,    93,    51,    41,    88,    48,    51,    92,    21,
       9,    42,   106,   118,     5,    15,    49,    49,    49,    41,
     114,    41,    89,    97,    97,    25,    88,    88,    88,    88,
      90,    44,     8,    45,    41,     4,   102,   102,    88,    23,
     106
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    76,    77,    78,    79,    80,    80,    80,    81,    81,
      81,    82,    83,    83,    83,    83,    84,    85,    86,    87,
      87,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    89,    89,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    92,    92,    93,    93,    93,    93,    93,    93,
      94,    94,    94,    95,    96,    97,    97,    97,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,   100,   100,   100,   100,   101,   101,   101,   101,
     102,   102,   103,   103,   103,   103,   103,   104,   104,   105,
     106,   106,   107,   107,   108,   109,   110,   111,   112,   113,
     114,   114,   115,   115,   115,   116,   117,   118,   118
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     5,     0,     5,     5,     5,     5,     5,
       5,     0,     5,     0,     3,     1,     3,     1,     3,     1,
       1,     2,     1,     2,     2,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     2,     3,
       3,     2,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     4,     2,     1,     3,     4,     2,
       3,     1,     1,     1,     1,     1,     1,     3,     3,     6,
       5,     0,     1,     1,     5,     9,     4,     6,     5,     7,
       3,     0,     4,     4,     4,     4,     4,     3,     1
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
#line 110 "parser.y"
                                                                                                 {
		printf("#_ Parser: Estructura de algoritmo detectada.\n");
	}
#line 1620 "parser.tab.c"
    break;

  case 3:
#line 116 "parser.y"
                                                         {
        printf("#_ Parser: Estructura de cabecera_alg detectada.\n");
    }
#line 1628 "parser.tab.c"
    break;

  case 4:
#line 121 "parser.y"
                            {
         printf("#_ Parser: Estructura de bloque_alg detectada.\n");
    }
#line 1636 "parser.tab.c"
    break;

  case 5:
#line 126 "parser.y"
                                  {
        printf("#_ Parser: Estructura de decl_globales detectada 1.\n");
    }
#line 1644 "parser.tab.c"
    break;

  case 6:
#line 129 "parser.y"
                                   {
        printf("#_ Parser: Estructura de decl_globales detectada 2.\n");
    }
#line 1652 "parser.tab.c"
    break;

  case 7:
#line 132 "parser.y"
             {
        printf("#_ Parser: Estructura de decl_globales detectada: VACIO 3.\n");
    }
#line 1660 "parser.tab.c"
    break;

  case 8:
#line 137 "parser.y"
                     {
        printf("#_ Parser: Estructura de decl_a_f detectada 1.\n");
    }
#line 1668 "parser.tab.c"
    break;

  case 9:
#line 140 "parser.y"
                        {
        printf("#_ Parser: Estructura de decl_a_f detectada 2.\n");
    }
#line 1676 "parser.tab.c"
    break;

  case 10:
#line 143 "parser.y"
             {
        printf("#_ Parser: Estructura de decl_a_f detectada: VACIO 3.\n");
    }
#line 1684 "parser.tab.c"
    break;

  case 11:
#line 148 "parser.y"
                               {
        printf("#_ Parser: Estructura de bloque detectada.\n");
    }
#line 1692 "parser.tab.c"
    break;

  case 12:
#line 153 "parser.y"
                                  {
        printf("#_ Parser: Estructura de declaraciones detectada 1.\n");
    }
#line 1700 "parser.tab.c"
    break;

  case 13:
#line 156 "parser.y"
                                   {
        printf("#_ Parser: Estructura de declaraciones detectada 2.\n");
    }
#line 1708 "parser.tab.c"
    break;

  case 14:
#line 159 "parser.y"
                                   {
        printf("#_ Parser: Estructura de declaraciones detectada 3.\n");
    }
#line 1716 "parser.tab.c"
    break;

  case 15:
#line 162 "parser.y"
            {
        printf("#_ Parser: Estructura de declaraciones detectada: VACIO 4.\n");
    }
#line 1724 "parser.tab.c"
    break;

  case 16:
#line 170 "parser.y"
                                                        {
		printf("#_ Parser: Estructura de declaracion_tipo encontrada.\n");
	}
#line 1732 "parser.tab.c"
    break;

  case 17:
#line 176 "parser.y"
                                                         {
		printf("#_ Parser: Estructura de declaracion_cte encontrada.\n");
	}
#line 1740 "parser.tab.c"
    break;

  case 18:
#line 182 "parser.y"
                                                     {
		printf("#_ Parser: Estructura de declaracion_var encontrada.\n");
	}
#line 1748 "parser.tab.c"
    break;

  case 19:
#line 188 "parser.y"
                                                                 {
		printf("#_ Parser: Estructura lista_d_tipo encontrada 1.\n");
	}
#line 1756 "parser.tab.c"
    break;

  case 20:
#line 191 "parser.y"
                 {
        printf("#_ Parser: Estructura lista_d_tipo encontrada: VACIO 2.\n");
    }
#line 1764 "parser.tab.c"
    break;

  case 21:
#line 197 "parser.y"
                                              {
		printf("#_ Parser: Estructura d_tipo encontrada 1.\n");
	}
#line 1772 "parser.tab.c"
    break;

  case 22:
#line 200 "parser.y"
                                                                                                        {
		printf("#_ Parser: Estructura d_tipo encontrada 2.\n");
	}
#line 1780 "parser.tab.c"
    break;

  case 23:
#line 203 "parser.y"
                      {
		printf("#_ Parser: Estructura d_tipo encontrada 3.\n");
	}
#line 1788 "parser.tab.c"
    break;

  case 24:
#line 206 "parser.y"
                                                 {
		printf("#_ Parser: Estructura d_tipo encontrada 4.\n");
	}
#line 1796 "parser.tab.c"
    break;

  case 25:
#line 209 "parser.y"
                           {
		printf("#_ Parser: Estructura d_tipo encontrada 5.\n");
	}
#line 1804 "parser.tab.c"
    break;

  case 26:
#line 212 "parser.y"
                       {
		printf("#_ Parser: Estructura d_tipo econtrada int 6.\n");
	}
#line 1812 "parser.tab.c"
    break;

  case 27:
#line 215 "parser.y"
                     {
		printf("#_ Parser: Estructura d_tipo econtrada bool 7.\n");
	}
#line 1820 "parser.tab.c"
    break;

  case 28:
#line 218 "parser.y"
                     {
		printf("#_ Parser: Estructura d_tipo econtrada char 8.\n");
	}
#line 1828 "parser.tab.c"
    break;

  case 29:
#line 221 "parser.y"
                     {
		printf("#_ Parser: Estructura d_tipo econtrada real 9.\n");
	}
#line 1836 "parser.tab.c"
    break;

  case 30:
#line 224 "parser.y"
                       {
		printf("#_ Parser: Estructura d_tipo econtrada cadena 10.\n");
	}
#line 1844 "parser.tab.c"
    break;

  case 31:
#line 230 "parser.y"
                  {
		printf("#_ Parser: Estructura expreasion_t econtrada 1.\n");
	}
#line 1852 "parser.tab.c"
    break;

  case 32:
#line 233 "parser.y"
                       {
		printf("#_ Parser: Estructura expreasion_t econtrada 2.\n");
	}
#line 1860 "parser.tab.c"
    break;

  case 33:
#line 239 "parser.y"
                                                                 {
		printf("#_ Parser: Estructura lista_campos econtrada 1.\n");
	}
#line 1868 "parser.tab.c"
    break;

  case 34:
#line 242 "parser.y"
                 {
        printf("#_ Parser: Estructura lista_campos econtrada:VACIO 2.\n");
    }
#line 1876 "parser.tab.c"
    break;

  case 35:
#line 248 "parser.y"
                                                                     {
		printf("#_ Parser: Estructura lista_d_cte econtrada 1.\n");
	}
#line 1884 "parser.tab.c"
    break;

  case 36:
#line 251 "parser.y"
                                                                       {
		printf("#_ Parser: Estructura lista_d_cte econtrada 2.\n");
	}
#line 1892 "parser.tab.c"
    break;

  case 37:
#line 254 "parser.y"
                                                                        {
		printf("#_ Parser: Estructura lista_d_cte econtrada 3.\n");
	}
#line 1900 "parser.tab.c"
    break;

  case 38:
#line 257 "parser.y"
                                                                             {
		printf("#_ Parser: Estructura lista_d_cte econtrada 4.\n");
	}
#line 1908 "parser.tab.c"
    break;

  case 39:
#line 260 "parser.y"
                                                                         {
		printf("#_ Parser: Estructura lista_d_cte econtrada 5.\n");
	}
#line 1916 "parser.tab.c"
    break;

  case 40:
#line 263 "parser.y"
                                                                       {
		printf("#_ Parser: Estructura lista_d_cte econtrada 6.\n");
	}
#line 1924 "parser.tab.c"
    break;

  case 41:
#line 266 "parser.y"
                 {
            printf("#_ Parser: Estructura lista_d_cte econtrada: VACIO 7.\n");
    }
#line 1932 "parser.tab.c"
    break;

  case 42:
#line 273 "parser.y"
                                                         {
        printf("#_ Parser: Estructura de lista_d_var detectada 1.\n");
    }
#line 1940 "parser.tab.c"
    break;

  case 43:
#line 276 "parser.y"
            { 
        printf("#_ Parser: Estructura de lista_d_var detectada: VACIO 2.\n");
    }
#line 1948 "parser.tab.c"
    break;

  case 44:
#line 281 "parser.y"
                                   {
        printf("#_ Parser: Estructura de lista_id detectada 1.\n");
    }
#line 1956 "parser.tab.c"
    break;

  case 45:
#line 284 "parser.y"
                 {
        printf("#_ Parser: Estructura de lista_id detectada 2.\n");
    }
#line 1964 "parser.tab.c"
    break;

  case 46:
#line 287 "parser.y"
                                   {
        printf("#_ Parser: Estructura de lista_id detectada 3.\n");
    }
#line 1972 "parser.tab.c"
    break;

  case 47:
#line 290 "parser.y"
                {
        printf("#_ Parser: Estructura de lista_id detectada 4.\n");
    }
#line 1980 "parser.tab.c"
    break;

  case 48:
#line 293 "parser.y"
                                   {
        printf("#_ Parser: Estructura de lista_id detectada 5.\n");
    }
#line 1988 "parser.tab.c"
    break;

  case 49:
#line 296 "parser.y"
                {
        printf("#_ Parser: Estructura de lista_id detectada 6.\n");
    }
#line 1996 "parser.tab.c"
    break;

  case 50:
#line 301 "parser.y"
            {
        printf("#_ Parser: Estructura de decl_ent_sal detectada 1.\n");
    }
#line 2004 "parser.tab.c"
    break;

  case 51:
#line 304 "parser.y"
                       {
        printf("#_ Parser: Estructura de decl_ent_sal detectada 2.\n");
    }
#line 2012 "parser.tab.c"
    break;

  case 52:
#line 307 "parser.y"
              {
        printf("#_ Parser: Estructura de decl_ent_sal detectada 3.\n");
    }
#line 2020 "parser.tab.c"
    break;

  case 53:
#line 312 "parser.y"
                         {
        printf("#_ Parser: Estructura de decl_ent detectada.\n");
    }
#line 2028 "parser.tab.c"
    break;

  case 54:
#line 317 "parser.y"
                         {
        printf("#_ Parser: Estructura de decl_sal detectada.\n");
    }
#line 2036 "parser.tab.c"
    break;

  case 55:
#line 322 "parser.y"
          {
        printf("#_ Parser: Estructura de expresion detectada 1.\n");
    }
#line 2044 "parser.tab.c"
    break;

  case 56:
#line 325 "parser.y"
            {
        printf("#_ Parser: Estructura de expresion detectada 2.\n");
    }
#line 2052 "parser.tab.c"
    break;

  case 57:
#line 328 "parser.y"
                 {
        printf("#_ Parser: Estructura de expresion detectada 3.\n");
    }
#line 2060 "parser.tab.c"
    break;

  case 58:
#line 333 "parser.y"
                          {
        printf("#_ Parser: Estructura de exp_a detectada 1.\n");
    }
#line 2068 "parser.tab.c"
    break;

  case 59:
#line 336 "parser.y"
                             {
        printf("#_ Parser: Estructura de exp_a detectada 2.\n");
    }
#line 2076 "parser.tab.c"
    break;

  case 60:
#line 339 "parser.y"
                            {
        printf("#_ Parser: Estructura de exp_a detectada 3.\n");
    }
#line 2084 "parser.tab.c"
    break;

  case 61:
#line 342 "parser.y"
                             {
        printf("#_ Parser: Estructura de exp_a detectada 4.\n");
    }
#line 2092 "parser.tab.c"
    break;

  case 62:
#line 345 "parser.y"
                           {
        printf("#_ Parser: Estructura de exp_a detectada 5.\n");
    }
#line 2100 "parser.tab.c"
    break;

  case 63:
#line 348 "parser.y"
                           {
        printf("#_ Parser: Estructura de exp_a detectada 6.\n");
    }
#line 2108 "parser.tab.c"
    break;

  case 64:
#line 351 "parser.y"
                                          {
        printf("#_ Parser: Estructura de exp_a detectada 7.\n");
    }
#line 2116 "parser.tab.c"
    break;

  case 65:
#line 354 "parser.y"
                  {
        printf("#_ Parser: Estructura de exp_a detectada 8.\n");
    }
#line 2124 "parser.tab.c"
    break;

  case 66:
#line 357 "parser.y"
                   { /* LITERAL NUMERICO??? */
        printf("#_ Parser: Estructura de exp_a detectada 9.\n");
    }
#line 2132 "parser.tab.c"
    break;

  case 67:
#line 360 "parser.y"
                { /* LITERAL NUMERICO??? */
        printf("#_ Parser: Estructura de exp_a detectada 10.\n");
    }
#line 2140 "parser.tab.c"
    break;

  case 68:
#line 363 "parser.y"
                       { 
        printf("#_ Parser: Estructura de exp_a detectada 11.\n");
    }
#line 2148 "parser.tab.c"
    break;

  case 69:
#line 368 "parser.y"
                       {
        printf("#_ Parser: Estructura de exp_b detectada 1.\n");
    }
#line 2156 "parser.tab.c"
    break;

  case 70:
#line 371 "parser.y"
                         {
        printf("#_ Parser: Estructura de exp_b detectada 2.\n");
    }
#line 2164 "parser.tab.c"
    break;

  case 71:
#line 374 "parser.y"
                    {
        printf("#_ Parser: Estructura de exp_b detectada 3.\n");
    }
#line 2172 "parser.tab.c"
    break;

  case 72:
#line 377 "parser.y"
                   {
        printf("#_ Parser: Estructura de exp_b detectada 4.\n");
    }
#line 2180 "parser.tab.c"
    break;

  case 73:
#line 380 "parser.y"
                     {
        printf("#_ Parser: Estructura de exp_b detectada 5.\n");
    }
#line 2188 "parser.tab.c"
    break;

  case 74:
#line 383 "parser.y"
                 { 
        printf("#_ Parser: Estructura de exp_b detectada 6.\n");
    }
#line 2196 "parser.tab.c"
    break;

  case 75:
#line 386 "parser.y"
                                     { 
        printf("#_ Parser: Estructura de exp_b detectada 7.\n");
    }
#line 2204 "parser.tab.c"
    break;

  case 76:
#line 389 "parser.y"
                                     { 
        printf("#_ Parser: Estructura de exp_b detectada 8.\n");
    }
#line 2212 "parser.tab.c"
    break;

  case 77:
#line 392 "parser.y"
                                      { 
        printf("#_ Parser: Estructura de exp_b detectada 9.\n");
    }
#line 2220 "parser.tab.c"
    break;

  case 78:
#line 395 "parser.y"
                                      {  
        printf("#_ Parser: Estructura de exp_b detectada 10.\n");
    }
#line 2228 "parser.tab.c"
    break;

  case 79:
#line 398 "parser.y"
                                     { 
        printf("#_ Parser: Estructura de exp_b detectada 11.\n");
    }
#line 2236 "parser.tab.c"
    break;

  case 80:
#line 401 "parser.y"
                                    { 
        printf("#_ Parser: Estructura de exp_b detectada 12.\n");
    }
#line 2244 "parser.tab.c"
    break;

  case 81:
#line 404 "parser.y"
                                          { 
        printf("#_ Parser: Estructura de exp_b detectada 13.\n");
    }
#line 2252 "parser.tab.c"
    break;

  case 82:
#line 409 "parser.y"
              {
        printf("#_ Parser: Estructura de operando detectada 1.\n");
    }
#line 2260 "parser.tab.c"
    break;

  case 83:
#line 412 "parser.y"
                                            {
        printf("#_ Parser: Estructura de operando detectada 2.\n");
    }
#line 2268 "parser.tab.c"
    break;

  case 84:
#line 415 "parser.y"
                                                         {
        printf("#_ Parser: Estructura de operando detectada 3.\n");
    }
#line 2276 "parser.tab.c"
    break;

  case 85:
#line 418 "parser.y"
                            {
        printf("#_ Parser: Estructura de operando detectada 4.\n");
    }
#line 2284 "parser.tab.c"
    break;

  case 86:
#line 423 "parser.y"
              {
        printf("#_ Parser: Estructura de operando detectada 1.\n");
    }
#line 2292 "parser.tab.c"
    break;

  case 87:
#line 426 "parser.y"
                                              {
        printf("#_ Parser: Estructura de operando detectada 2.\n");
    }
#line 2300 "parser.tab.c"
    break;

  case 88:
#line 429 "parser.y"
                                                          {
        printf("#_ Parser: Estructura de operando detectada 3.\n");
    }
#line 2308 "parser.tab.c"
    break;

  case 89:
#line 432 "parser.y"
                             {
        printf("#_ Parser: Estructura de operando detectada 4.\n");
    }
#line 2316 "parser.tab.c"
    break;

  case 90:
#line 437 "parser.y"
                                          {
        printf("#_ Parser: Estructura de instrucciones detectada 1.\n");
    }
#line 2324 "parser.tab.c"
    break;

  case 91:
#line 440 "parser.y"
                 {
        printf("#_ Parser: Estructura de instrucciones detectada 2.\n");
    }
#line 2332 "parser.tab.c"
    break;

  case 92:
#line 445 "parser.y"
                   {
        printf("#_ Parser: Estructura de instruccion detectada 1.\n");
    }
#line 2340 "parser.tab.c"
    break;

  case 93:
#line 448 "parser.y"
                {
        printf("#_ Parser: Estructura de instruccion detectada 2.\n");
    }
#line 2348 "parser.tab.c"
    break;

  case 94:
#line 451 "parser.y"
                 {
        printf("#_ Parser: Estructura de instruccion detectada 3.\n");
    }
#line 2356 "parser.tab.c"
    break;

  case 95:
#line 454 "parser.y"
               {
        printf("#_ Parser: Estructura de instruccion detectada 4.\n");
    }
#line 2364 "parser.tab.c"
    break;

  case 96:
#line 457 "parser.y"
               {
        printf("#_ Parser: Estructura de instruccion detectada 5.\n");
    }
#line 2372 "parser.tab.c"
    break;

  case 97:
#line 462 "parser.y"
                                     {
        printf("#_ Parser: Estructura de asignacion detectada.\n");
    }
#line 2380 "parser.tab.c"
    break;

  case 98:
#line 465 "parser.y"
                                        {
        printf("#_ Parser: Estructura de asignacion detectada.\n");
    }
#line 2388 "parser.tab.c"
    break;

  case 99:
#line 470 "parser.y"
                                                                            {
        printf("#_ Parser: Estructura de alternativa detectada.\n");
    }
#line 2396 "parser.tab.c"
    break;

  case 100:
#line 475 "parser.y"
                                                                     {
        printf("#_ Parser: Estructura de lista_opciones detectada 1.\n");
    }
#line 2404 "parser.tab.c"
    break;

  case 101:
#line 478 "parser.y"
             {
       printf("#_ Parser: Estructura de lista_opciones detectada: VACIO 2.\n");
    }
#line 2412 "parser.tab.c"
    break;

  case 102:
#line 483 "parser.y"
                {
        printf("#_ Parser: Estructura de iteracion detectada 1.\n");
    }
#line 2420 "parser.tab.c"
    break;

  case 103:
#line 486 "parser.y"
                 {
        printf("#_ Parser: Estructura de iteracion detectada 2.\n");
    }
#line 2428 "parser.tab.c"
    break;

  case 104:
#line 491 "parser.y"
                                                                    {
        printf("#_ Parser: Estructura de it_cota_exp detectada.\n");
    }
#line 2436 "parser.tab.c"
    break;

  case 105:
#line 496 "parser.y"
                                                                                                           {
        printf("#_ Parser: Estructura de it_cota_fija detectada.\n");
    }
#line 2444 "parser.tab.c"
    break;

  case 106:
#line 503 "parser.y"
                                                    {
		printf("#_ Parser: Estructura accion_d econtrada.\n");
	}
#line 2452 "parser.tab.c"
    break;

  case 107:
#line 509 "parser.y"
                                                                           {
		printf("#_ Parser: Estructura funcion_d econtrada.");
	}
#line 2460 "parser.tab.c"
    break;

  case 108:
#line 515 "parser.y"
                                                                           {
		printf("#_ Parser: Estructura funcion_d econtrada .");
	}
#line 2468 "parser.tab.c"
    break;

  case 109:
#line 521 "parser.y"
                                                                                             {
		printf("#_ Parser: Estructura f_cabecera econtrada.");
	}
#line 2476 "parser.tab.c"
    break;

  case 110:
#line 527 "parser.y"
                                         {
		printf("#_ Parser: Estructura d_par_form econtrada 1.");
	}
#line 2484 "parser.tab.c"
    break;

  case 111:
#line 530 "parser.y"
                 {
        printf("#_ Parser: Estructura d_par_form econtrada:VACIO 2.");
    }
#line 2492 "parser.tab.c"
    break;

  case 112:
#line 536 "parser.y"
                                                  {
		printf("#_ Parser: Estructura d_p_form econtrada 1.");
	}
#line 2500 "parser.tab.c"
    break;

  case 113:
#line 539 "parser.y"
                                                 {
		printf("#_ Parser: Estructura d_p_form econtrada 2.");
	}
#line 2508 "parser.tab.c"
    break;

  case 114:
#line 542 "parser.y"
                                                   {
		printf("#_ Parser: Estructura d_p_form econtrada 3.");
	}
#line 2516 "parser.tab.c"
    break;

  case 115:
#line 548 "parser.y"
                                                   {
        printf("#_ Parser: Estructura de accion_ll detectada.\n");
    }
#line 2524 "parser.tab.c"
    break;

  case 116:
#line 553 "parser.y"
                                                   {
        printf("#_ Parser: Estructura de funcion_ll detectada.\n");
    }
#line 2532 "parser.tab.c"
    break;

  case 117:
#line 558 "parser.y"
                             {
        printf("#_ Parser: Estructura de ll_ll detectada 1.\n");
    }
#line 2540 "parser.tab.c"
    break;

  case 118:
#line 561 "parser.y"
               {
        printf("#_ Parser: Estructura de ll_ll detectada 2.\n");
    }
#line 2548 "parser.tab.c"
    break;


#line 2552 "parser.tab.c"

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
#line 566 "parser.y"


#include <stdio.h>

/* Called by yyparse on error.  */
void yyerror (char const *s){
	fprintf (stderr, "%s\n", s);
}

/* The lexical analyzer returns a double floating point
   number on the stack and the token NUM, or the numeric code
   of the character read if not a number.  It skips all blanks
   and tabs, and returns 0 for end-of-input.  */

#include <ctype.h>

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

	return yyparse ();
}
