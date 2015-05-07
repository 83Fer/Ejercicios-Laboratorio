#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num1;
	int num2;
	int aux;
	
	printf("Ingrese el valor de num1: ");
	scanf("%d", &num1);
	fflush(stdin);
	printf("\nIngrese el valor de num2: ");
	scanf("%d", &num2);
	
	aux = num1;
	num1 = num2;
	num2 = aux;
	
	printf("\nLos valores se intercambiaron: \nEl valor de num1 es %d y el valor de num2 es %d\n\n", num1, num2);
	system("PAUSE");
	return 0;
}
