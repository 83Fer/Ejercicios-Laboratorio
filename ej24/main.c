#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char nombre[20];
	char apellido[20];
	float altura;
	float alturaMax = 0;
	char respuesta = 's';
	char Nombre[20];
	
	while(respuesta != 'n')
	{
		printf("Ingresa el nombre: ");
		scanf("%s", nombre);
		fflush(stdin);
		
		printf("Ingresa el apellido: ");
		scanf("%s", apellido);
		fflush(stdin);
		
		printf("Ingresa la altura: ");
		scanf("%f", &altura);
		fflush(stdin);
		
		if(altura > alturaMax)
		{
			alturaMax = altura;
			strcpy(Nombre, nombre);
		}
		
		printf("\n\nDesea continuar? s/n: ");
		scanf("%c", &respuesta);
		fflush(stdin);
		respuesta = tolower(respuesta);
		
		printf("\n\n");
	}
	
	printf("\nEl nombre del alumno mas alto es: %s y mide: %.2f\n", Nombre, alturaMax);
	
	system("PAUSE");
	return 0;
}
