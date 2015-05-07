#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char numero;
	int total;
	
	for(numero = 3; numero <=99; numero+=3)
	{
		printf("%d\t", numero);
		total = total + numero;
	}
	printf("\nEl total es de: %d", total);
	
	system("PAUSE");
	return 0;
}
