#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	C�lculo da m�dia
	@author Kleber Henrique
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	printf("C�lculo da m�dia\n");
	//vari�veis
	float nota1,nota2,media;
	//entrada
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	printf("DIgite a nota 2: ");
	scanf("%f", &nota2);
	//processamento
	media = ( nota1 + nota2) / 2;
	//sa�da
	printf("Resultado: %.1f\n", media);
	//estrutura de controle para determinar a aprova��o
	if (media < 5){
		printf("REPROVADO\n");
	}else {
		printf("APROVADO");
	}
	system("pause");
	return 0;
}
