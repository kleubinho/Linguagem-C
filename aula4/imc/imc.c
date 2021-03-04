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
	printf("IIIIIIIIII MMMMMMMM               MMMMMMMM        CCCCCCCCCCCCC\n");
	printf("I::::::::I M:::::::M             M:::::::M     CCC::::::::::::C\n");
	printf("I::::::::I M::::::::M           M::::::::M   CC:::::::::::::::C\n");
	printf("II::::::II M:::::::::M         M:::::::::M  C:::::CCCCCCCC::::C\n");
  	printf("  I::::I   M::::::::::M       M::::::::::M C:::::C       CCCCCC\n");
  	printf("  I::::I   M:::::::::::M     M:::::::::::MC:::::C              \n");
  	printf("  I::::I   M:::::::M::::M   M::::M:::::::MC:::::C              \n");
  	printf("  I::::I   M::::::M M::::M M::::MM::::::MC:::::C              \n");
  	printf("  I::::I   M::::::M M::::M::::M  M::::::MC:::::C              \n");
  	printf("  I::::I   M::::::M  M:::::::M   M::::::MC:::::C              \n");
  	printf("  I::::I   M::::::M   M:::::M    M::::::MC:::::C              \n");
  	printf("  I::::I   M::::::M    MMMMM     M::::::M C:::::C       CCCCCC\n");
	printf("II::::::II M::::::M              M::::::M  C:::::CCCCCCCC::::C\n");
	printf("I::::::::I M::::::M              M::::::M   CC:::::::::::::::C\n");
	printf("I::::::::I M::::::M              M::::::M     CCC::::::::::::C\n");
	printf("IIIIIIIIII MMMMMMMM              MMMMMMMM        CCCCCCCCCCCCC\n\n");
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
	//status de acordo com a tabela do IMC
	if (imc < 17){
		printf("Muito abaixo do peso\n");
	} else if (imc < 18.5){
		printf("Abaixo do peso");
	} else if (imc < 25){
		printf("Peso normal\n");
	} else if (imc < 30){
		printf("Acima do peso\n");
	} else if (imc < 35){
		printf("Obesidade 1\n");
	} else if (imc < 40){
		printf("Obesidade 2 (Severa)\n");
	} else if (imc > 40){
		printf("Obesidade 3 (mórbida)\n");
	}
	system("pause");

	return 0;
}
