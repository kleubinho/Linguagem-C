#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Cálculo da média
	@author Kleber Henrique
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	printf("Cálculo da média\n");
	//variáveis
	float nota1,nota2,media;
	//entrada
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	printf("DIgite a nota 2: ");
	scanf("%f", &nota2);
	//processamento
	media = ( nota1 + nota2) / 2;
	//saída
	printf("Resultado: %.1f\n", media);
	//estrutura de controle para determinar a aprovação
	if (media < 5){
		printf("REPROVADO\n");
	}else {
		printf("APROVADO");
	}
	system("pause");
	return 0;
}
