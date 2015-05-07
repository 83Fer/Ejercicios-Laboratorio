#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char numero;
	char respuesta = 's';
	
	while(respuesta != 'n')
	{
		printf("\nIngrese un numero para saber el dia de la semana:");
		scanf("%d", &numero);
		fflush(stdin);
		
		switch(numero)
		{
			case 1:
				printf("\nEs Domingo");
				break;
			case 2:
				printf("\nEs Lunes");
				break;
			case 3:
				printf("\nEs Martes");
				break;
			case 4:
				printf("\nEs Miercoles");
				break;
			case 5:
				printf("\nEs Jueves");
				break;
			case 6:
				printf("\nEs Viernes");
				break;
			case 7:
				printf("\nEs Sabado");
				break;
			default:
				printf("Error; ingrese un numero del 1 al 7:\n");
				break;
		}
		
		printf("\n\nDesea seguir ingresando numeros? s/n\n");
		respuesta = getch();
	}
	
	system("PAUSE");
	return 0;
}
