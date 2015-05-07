#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float horaValor;
	char nombre[20];
	int antiguedad;
	int horas;
	float totalBruto, descuento, totalNeto;
	
	printf("Ingrese el valor de la hora: ");
	scanf("%f", &horaValor);
	fflush(stdin);
	printf("\nIngrese el nombre: ");
	scanf("%s", nombre);
	fflush(stdin);
	printf("\nIngrese la antiguedad: ");
	scanf("%d", &antiguedad);
	fflush(stdin);
	printf("\nIngrese la cantidad de horas: ");
	scanf("%d", &horas);
	
	totalBruto = (horaValor * horas) + (antiguedad * 30);
	descuento = totalBruto * 0.13;
	totalNeto = totalBruto - descuento;
	
	printf("\n\nNombre: %s", nombre);
	printf("\nAntiguedad: %d", antiguedad);
	printf("\nValor de horas: %.2f", horaValor);
	printf("\nCobra en bruto: %.2f", totalBruto);
	printf("\nDescuento %.2f", descuento);
	printf("\nCobra neto: %.2f\n", totalNeto); 
	
	system("PAUSE");
	return 0;
}
