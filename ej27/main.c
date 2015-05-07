#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char nombre_m[30];
	char nombre_M[30];
	char auxNombre[100];
	int puntosInteligencia;
	int puntosCultura;
	int puntosBelleza;
	int general;
	int i;
	int maximo = 0;
	int minimo = 100;
	int acumulador = 0;
	
	for(i = 0; i < 20; i++)
	{
		general = 0;
		
		do
		{
			printf("Ingresa el nombre y apellido: ");
			gets(auxNombre);
			
		}while(strlen(auxNombre) > 30);
		
		do
		{
			printf("Ingrese puntos por Inteligencia: ");
			scanf("%d", &puntosInteligencia);
			fflush(stdin);
			
		}while(puntosInteligencia < 0 || puntosInteligencia > 100);
		
		do
		{
			printf("Ingrese puntos por Cultura General: ");
			scanf("%d", &puntosCultura);
			fflush(stdin);
			
		}while(puntosCultura < 0 || puntosCultura > 100);
		
		do
		{
			printf("Ingrese puntos por Belleza: ");
			scanf("%d", &puntosBelleza);
			fflush(stdin);
			
		}while(puntosBelleza < 0 || puntosBelleza > 100);
		
		general = puntosInteligencia + puntosCultura + puntosBelleza;
		if(general > maximo)
		{
			maximo = general;
			strcpy(nombre_M, auxNombre);
		}
		
		if(general < minimo)
		{
			minimo = general;
			strcpy(nombre_m, auxNombre);
			
		}
		
		acumulador = acumulador + general;
		
		printf("\n\n");
	}
	
	printf("\n%s es la ganadora con %d puntos", nombre_M, maximo);
	printf("\nEl puntaje acumulado por todas las participantes fue de %d puntos", acumulador);
	printf("\n%s es la que menos saco con %d puntos\n", nombre_m, minimo);

	system("PAUSE");
	return 0;
}
