#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int posicion;
	int valor;
	int vector[10];
	int auxVector[10];
	int i;
	int k;
	int j;
	int bandera = 0;
	
	for(k = 0; k <10; k++)
	{
		auxVector[k] = -1;
	}
	
	for(i = 0; i < 10; i++)
	{
	
	
		do
		{
			if(bandera == 1)
				printf("\nError, reingrese la posicion\n");
				
			printf("Ingrese la posicion del 1 al 10: ");
			scanf("%d", &posicion);
			fflush(stdin);
			
			bandera = 1;
			
		}while(posicion < 1 || posicion > 10);
		
		bandera = 0;
		
		posicion--;
		
		//validar para que no se ingrese dos posiciones iguales
		for(k = 0; k < 10; k++)
		{
			if(auxVector[k] == posicion)
				break;
		}
		
		if(k == 10)
		{
			for(j = 0; j < 10; j++)
			{
				if(auxVector[j] == -1)
				{
					auxVector[j] = posicion;
					
					break;
				}
				
			}
			
			printf("\nIngrese un valor para la posicion %d: ", posicion+1);
			scanf("%d", &vector[posicion]);
			fflush(stdin);
		}
		else
		{
			printf("\n\nError, posicion repetida\n");
			i--;
		}
		
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("\n%d\n", vector[i]);
	}
		
	system("PAUSE");
	return 0;
}
