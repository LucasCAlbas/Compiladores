#include <stdio.h>
#include <stdlib.h>
#include "analex.h"

int token;

void E();
void T();
void E_linha();
void T_linha();
void F();
void erro();
void reconhecer(int tok);

void erro() {
	printf("Erro sintatico\n");
	exit(1);
}

void reconhecer(int tok) {
	if (tok == token)
	  token = analex();
	else
	  erro();
}

// implementar aqui
void E(){
    T();
    E_linha();
}

main() {
   token = analex();
   E();
   if (token != ';')
     erro();
   else
     printf("Sucesso!!\n");
}

