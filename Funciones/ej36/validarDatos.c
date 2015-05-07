#include"validarDatos.h"


#include <stdio.h>
#include <stdlib.h>


int validarEmpleado(int vector[], float total)
{
	int i;
	
	if(vector[2] <= 2015 && vector[2] >= 1950)
	{
		if(vector[1] < 13 && vector[1] > 0)
		{
			
			switch(vector[1])
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if(vector[0] <= 31 && vector[0] >=1);
						
					else return 0;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					if(vector[0] <= 30 && vector[0] >=1);
						
					else return 0;
					break;
				case 2:
					if(vector[0] <= 28 && vector[0] >=1);
						
					else return 0;
					break;	
			}
		}
		else 
			return 0;
	}
	else
		return 0;
		
	if(total > 1000 && total < 10000)
		return 1;
		
	else
		return 0;
}
