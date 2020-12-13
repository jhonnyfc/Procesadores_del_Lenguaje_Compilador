/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 149 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
