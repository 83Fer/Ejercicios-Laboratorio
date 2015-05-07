#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char numero;
	
	printf("\t\tMultiplo de 2:\n");
	for(numero = 0; numero <=100; numero++)
	{
		if(numero%2 == 0)
		{
			printf("%d\t", numero);
		}
	}
	
	printf("\n\n\t\tMultiplo de 3: \n");
	
	for(numero = 0; numero <=100; numero++)
	{
		if(numero%3 == 0)
		{
			printf("%d\t", numero);
		}
	}
	
	printf("\n\n\t\tMultiplo de 2 y 3: \n");
	
	for(numero = 0; numero <=100; numero++)
	{
		if(numero%2 == 0 && numero%3 == 0)
		{
			printf("%d\t", numero);
		}
	}
	printf("\n");
	
	system("PAUSE");
	return 0;
}
