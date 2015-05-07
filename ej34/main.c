#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) 
{
	int num1; 
	int num2;
	int total;
	int operacion;
	char respuesta = 's';
	
	while(respuesta != 'n')
	{
		printf("\n1_Suma\n2_Resta\n3_Multipicacion\n4_Division\n");
		
		do
		{
			printf("Elige una opcion ingresando su item:");
			scanf("%d", &operacion);
			fflush(stdin);
			
		}while(operacion < 1 || operacion > 4);
		
		switch(operacion)
		{
			case 1:
				printf("Ingrese numero1: ");
				scanf("%d", &num1);
				fflush(stdin);
				
				printf("Ingrese numero2: ");
				scanf("%d", &num2);
				fflush(stdin);
				
				total = num1 + num2;
				
				printf("\nEl total es: %d", total);
				
				break;
				
			case 2:
				printf("Ingrese numero1: ");
				scanf("%d", &num1);
				fflush(stdin);
				
				printf("Ingrese numero2: ");
				scanf("%d", &num2);
				fflush(stdin);
				
				total = num1 - num2;
				
				printf("\nEl total es: %d", total);
				
				break;
				
			case 3:
				printf("Ingrese numero1: ");
				scanf("%d", &num1);
				fflush(stdin);
				
				printf("Ingrese numero2: ");
				scanf("%d", &num2);
				fflush(stdin);
				
				total = num1 * num2;
				
				printf("\nEl total es: %d", total);
				
				break;
				
			case 4:
				printf("Ingrese numero1: ");
				scanf("%d", &num1);
				fflush(stdin);
				
				printf("Ingrese numero2: ");
				scanf("%d", &num2);
				fflush(stdin);
				
				total = num1 / num2;
				
				printf("\nEl total es: %d", total);
				
				break;
			
		}
		
		printf("\nDesea seguir? s/n: ");
		respuesta = getche();
		respuesta = tolower(respuesta);
		
		printf("\n\n");
	}
	
	system("PAUSE");
	return 0;
}
