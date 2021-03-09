#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
	Author Kleber
	Jogo do dado 
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Jogo do dado\n");
	srand(time(NULL));
	printf("Face = %d\n", rand()%6 + 1);
	system("pause");
	return 0;
}
