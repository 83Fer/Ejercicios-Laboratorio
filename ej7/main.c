#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float centimetros;
	float pulgadas;
	int pies;
	
	printf("Ingrese centimetros:\n");
	scanf("%f", &centimetros);
	
	pulgadas = centimetros / 2.54;
	pies = ((int)pulgadas) / 12;
	
	printf("\n%.1f centimetros son %.1f pulgadas y %d pies\n", centimetros, pulgadas, pies);
	
	system("PAUSE");
	return 0;
}
