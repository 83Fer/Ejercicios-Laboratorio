#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char materia[20];
	char auxMateria[100];
	char nombre[30];
	char aux[100];
	char nombreMayor[30];
	float promedio;
	float promedioMayor = 0;
	float nota;
	int i;
	char respuesta = 's';
	float total;
	int cont = 0;
	
	do
	{
		total = 0;
		do
		{
			printf("Ingrese el nombre y apellido del alumno: ");
			gets(aux);
			
		}while(strlen(aux) > 30);
		
		strcpy(nombre, aux);
		
		
		for(i = 1; i <= 6; i++)
		{
			do
			{
				printf("Ingrese el nombre de la materia\n(Matematica, Lengua, Sociales, Naturales, Ingles, Gimnasia): ");
				scanf("%s", materia);
				fflush(stdin);
			}while(strlen(auxMateria) > 20);
			
			
			
			do
			{
				printf("Ingrese la nota de la materia: " );
				scanf("%f", &nota);
				fflush(stdin);
			}while(nota > 10 || nota < 1);
			
			total = total + nota;
			
		}
		
		promedio = total / 6;
		
		printf("\nEl alumno %s tiene un promedio de %.2f", nombre, promedio);
		
		if(promedio > promedioMayor)
		{
			promedioMayor = promedio;
			strcpy(nombreMayor, nombre);
		}
		
		printf("\n\nDesea ingresar otro alumno?: s/n: ");
		scanf("%c", &respuesta);
		fflush(stdin);
		respuesta = tolower(respuesta);
		
		printf("\n\n");
		
	}while(respuesta != 'n');
	
	printf("El alumno con el promedio mas alto es %s con %.2f\n\n", nombreMayor, promedioMayor);
	
	system("PAUSE");
	return 0;
}
