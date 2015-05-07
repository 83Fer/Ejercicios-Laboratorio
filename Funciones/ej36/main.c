#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include"validarDatos.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int fecha[3];
	int fechaAntigua[3];
	char nombre[20];
	char nombreMax[30];
	float sueldo;
	float sueldoMayor;
	int i;
	int j;
	int k;
	
	for(k = 0; k < 3; k++)
		fechaAntigua[k] = 3000;
	
	for(i = 0; i < 3; i++)
	{
		printf("Ingrese el nombre: ");
		gets(nombre);
		fflush(stdin);
		
		printf("Ingrese fecha de ingreso a la empresa:\nDia: ");
		scanf("%d", &fecha[0]);
		fflush(stdin);
		printf("\nMes: ");
		scanf("%d", &fecha[1]);
		fflush(stdin);
		printf("\nAño: ");
		scanf("%d", &fecha[2]);
		fflush(stdin);
		
		printf("Ingrese el sueldo: ");
		scanf("%f", &sueldo);
		fflush(stdin);
		
		if(validarEmpleado(fecha, sueldo) == 0)
		{
			printf("Error de datos, vuelva a ingresar\n");
			i--;
		}
		else
			{
				
				if (fechaAntigua[2] >= fecha[2])
				{
					if(fechaAntigua[1] >= fecha[1])
						if(fechaAntigua[0] > fecha[0])
						{
							for(j = 0; j < 3; j++)
								fechaAntigua[j] = fecha[j];
							
							
							strcpy(nombreMax, nombre);
							sueldoMayor = sueldo;
						
						}
				}
			}
		
	
	}
	
	printf("El empleado mas antiguo es: \n");
	printf("\nNombre: %s", nombreMax);
	printf("\nSueldo: %.2f", sueldoMayor);
	printf("\nFecha de ingreso: %d-%d-%d", fechaAntigua[0], fechaAntigua[1], fechaAntigua[2]);
	system("PAUSE");
	return 0;
}
