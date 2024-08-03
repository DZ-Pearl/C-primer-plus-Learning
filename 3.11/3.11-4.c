#include <stdio.h>
int main()
{
	float num;
	printf("Enter a floating-point value:");
	scanf_s("%f", &num);
	printf("fixed_point notation: %f\n", num);
	printf("exponential notation: %e\n", num);
	printf("p notation:%a\n", num);

	return 0;
}