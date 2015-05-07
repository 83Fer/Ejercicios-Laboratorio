#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int suma=0;
	int numero;
	int i;
	
	printf("Ingrese cinco numeros: \n");
	for( i = 0; i < 5; i++)
	{
		scanf("%d", &numero);
		fflush(stdin);
		
		suma = suma + numero;
	}
	
	printf("La suma es: %d y su promedio es: %.2f\n", suma, suma/5.0);
	system("PAUSE");
	return 0;
}
