#include <stdio.h>
#include "main.h"

/**
 * pmark - A function that prints pass or not 
 * @pm : value to check
 * return nothing
 */

void pmark(int a)
{

	if (a > 100)
	{
		return;
	}
	else
	{
		switch (a)
		{
			case 80 ... 100:
				printf("You had grade 1, you are excellent!\n");
				break;
			case 70 ... 79:
				printf("You had grade 2, you are very good!\n");
				break;
			case 60 ... 69:
				printf("You had grade 3, you are good!\n");
				break;
			case 55 ... 59:
				printf("You had grade 4, thats a high average,not bad\n");
				break;
			case 50 ... 54:
				printf("You had grade 5, your score is average\n");
				break;
			case 45 ... 49:
		 		printf("You had grade 6, your average is low\n");
				break;
			case 40 ... 44:
				printf("You had grade 7, your mark is low\n");
				break;
			case 35 ... 39:
				printf("You had grade 8, your mark is lower\n");
				break;
			case 0 ... 34:
				printf("You had grade 9, your mark is lowest\n");
				break;
			default:
				printf("You didnt enter any number\n");
				break;
		}
	}

}
