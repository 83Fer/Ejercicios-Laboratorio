#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float base;
	float altura;
	float superficie;
	
	printf("Ingrese de un triangulo la base: ");
	scanf("%f", &base);
	fflush(stdin);
	
	printf("\nIngrese la altura: ");
	scanf("%f", &altura);
	
	superficie = (base * altura) / 2;
	
	printf("\nLa superfecie del triangulo es: %.2f\n", superficie);
	
	system("PAUSE");
	return 0;
}
