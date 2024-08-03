#include <stdio.h>
int main()
{
	float sec = 3.156e7;
	int age;
	printf("Please enter your age:");
	scanf_s("%d", &age);
	printf("\nYou've lived for %e seconds", sec * age);

	return 0;
}