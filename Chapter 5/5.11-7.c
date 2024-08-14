#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void cube(double c);

int main()
{
	double n = 0;
	
	printf("Enter a double number:");
	scanf("%lf", &n);
	cube(n);

	return 0;
}

void cube(double c)
{
	printf("the cube of %.3f is %.3f\n", c, c * c * c);
}
