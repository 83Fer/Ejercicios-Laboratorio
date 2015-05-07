#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char nombre[20];
	char auxNombre[100];
	char nombreMayor[20];
	int legajo;
	int legajoMayor;
	float promedio;
	float promedioMayor = 0;
	int aprobaron = 0, diciembre = 0, marzo = 0;
	char respuesta = 's';
	
	do
	{
		do
		{
			printf("Ingresar el nombre: ");
			scanf("%s", auxNombre);
			fflush(stdin);
			
		}while(strlen(auxNombre) > 20);
		
		strcpy(nombre, auxNombre);
		
		do
		{
			printf("ingresar el legajo: ");
			scanf("%d", &legajo);
			fflush(stdin);
			
		}while(legajo < 0 || legajo > 9999);
		
		do
		{
			printf("Ingresar promedio: ");
			scanf("%f", &promedio);
			fflush(stdin);
			
		}while(promedio < 0 || promedio >10);
		
		if(promedio > 7)
			aprobaron++;
			
		if(promedio < 7 && promedio >= 4)
			diciembre++;
			
		if(promedio < 4)
			marzo++;
			
		if(promedioMayor < promedio)
		{
			promedioMayor = promedio;
			strcpy(nombreMayor, nombre);
			legajoMayor = legajo;
		}
		
		
		printf("\nDesea continuar ingresando? s/n: ");
		respuesta = getche();
		respuesta = tolower(respuesta);
		
		printf("\n\n");
		
	}while(respuesta != 'n');
	
	printf("\nLa cantidad de alumnos que aprobaron la materia: %d", aprobaron);
	printf("\nLa cantidad de alumnos que rinden en diciembre: %d", diciembre);
	printf("\nLa cantidad de alumnos que rinden en marzo: %d", marzo);
	printf("\n\nEl alumno con mejor promedio:\nNumero legajo: %d\nNombre: %s\nPromedio: %.2f\n\n", legajoMayor, nombreMayor, promedioMayor );
	
	system("PAUSE");
	return 0;
}
