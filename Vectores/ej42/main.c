#include <stdio.h>
#include <stdlib.h>

#define TAMANIO 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int legajo[TAMANIO];
	int edad[TAMANIO];
	float salario[TAMANIO];
	int edadPromedio = 0;
	int i;
	
	for(i = 0; i < TAMANIO; i++)
	{
		legajo[i] = i;
		printf("Legajo %d\n", i + 1);
		
		do
		{
			printf("Ingrese edad: ");
			scanf("%d", &edad[i]);
			fflush(stdin);
		}while(edad[i] > 65 || edad[i] < 18);
		
		do
		{
			printf("\nIngrese salario: ");
			scanf("%f", &salario[i]);
			fflush(stdin);
		}while(salario[i] < 5000 || salario[i] > 10000);
		
		edadPromedio = edadPromedio + edad[i];
		
	}
	
	printf("La edad promedio es : %.2f\n", ((float)edadPromedio) / TAMANIO);
	printf("los numeros de legajos que superan la edad promedio son: \n");
	
	for(i = 0; i < TAMANIO; i++)
	{
		if(edadPromedio/TAMANIO < edad[i])
			printf("%d\n", legajo[i] + 1 );
	}
	
	
	system("PAUSE");
	return 0;
}
