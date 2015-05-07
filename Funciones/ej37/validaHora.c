#include <stdio.h>
#include <stdlib.h>

#include "lib.h"

int validaHora(int hora[], int minutos[], int indice)
{
	if(hora[indice] < 24 && hora[indice] >= 0)
		if(minutos[indice] < 60 && minutos[indice] >=0)
				return 1;
		
	else 
		return 0;
}
