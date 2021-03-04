#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
	Cacular o IMC
	Author Kleber Henrique
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float imc, altura, peso;
	
	printf("Digite a altura: ");
	scanf("%f",&altura);
	printf("Digite o peso: ");
	scanf(" %f", &peso);
	system("pause");
	
	imc = peso/(altura*altura);
	
	printf("imc = %.2f", imc);
	
	return 0;
}
