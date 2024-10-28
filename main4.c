#include <stdio.h>
#include "main.h"

int main()
{
	int r = 20;
	int c = 69;
	int f = 90;
	int gr;
	int gr1;
	int gr2;

	grade(r, &gr);

	grade(c, &gr1);

	grade(f, &gr2);

	printf("Your grades are : %d, %d and %d\n", gr, gr1, gr2);

	return (0);
}
