#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	float height;
	char name[15];

	printf("Please enter your name:");
	scanf("%s", name);
	printf("Please enter your height in centimeter:");
	scanf("%f", &height);
	printf("%s, you are %.3f meters tall",name ,height/100);

	return 0;
}