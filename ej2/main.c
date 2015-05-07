#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int numero;
	
	printf("Ingrese el lado de un cuadrado: \n");
	scanf("%d", &numero);
	fflush(stdin);
	
	while(numero < 1)
	{
		printf("\nERROR, el numero debe ser mayor que cero\n");
		scanf("%d", &numero);
	}
	
	numero*=numero;
	
	printf("\nEl cuadrado del numero es: %d\n", numero);
	return 0;
}
