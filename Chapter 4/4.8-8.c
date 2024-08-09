#include <stdio.h>
#define GALLON 3.785
#define MILE 1.609
int main()
{
	float mile,gallon;

	printf("Enter the mileage for the trip in mile:");
	scanf("%f", &mile);
	printf("Enter the amount of gas consumed in gallon:");
	scanf("%f", &gallon);

	printf("\nIn USA, your oil wear is: %.1f mile per gallon\n", mile / gallon);
	printf("And,in UK , your oil wear is: %.1f liter per kilometer\n", (gallon * GALLON) / (mile * MILE));

	return 0;
}