#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int validarNumero(int numero);

int main(int argc, char *argv[]) 
{
	int numeros[20];
	int i;
	int maximo;
	int minimo;
	float total;
	int bandera = 0;
	
	for(i = 0; i < 20; i++)
	{
		printf("Ingrese un numero del -100 al 100: ");
		scanf("%d", &numeros[i]);
		fflush(stdin);
		system("cls");
		
		if(validarNumero(numeros[i]) == 1)
		{
			printf("Error de rango\n");
			i--;
		}
	}
	
	for(i = 0; i < 20; i++)
	{
		if(bandera == 0)
		{
			maximo = numeros[i];
			minimo = numeros[i];
			bandera = 1;
		}
		
		if(maximo <= numeros[i])
			maximo = numeros[i];
			
		if(minimo >= numeros[i])
			minimo = numeros[i];
			
		total = total + numeros[i];
		
	}
	
	printf("\n\nEl valor minimo es : %d", minimo);
	printf("\nEl valor maximo es : %d", maximo);
	printf("\nEl promedio es : %.2f\n", total/20);
	
	system("PAUSE");
	return 0;
}

int validarNumero(int numero)
{
	
	if(numero >= -100 && numero <= 100)
		return 0;
		
	else
		return 1;
}
