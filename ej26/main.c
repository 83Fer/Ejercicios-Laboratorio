#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float tempMax;
	float tempMin;
	char fechaTemperaturaMaxima[11];
	char fechaTemperaturaMinima[11];
	char fecha[50];
	float temperaturaMaxima = -100;
	float temperaturaMinima = 100;
	char respuesta = 's';
	
	do
	{
		do
		{
			printf("Ingresar la fecha: dd/mm/aaaa:  ");
			gets(fecha);
		}while(strlen(fecha) > 10);
		
		
		do
		{
			printf("Ingresar temperatura maxima: ");
			scanf("%f", &tempMax);
			fflush(stdin);
			
		}while(tempMax < -100 || tempMax > 100);
		
		do
		{
			printf("Ingresar temperatura minima: ");
			scanf("%f", &tempMin);
			fflush(stdin);
			
		}while(tempMin < -100 || tempMin > 100);
		
		
		if(tempMax > temperaturaMaxima)
		{
			temperaturaMaxima = tempMax;
			strcpy(fechaTemperaturaMaxima, fecha);
		}
		
		if(tempMin < temperaturaMinima)
		{
			temperaturaMinima = tempMin;
			strcpy(fechaTemperaturaMinima, fecha);
		}
		
		printf("\n\nIngresar nuevo dia? s/n: ");
		respuesta = getche();
		respuesta = tolower(respuesta);
		
		printf("\n\n");
	}while(respuesta != 'n');
	
	printf("\nEl dia con mas calor fue el %s con una temperatura de %.2f\n", fechaTemperaturaMaxima, temperaturaMaxima);
	printf("\nEl dia con mas frio fue el %s con una temperatura de %.2f\n", fechaTemperaturaMinima, temperaturaMinima);
	
	system("PAUSE");
	return 0;
}
