#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Author Kleber Henrique
	Cálculo do Imc
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	system("color 70");
	printf("IIIIIIIIIIMMMMMMMM               MMMMMMMM        CCCCCCCCCCCCC\n");
	printf("I::::::::IM:::::::M             M:::::::M     CCC::::::::::::C\n");
	printf("I::::::::IM::::::::M           M::::::::M   CC:::::::::::::::C\n");
	printf("II::::::IIM:::::::::M         M:::::::::M  C:::::CCCCCCCC::::C\n");
  	printf("  I::::I  M::::::::::M       M::::::::::M C:::::C       CCCCCC\n");
  	printf("  I::::I  M:::::::::::M     M:::::::::::MC:::::C              \n");
  	printf("  I::::I   M:::::::M::::M   M::::M:::::::MC:::::C              \n");
  	printf("  I::::I   M::::::M M::::M M::::M M::::::MC:::::C              \n");
  	printf("  I::::I   M::::::M M::::M::::M  M::::::MC:::::C              \n");
  	printf("  I::::I   M::::::M  M:::::::M   M::::::MC:::::C              \n");
  	printf("  I::::I   M::::::M   M:::::M    M::::::MC:::::C              \n");
  	printf("  I::::I   M::::::M    MMMMM     M::::::M C:::::C       CCCCCC\n");
	printf("  II::::::IIM::::::M             M::::::M  C:::::CCCCCCCC::::C\n");
	printf("  I::::::::IM::::::M             M::::::M   CC:::::::::::::::C\n");
	printf("  I::::::::IM::::::M             M::::::M     CCC::::::::::::C\n");
	printf("  IIIIIIIIIIMMMMMMMM             MMMMMMMM        CCCCCCCCCCCCC\n");
	//variaveis
	float imc,peso,altura;
	//entrada
	printf("Digite o seu peso em KG: ");
	scanf("%f", &peso);
	printf("Digite a sua altura em metros: ");
	scanf("%f", &altura);
	//processamento
	imc = peso / (altura*altura);
	//saida
	printf("Imc: %.2f\n", imc);
	system("pause");

	return 0;
}
