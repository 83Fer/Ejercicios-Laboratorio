#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#include "lib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char nombre[LIMITE_EMPLEADOS][51];
	int legajo[LIMITE_EMPLEADOS];
	int hora[LIMITE_EMPLEADOS];
	int minutos[LIMITE_EMPLEADOS];
	char respuesta = 's';
	int indice = 0;
	
	
	while(respuesta != 'n')
	{
		
		
		printf("Ingresar Nombre y Apellido: ");
		scanf("%s", nombre[indice]);
		
		do{
			printf("\nIngresar Legajo: ");
			scanf("%d", &legajo[indice]);
			fflush(stdin);
		
		}while(validaLegajo(legajo, indice) == 0);
		
		do{
			printf("\nIngresar hora de llegada de 0 a 23 ");
			printf("\nHora: ");
			scanf("%d", &hora[indice]);
			fflush(stdin);
			printf("\nMinutos: ");
			scanf("%d", &minutos[indice]);
			fflush(stdin);
		
		}while(validaHora(hora, minutos, indice) == 0);
			
		
		
		printf("\n\nDesea seguir ingresando datos? s/n: ");
		respuesta = getche();
		fflush(stdin);
		respuesta = tolower(respuesta);
		
		indice++;
	}
	
	printf("Los empleados que llegaron despues de las 9:10 son: ");
	listaEmpleados(nombre, hora, minutos);

	system("PAUSE");
	return 0;
}
