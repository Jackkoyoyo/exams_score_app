#include <stdio.h>


void avgsum(float a, float b, float *s, float *av);
int main()
{
	float a = 40;
	float b = 50;
	float sum, avg;

	avgsum(a, b, &sum, &avg);

	printf("The sum of a and b is %f and the average of a and b is %f\n", sum, avg);
	
	return (0);
}

void avgsum(float a, float b, float *s, float *av)
{
	*s = a + b;
	*av = (a + b)/2;
}
