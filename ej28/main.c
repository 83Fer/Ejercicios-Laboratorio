#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char nombre[20];
	char auxNombre[100];
	float tarifa;
	float hora;
	float salario;
	char respuesta = 's';
	do
	{
		salario = 0;
		
		do
		{
			printf("Ingrese nombre: ");
			scanf("%s", auxNombre);
			
		}while(strlen(auxNombre) > 20);
		
		strcpy(nombre, auxNombre);
		
		do
		{
			printf("Ingrese tarifa de la hora: ");
			scanf("%f", &tarifa);
			fflush(stdin);
			
		}while(tarifa < 1);
		
		do
		{
			printf("Ingrese las horas trabajadas: ");
			scanf("%f", &hora);
			fflush(stdin);
			
		}while(hora < 0 || hora > 60);
		
		salario = tarifa * hora;
		
		printf("\nEl salario semanal de %s es de $%.2f\n", nombre, salario);
		
		printf("\nDesea ingresar otro empleado? s/n: ");
		respuesta = getch();
		respuesta = tolower(respuesta);
		
		printf("\n\n");
		
	}while(respuesta != 'n');
	
	system("PAUSE");
	return 0;
}
