#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void temperatures(double t);

int main()
{
	double n = 0;
	int i = 0;
	printf("Enter the temperatures in Fahrenheit:");
	
	while (scanf("%lf", &n) == 1) {
		temperatures(n);
		printf("Enter a number again or enter q to quit:");
	}
	
	printf("DONE");

	return 0;
}

void temperatures(double t)
{
	double Celsius, K_temperature, Fahrenheit;
	Fahrenheit = t;
	Celsius = 5.0 / 9.0 * (Fahrenheit - 32.0);
	K_temperature = Celsius + 273.15;
	printf("%.2lf Fahrenheit is %.2lf Celsius\n", Fahrenheit, Celsius);
	printf("%.2lf Fahrenheit is %.2lf Kelvin temperature\n", Fahrenheit, K_temperature);
}