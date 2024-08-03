#include <stdio.h>
int main()
{
	float water_atom = 3.0e-23;
	int quart = 950;
	float weight;
	printf("Please enter the quart of water:");
	scanf_s("%f", &weight);
	printf("\n%.2f quart water have %e water atom", weight, quart * weight/water_atom);
	
	return 0;
}