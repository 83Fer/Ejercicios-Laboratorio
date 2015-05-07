#include <stdio.h>
#include <stdlib.h>

#define TAMANIO 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int numero[TAMANIO];
	int numeroMayor;
	int i;
	int b = 0;
	
	
	printf("Ingrese %d numeros: ", TAMANIO);
	for(i = 0; i < TAMANIO; i++)
	{
		scanf("%d", &numero[i]);
		fflush(stdin);
		
		if(b == 0)
		{
			numeroMayor = numero[i];
			b = 1;
		}
		if(numero[i] >= numeroMayor)
			numeroMayor = numero[i];
	}
	
	printf("\nEl numero mayor es: %d", numeroMayor);
	
	printf("\nY se en cuentra en la/s posicion/es: \n");
	
	for(i = 0; i < TAMANIO; i++)
	{
		if(numeroMayor == numero[i])
			printf("Posicion N° %d\n", i + 1);
	}
	
	
	system("PAUSE");
	return 0;
}		
