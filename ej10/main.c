#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char numero;
	char contImpar=0;
	
	
	for(numero = 0; numero<=100; numero++)
	{
		if(numero%2 != 0)
		{
			printf("%d\n", numero);
			contImpar++;
		}
	}
	printf("La cantidad de impares es de: %d\n", contImpar);
	
	system("PAUSE");
	return 0;
}
