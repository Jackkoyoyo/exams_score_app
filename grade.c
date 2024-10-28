#include <stdio.h>
#include "main.h"

/**
 * grades - A function that return the grade of student
 * @g :pointer value to check
 * return : no return
 */

void grade(int g, int *grad)
{
	if (g > 100)
	{
		return;
	}
	else
	{
	switch (g)
	{
		case 80 ... 100:
			*grad = 1;
			break;
		case 70 ... 79:
			*grad = 2;
			break;
		case 60 ... 69:
			*grad = 3;
			break;
		case 55 ... 59:
			*grad = 4;
			break;
		case 50 ... 54:
			*grad = 5;
			break;
		case 45 ... 49:
			*grad = 6;
			break;
		case 40 ... 44:
			*grad = 7;
			break;
		case 35 ... 39:
			*grad = 8;
			break;
		case 0 ... 34:
			*grad = 9;
			break;
		default:
			printf("You didnt enter any number\n");
			break;
		}
	}
	
}
