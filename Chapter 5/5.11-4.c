#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define INCHES 2.54
#define FEET_PER_INCHES 12
int main()
{
	float cm = 0;
	float left;
	float inches;
	int feet;
	printf("Enter a height centimeters:");
	scanf("%f",&cm);
	inches = cm / INCHES;
	while (cm > 0) {
		feet = inches / FEET_PER_INCHES;
		left = inches - feet * FEET_PER_INCHES;
		printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, left);
		printf("Enter a height centimeters(<=0 to quit):");
		scanf("%f",&cm);
	}

	return 0;
}