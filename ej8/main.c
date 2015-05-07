#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char vocal;
	char contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;
	char i;
	
	printf("Ingrese 20 caracteres:");
	
	for(i = 0; i < 20; i++)
	{
		scanf("%c", &vocal);
		fflush(stdin);
		vocal = tolower(vocal);
		
		switch(vocal)
		{
			case 'a':
				contA++;
				break;
				
			case 'e':
				contE++;
				break;
				
			case 'i':
				contI++;
				break;
				
			case 'o':
				contO++;
				break;
				
			case 'u':
				contU++;
				break;
				
			default:
				printf("ERROR, ingrese una vocal\n");
				i--;
				break;
		}
		
	}
	
	printf("Se ingresearon:\ta: %d\te: %d\ti: %d\to: %d\tu: %d\n", contA, contE, contI, contO, contU);
	system("PAUSE");
	return 0;
}
