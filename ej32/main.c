#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int numeroSocio;
	char nombreApellido[30];
	char auxNombreApellido[100];
	int edad;
	int deporte;
	char respuesta = 's';
	int contTenis = 0;
	int contVoley = 0;
	int contador = 0;
	int totalEdad = 0;
	
	do
	{
		do
		{
			printf("Ingrese numero de socio: ");
			scanf("%d", &numeroSocio);
			fflush(stdin);
		}while(numeroSocio < 0 || numeroSocio > 9999);
		
		do
		{
			printf("Ingrese nombre y apellido: ");
			gets(auxNombreApellido);
		}while(strlen(auxNombreApellido) > 30);
		
		strcpy(nombreApellido, auxNombreApellido);
		
		do
		{
			printf("Ingresar edad mayores de 6: ");
			scanf("%d", &edad);
			fflush(stdin);
			
		}while(edad < 6 || edad > 100);
		
		do
		{
			printf("De la lista:\n1-tenis\n2-rugby\n3-voley\n4-hockey\n5-futbol\nIngrese el item del deporte que hace: ");
			scanf("%d", &deporte);
			fflush(stdin);
			
		}while(deporte < 1 || deporte > 5);
		
		if(deporte == 1)
			contTenis++;
		
		if(deporte == 3)
			contVoley++;
			
		contador++;
		
		totalEdad = totalEdad + edad;
		
		printf("\n\nDesea continuar ingresando? s/n: ");
		respuesta = getche();
		respuesta = tolower(respuesta);
		
		printf("\n\n");
		
	}while(respuesta != 'n');
	
	printf("\nLa cantidad de socios que practican tenis es: %d", contTenis);
	printf("\nLa cantidad de socios que practican voley es: %d", contVoley);
	printf("\n\nEl promedio de edad de todos los deportistas es de: %.2f\n", ((float)totalEdad) / contador);

	system("PAUSE");
	return 0;
}
