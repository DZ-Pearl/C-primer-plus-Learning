#include <stdio.h>
int main()
{
	float feet;
	printf("Please enter your height in feet:");
	scanf_s("%f", &feet);
	printf("Your height in centimeter is %g", feet * 2.54);

	return 0;
}