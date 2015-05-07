#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int numero;
	int i;
	int contMayor = 0;
	int contMenor = 0;
	
	printf("Ingrese diez numeros: \n");
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &numero);
		fflush(stdin);
		
		if(numero > 0)
			contMayor++;
			
		else
			contMenor++;
	}
	
	printf("Los numeros ingresados mayores a 0 son: %d\nY los numeros menores a 0 son: %d\n", contMayor, contMenor);
	
	system("PAUSE");
	return 0;
}
