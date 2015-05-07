#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int legajo;
	char nombre[20];
	float sueldo;
	char sexo;
	int contMujeres = 0;
	int contHombres = 0;
	char respuesta = 's';
	do{
	
		do{
			printf("Ingrese numero de legajo: ");
			scanf("%d", &legajo);
			fflush(stdin);
		}while(legajo > 9999 || legajo < 0);
	
		printf("\nIngrese nombre: ");
		gets(nombre);
	
		printf("\nIngrese sueldo: ");
		scanf("%f", &sueldo);
		fflush(stdin);
		do{
			printf("\nIngresar sexo f/m: ");
			scanf("%c", &sexo);
			fflush(stdin);
		}while(!(sexo=='f' || sexo=='m'));
	
		if(sexo == 'f' && sueldo > 500)
			contMujeres++;
		
		if(sexo == 'm')
			if(sueldo < 400)
				contHombres++;
				
		printf("\nDesea seguir registrando? s/n: ");
		respuesta = getch();
		printf("\n\n");
	}while(respuesta != 'n');

	printf("\nLa cantidad de hombres que gana menos de $400 es: %d\n", contHombres);
	printf("La cantidad de mujeres que gana mas de $500 es: %d\n", contMujeres);

	system("PAUSE");
	return 0;
}
