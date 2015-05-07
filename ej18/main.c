#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int peso;
	char respuesta = 's';
	char contMenosPeso = 0;
	char contMayorPeso = 0;
	
	
	while(respuesta != 'n')
	{
		printf("Introduzca el peso del empleado: ");
		scanf("%d", &peso);
		
		
		if(peso <= 80)
			contMenosPeso++;
			
		if(peso > 80)
			contMayorPeso++;
			
		printf("\nDesea seguir introduciendo el peso de los empleados? s/n\n");
		respuesta=getch();
	}
	system("cls");
	
	printf("\nLa cantidad de los empleados que pesan menos de 80 son: %d\n", contMenosPeso);
	printf("\nLa cantidad de los empleados que pesan mas de 80 son: %d\n", contMayorPeso);
	
	system("PAUSE");
	return 0;
}
