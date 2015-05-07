#include <stdio.h>
#include <stdlib.h>

#define TAMANIO 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int numeros[TAMANIO];
	int suma = 0;
	int i = 0;
	char respuesta = 's'; 
	int cont = 0;
	
	while(respuesta != 'n')
	{
		printf("Ingrese un numero: ");
		scanf("%d", &numeros[i]);
		fflush(stdin);
		
		cont++;
		
		if(i < TAMANIO - 1)
		{
			printf("\nDesea seguir ingresando numeros? s/n: ");
			scanf("%c", &respuesta);
			fflush(stdin);
			
			respuesta = tolower(respuesta);
			
			i++;
		}
		else 
			respuesta = 'n';
		
	}
	
	for(i = 0; i < cont; i++)
		printf("\nElemento %d\tCantidad total: %d\n", i, suma = suma + numeros[i]);
	
	system("PAUSE");
	return 0;
}
