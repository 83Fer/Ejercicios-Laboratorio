#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int suma=0;
	int numero;
	
	printf("Ingrese cinco numeros: \n");
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &numero);
		fflush(stdin);
		
		suma = suma + numero;
	}
	
	printf("La suma es: %d y su promedio es: %d", suma, suma/5);
	system("PAUSE");
	return 0;
}
