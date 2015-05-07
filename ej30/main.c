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
	int contador = 0;
	char nombre_M[20];
	char nombre_m[20];
	float salario_M;
	float salario_m;
	int bandera = 0;
	
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
		
		if(bandera == 0)
		{
			salario_M = salario;
			salario_m = salario;
			
			bandera = 1;
		}
		
		if(salario >= salario_M)
		{
			salario_M = salario;
			strcpy(nombre_M , nombre);
		}
		
		if(salario <= salario_m)
		{
			salario_m = salario;
			strcpy(nombre_m, nombre);
		}
		
		
		printf("\nEl salario semanal de %s es de $%.2f\n", nombre, salario);
		
		printf("\nDesea ingresar otro empleado? s/n: ");
		respuesta = getche();
		respuesta = tolower(respuesta);
		
		printf("\n\n");
		
		contador++;
		
		
	}while(respuesta != 'n');
	
	printf("\nLa cantidad de empleados a los que se les calculo el salario es de: %d\n", contador);
	printf("\nEl empleado con mayor salario es %s y cobro $%.2f", nombre_M, salario_M);
	printf("\nEl empleado con menor salario es %s y cobro $%.2f\n", nombre_m, salario_m);

	system("PAUSE");
	return 0;
}
