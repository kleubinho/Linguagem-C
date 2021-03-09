#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Author Kleber Henrique
	switch case 
*/

int numero;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Sistemas\n\n");
	printf("1- Windows\n");
	printf("2- Linux\n");
	printf("\nEscolha a opção desejada : \n");
	scanf("%d", &numero);
	switch (numero)
	{
		case 1:
			system("cls");
			printf("Iniciando o Windows...\n");
			break;
			
			case 2:
				system("cls");
				printf("Iniciando o Linux...\n");
				break;
				
			default:
				printf("Opção invalida\n");
	}
	system("pause");
	return 0;
}
