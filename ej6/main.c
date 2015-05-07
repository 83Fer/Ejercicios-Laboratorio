#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int numero;
	
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	
	if(numero%2 == 0)
		printf("\nEl numero es par\n");
	else
		printf("\nEl numero es impar\n");
	
	system("PAUSE");
	return 0;
}
