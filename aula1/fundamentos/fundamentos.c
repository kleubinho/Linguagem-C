#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Fundamentos da Linguagem C
	Author Kleber Henrique
	
*/
int main(int argc, char *argv[]) {
	//a linha abaixo configura o idioma para português
	setlocale(LC_ALL, "Portuguese");
	system("color 5");
	printf("Olá Mundo\n");
	system("pause");
	//a linha abaixo "limpa" a tela do prompt
 	system("cls");
 	//a linha abaixao modifica a cor do background(fundo) e texto
 	system("color 1f");// color fundo e texto
 	printf("Código de cores:\n\n");
	printf("0 - preto\n");
	printf("1 - azul\n");
	printf("2 - verde\n");
	printf("3 - verde água\n");
	printf("4 - vermelho\n");
	printf("5 - roxo\n");
	printf("6 - amarelo\n");
	printf("7 - branco\n");
	printf("8 - cinza\n");
	printf("9 - azul claro\n");
	printf("A - verde claro\n");
	printf("B - verde água claro\n");
	printf("C - vermelho claro\n");
	printf("D - lilás\n");
	printf("E - amarelo claro\n");
	printf("F - branco brilhante\n");
	return 0;
}
