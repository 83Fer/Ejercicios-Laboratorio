#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float cantAgua;
	int bandera=0;
	float cantMenor;
	float cantMayor;
	int i;
	float total;
	
	for( i = 0; i < 31; i++)
	{
		printf("Ingresa la cantidad de agua del dia en milimetros: ");
		scanf("%f", &cantAgua);
		fflush(stdin);
		
		if(bandera == 0)
		{
			cantMenor = cantAgua;
			cantMayor = cantAgua;
			
			bandera = 1;
		}
		if(cantAgua > cantMayor)
			cantMayor = cantAgua;
			
		if(cantAgua < cantMenor)
			cantMenor = cantAgua;
			
		total = total + cantAgua;
	}
	
	printf("El dia de mayor lluvia cayo: %.2f milimetros\n", cantMayor);
	printf("El dia con menor lluvia cayo: %.2f milimentros\n", cantMenor);
	printf("El promedio fue de: %.2f milimetros en el mes\n", total/((float)i));
	system("PAUSE");
	return 0;
}
