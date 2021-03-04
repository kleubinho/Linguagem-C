#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Estudo das variáveis
	@author Kleber Henrique
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
 	printf("  AAA    CCCCC    AAA   DDDDD   EEEEEEE MM    MM IIIII   AAA\n");  
 	printf(" AAAAA  CC    C  AAAAA  DD  DD  EE      MMM  MMM  III   AAAAA\n");  
	printf("AA   AA CC      AA   AA DD   DD EEEEE   MM MM MM  III  AA   AA\n"); 
	printf("AAAAAAA CC    C AAAAAAA DD   DD EE      MM    MM  III  AAAAAAA\n");
	printf("AA   AA  CCCCC  AA   AA DDDDDD  EEEEEEE MM    MM IIIII AA   AA\n"); 
                                                               
	printf("FFFFFFF IIIII  SSSSS  IIIII  CCCCC    AAA\n");   
	printf("FF       III  SS       III  CC    C  AAAAA\n");  
	printf("FFFF     III   SSSSS   III  CC      AA   AA\n"); 
	printf("FF       III       SS  III  CC    C AAAAAAA\n"); 
	printf("FF      IIIII  SSSSS  IIIII  CCCCC  AA   AA\n");
	// Tipos de variáveis
	char professor[30] = {"José de Assis"}; //{30} -> máximo de 30 caracteres
	char personal = 's';
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	printf("ACADEMIA FISICA\n");
	printf("____________________________\n");
	// %s -> Ler o tipo de variavel
	// , (virgula) concatenar(unir) um texto com o conteúdo da variável
	printf("Professor: %s\n", professor);
	printf("Personal Trainer(s/n): %c\n", personal);
	printf("Período: %d\n", periodo);
	// .1 antes de %f arredonda para 1 casa decimal
	printf("Carga horária semanal: %.1f\n", cargaHoraria);
	printf("Salário: R$ %.2lf\n", salario);
	printf("____________________________\n");
	system("pause");
	system("cls");
	// Entrada de dados
	char aluno[50];
	char sexo;
	int idade;
	float imc,peso,altura;
	printf("CADASTRO DE ALUNO \n\n");
	printf("Nome do aluno(a): ");
	// o comando gets é usado especificamente para capturar String (char[])
	gets(aluno);
	printf("Sexo(M/F): ");
	// o comando scanf é usado para capturar as demais variáveis
	// o simbolo &(amper) é usado para referencia a memória
	scanf("%c", &sexo);
	printf("idade: ");
	scanf("%d", &idade);	
	printf("Peso(kg): ");
	// ATENÇÃO! Para capturar um número não inteiro usar (,) vírgula
	scanf("%f", &peso);
	printf("altura(m): ");
	scanf("%f", &altura);
	imc = peso / (altura*altura);
	
	printf("\n");
	system("pause");
	system("cls");
	system("color 70");
	printf("Ficha do aluno(a):\n");
	printf("_________________________\n");
	printf("Aluno: %s\n", aluno);
	printf("Sexo: %c\n", sexo);
	printf("Idade: %d\n", idade);
	printf("Peso: %.2f\n", peso);
	printf("Altura: %.2f\n", altura);
	printf("Imc: %.2f\n", imc);
	//Status de acordo com a tabela do imc
	if (imc < 17){
		printf("Muito abaixo do peso\n");
	} else if (imc < 18.5){
		printf("Abaixo do peso\n");
	} else if (imc < 25){
		printf("Peso normal\n");
	} else if (imc < 30){
		printf("Acima do peso\n");
	} else if (imc < 35){
		printf("Obesidade I\n");
	} else if (imc < 40){
		printf("Obesidade II (severa)\n");
	} else {
		printf("Obesidade III (mórbida)\n");
	}
	printf("_______________________________\n");
	system("pause");
	return 0;
}
