#include <stdio.h>
#include <stdlib.h>

#define TAMANIO 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float suma[TAMANIO];
	float compra;
	int i = 0;
	int j;
	char respuesta = 's';
	float compraMayor = 0;
	int dia;
	
	for(j = 0; j < TAMANIO ; j++)
		suma[j] = 0;
	
	while(i < TAMANIO)
	{
		printf("\tDIA %d\n", i + 1);
		
		do
		{
			printf("\nIngresar compras del dia? s/n: ");
			scanf("%c", &respuesta);
			fflush(stdin);
			
			if(respuesta != 'n')
			{
				printf("\nIngresar compra: ");
				scanf("%f", &compra);
				fflush(stdin);
		
				suma[i] = suma[i] + compra;
		
			}
			
		}while(respuesta != 'n');
		
		if(suma[i] > compraMayor)
		{
			compraMayor = suma[i];
			dia = i;
		}
		system("cls");
		
		i++;
	}
	
	printf("\n\nEl dia con mayor compra fue el %d, y se gasto %.2f$", dia + 1, compraMayor);
	
	system("PAUSE");
	return 0;
}
