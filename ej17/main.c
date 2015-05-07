#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int numero;
	int i;
	
	printf("Ingrese un numero");
	scanf("%d", &numero);
	
	printf("Numero\tCuadrado\tCubo\n");
	for(i=1; i<=numero; i++)
		printf("%d\t\t%d\t\t%d\n", i, i*i, i*i*i);
		
	system("PAUSE");
	return 0;
}
