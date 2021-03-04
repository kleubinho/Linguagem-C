#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
	Author Kleber Henrique
	Boletim Escolar  
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	system("color 70");
	printf("___________________________________________________________\n");
	printf("BBBBB    OOOOO  LL      EEEEEEE TTTTTTT IIIII MM    MM\n"); 
	printf("BB   B  OO   OO LL      EE        TTT    III  MMM  MMM\n"); 
	printf("BBBBBB  OO   OO LL      EEEEE     TTT    III  MM MM MM\n"); 
	printf("BB   BB OO   OO LL      EE        TTT    III  MM    MM\n"); 
	printf("BBBBBB   OOOO0  LLLLLLL EEEEEEE   TTT   IIIII MM    MM \n\n");
                                                       
	printf("EEEEEEE  SSSSS   CCCCC   OOOOO  LL        AAA   RRRRRR \n"); 
	printf("EE      SS      CC    C OO   OO LL       AAAAA  RR   RR \n");
	printf("EEEEE    SSSSS  CC      OO   OO LL      AA   AA RRRRRR\n");  
	printf("EE           SS CC    C OO   OO LL      AAAAAAA RR  RR \n"); 
	printf("EEEEEEE  SSSSS   CCCCC   OOOO0  LLLLLLL AA   AA RR   RR\n");
	printf("___________________________________________________________\n");
	system("pause");
	system("cls");
	
	system("color 0f");
	printf("CADASTRO DO ALUNO\n");
	printf("___________________________\n\n");
	//Cadastro do aluno
	char aluno[50];
	char sexo;
	int idade;
	float  nota1, nota2, nota3, nota4, media;
	printf("Nome do aluno: ");
	gets(aluno);
	printf("Sexo(M/F): ");
	scanf("%c", &sexo);
	printf("idade: ");
	scanf("%d", &idade);
	printf("____________________________\n");
	
	system("pause");
	system("cls");
	system("color f0");
	printf("Calculando sua média\n");
	
	printf("____________________________\n\n");
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	printf("Digite a nota 3: ");
	scanf("%f", &nota3);
	printf("Digite a nota 4: ");
	scanf("%f", &nota4);
	
	printf("____________________________\n");
	//processamento 
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	//saida
	printf("Média : %.1f\n", media);
	if (media <6){
		printf("REPROVADO\n");
	} else {
		printf("APROVADO\n");
	}
	
	
	return 0;
}
