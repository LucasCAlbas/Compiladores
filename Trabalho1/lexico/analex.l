%{
#include <stdio.h>
int numeros = 0, palavras = 0, linha = 0;
%}

%%
[0-9]+          {numeros++; }
[a-z A-Z]+      {palavras++; }
[ \t]+          { }
.\n             {linha++; }
. {printf("erro lexico na linha %d\n", linha);}
%%

void main (){
    yylex();
    printf("Constantes: %d Palavras: %d\n", numeros, palavras);
}
