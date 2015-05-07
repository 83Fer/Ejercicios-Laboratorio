#include <stdio.h>
#include <stdlib.h>

#define TAMANIO 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int vector[TAMANIO];
	int valorMayor;
	int i; 
	int j;
	int posMayor;
	
	printf("Ingrese 20 numeros:\n ");
	
	for(i = 0; i < TAMANIO; i++)
		scanf("%d", &vector[i]);
		
	system("cls");
	
	printf("\tComo fue ingresado\n");
	
	
	for(i = 0; i < TAMANIO; i++)
		printf("\t%d\n", vector[i]);
	
	system("PAUSE");
	system("cls");
	
	printf("\tOrdenamiento decreciente\n ");
	
	for(i = 0; i < TAMANIO - 1; i++)
	{
		valorMayor = vector[i];
		posMayor = i;
		
		for(j = i + 1; j < TAMANIO; j++)
		{
			if(valorMayor < vector[j])
			{
				valorMayor = vector[j];
				posMayor = j;
			}
			
			
		}
		
		if(posMayor != i)
		{
			vector[posMayor] = vector[i];
			vector[i] = valorMayor;
			
		}
	}
	
	for(i = 0; i < TAMANIO; i++)
		printf("\t%d\n", vector[i]);
	
	
	system("PAUSE");
	return 0;
}
