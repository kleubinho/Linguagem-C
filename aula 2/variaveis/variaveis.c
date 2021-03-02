#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Estudo das vari�veis
	@author Kleber Henrique
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	// Tipos de vari�veis
	char professor[30] = {"Jos� de Assis"}; //{30} -> m�ximo de 30 caracteres
	char personal = 's';
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	printf("ACADEMIA PHISICAL\n");
	printf("____________________________\n");
	// %s -> Ler o tipo de variavel
	// , (virgula) concatenar(unir) um texto com o conte�do da vari�vel
	printf("Professor: %s\n", professor);
	printf("Personal Trainer(s/n): %c\n", personal);
	printf("Per�odo: %d\n", periodo);
	// .1 antes de %f arredonda para 1 casa decimal
	printf("Carga hor�ria semanal: %.1f\n", cargaHoraria);
	printf("Sal�rio: R$ %.2lf\n", salario);
	printf("____________________________\n");
	system("pause");
	system("cls");
	// Entrada de dados
	char aluno[50];
	char sexo;
	int idade;
	float peso,altura;
	printf("CADASTRO DE ALUNO \n\n");
	printf("Nome do aluno(a): ");
	// o comando gets � usado especificamente para capturar String (char[])
	gets(aluno);
	printf("Sexo(M/F): ");
	// o comando scanf � usado para capturar as demais vari�veis
	// o simbolo &(amper) � usado para referencia a mem�ria
	scanf("%c", &sexo);
	printf("idade: ");
	scanf("%d", &idade);
	printf("Peso(kg): ");
	// ATEN��O! Para capturar um n�mero n�o inteiro usar (,) v�rgula
	scanf("%f", &peso);
	printf("altura(m): ");
	scanf("%f", &altura);
	printf("\n");
	system("pause");
	system("cls");
	printf("Ficha do aluno(a):\n");
	printf("_________________________\n");
	printf("Aluno: %s\n", aluno);
	printf("Sexo: %c\n", sexo);
	printf("Idade: %d\n", idade);
	printf("Peso: %.2f\n", peso);
	printf("Altura: %.2f\n", altura);
	printf("_______________________________\n");
	system("pause");
	return 0;
}
