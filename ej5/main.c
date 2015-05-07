#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int numero;
	
	printf("Ingrese numero: ");
	scanf("%d", &numero);
	
	if(numero < 0)
		printf("\nEl numero es negativo\n");
		
	else
		printf("\nEl numero es positivo\n");
		
	system("PAUSE");
	return 0;
}
