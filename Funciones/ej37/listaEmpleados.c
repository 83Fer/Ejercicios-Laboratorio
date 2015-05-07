#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#include "lib.h"

void listaEmpleados(char listaNombres[][51], int hora[], int minutos[])
{
	int i, j;
	
	char valorChico[51];
	int posicionChico;
	
	int auxHora;
	int auxMinutos;
	
	for(i = 0 ; i < LIMITE_EMPLEADOS  ; i++ )
	{
		
			strcpy(valorChico, listaNombres[i]);
			posicionChico = i;
			
			for(j = i+1; i < LIMITE_EMPLEADOS; j++)
			{
				if((valorChico, listaNombres[j]) < 0)
				{
					strcpy(valorChico, listaNombres[j]);
					posicionChico = j;
				}
				
				
			}
			
			if(i != posicionChico)
			{
				strcpy(listaNombres[posicionChico], listaNombres[i]);
				strcpy(listaNombres[i], valorChico);
				
				/*auxHora = hora[i];
				hora[i] = hora[posicionChico];
				hora[posicionChico] = auxHora;
				
				auxMinutos = minutos[i];
				minutos[i] = minutos[posicionChico];
				minutos[posicionChico] = auxMinutos;
			*/}
		
	}
	
	for(i = 0; i < LIMITE_EMPLEADOS; i++)
	{
		//if(hora[i] >= 9 && minutos[i] >=10)
			printf("%s\n", listaNombres[i]);
	}
	
}
