#include <stdio.h>

int sum(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j);

int main()
{
	float marks[10];
	int i;
	float *add;
	float val;

	for (i = 0; i <= 9; i++)
	{
		printf("Kindly enter your mark\n");
		scanf("%f", &marks[i]);
	}
	printf("Your marks are :\n");
	for (i = 0; i <= 9; i++)
	{
		printf("%.2f", marks[i]);

		printf(",");

		add = &marks[i];
		float val = *add;
	}

	float total;

	printf("%d\n", sum(marks[0], marks[1], marks[2],marks[3], marks[4], marks[5], marks[6], marks[7], marks[8], marks[9]));
	
	return 0;
}

int sum(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j)
{
	return (a + b + c + d + e + f + g + h + i + j);
}
