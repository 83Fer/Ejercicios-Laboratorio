#include <stdio.h>
#include <stdlib.h>

#include "lib.h"

int validaLegajo(int legajo[], int indice)
{
	if(legajo[indice] < 9999 && legajo[indice] > 0)
		return 1;
		
	else 
		return 0;
}
