#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double compute(double a, double b);

int main()
{
	double num_1, num_2;
	_Bool good;

	printf("Enter two numbers\n");
	printf("(enter a letter to quit such as q)\n");
	good = scanf("%lf %lf", &num_1, &num_2) == 2;

	while (good == 1) {
		printf("%.3lf", compute(num_1, num_2));
		printf("(enter a letter to quit such as q)\n");
		good = scanf("%lf %lf", &num_1, &num_2) == 2;
		
	}
	return 0;
}

double compute(double a, double b)
{
	double cpt;

	cpt = (a - b) / (a * b);
	
	return cpt;
}