#include <stdio.h>
#include <stdlib.h>

#define TAMANIO 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int vectorA[TAMANIO];
	int vectorB[TAMANIO];
	int vectorC[TAMANIO];
	int i;
	int b = 0;
	
	for(i = 0; i < TAMANIO; i++)
	{
		printf("Ingresar numero de vectorA[%d]: ", i);
		scanf("%d", &vectorA[i]);
		fflush(stdin);
		
		printf("Ingresar numero de vectorB[%d]: ", i);
		scanf("%d", &vectorB[i]);
		fflush(stdin);
		
		system("cls");
	}
	
	printf("VectorA\tVectorB\tVectorC\n");
	for(i = 0; i < TAMANIO; i++)
	{
		if(vectorA[i] < vectorB[i])
			vectorC[i] = vectorA[i];
		else 
			vectorC[i] = vectorB[i];
			
		printf("  %d\t  %d\t  %d\n", vectorA[i], vectorB[i], vectorC[i]);
	}
	
	system("PAUSE");
	return 0;
}
