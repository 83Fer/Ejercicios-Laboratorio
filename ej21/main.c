#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int numero;
	int i;
	int bandera = 0;
	
	do
	{
		if(bandera == 1)
		{
			printf("Error\n");
		}
		printf("Ingresar numero del 1 al 10: ");
		scanf("%d", &numero);
		
		bandera = 1;
	}while(numero < 0 || numero > 10);
	
	for( i = 1; i <= 10; i++)
		printf("%dx%d=%d\n", numero, i, numero * i );
		
	system("PAUSE");
	return 0;
}
