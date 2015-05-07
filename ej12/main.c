#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char numero;
	
	
	for(numero = 1; numero <=100; numero++)
		printf("%d\t", numero);

	printf("\n");
	
	system("PAUSE");
	return 0;
}
