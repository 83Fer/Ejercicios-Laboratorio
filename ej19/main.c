#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char numVendedor = -1;
	float vendedor1 = 0, vendedor2 = 0, vendedor3 = 0;
	float importe;
	
	while(numVendedor =! 0)
	{
		printf("Ingrese numero de vendedor: ");
		scanf("%d", &numVendedor);
		fflush(stdin);
		if(numVendedor == 0)
			break;
		printf("\nIngrese el importe: ");
		scanf("%f", &importe);
		
		switch(numVendedor)
		{
			case 1:
				vendedor1 = vendedor1 + (importe * 0.05);
				break;
				
			case 2:
				vendedor2 = vendedor2 + (importe * 0.05);
				break;
				
			case 3:
				vendedor3 = vendedor3 + (importe * 0.05);
				break;
				
			default:
				printf("ERROR, ingreso mal el numero de vendedor");
				break;	
		}
		
		printf("\n");
	}
	
	printf("\n\nEl vendedor Numero 1 gano $%.2f", vendedor1);
	printf("\nEl vendedor Numero 2 gano $%.2f", vendedor2);
	printf("\nEl vendedor Numero 3 gano $%.2f", vendedor3);
	system("PAUSE");
	return 0;
}
