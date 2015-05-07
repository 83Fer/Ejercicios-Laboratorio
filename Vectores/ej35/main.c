#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int vector[10];
	int i;
	
	for(i = 0; i < 10; i++)
	{
		printf("Ingrese numero: ");
		scanf("%d", &vector[i]);
	}
	
	for(i = 0; i < 10; i++)
		printf("\n\n%d", vector[i]);
		
	
	system("PAUSE");
	return 0;
}
