#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i;
	int min, max;

	printf("Please enter the upper and lower limits of the number:");
	scanf("%d %d", &min, &max);
	for (; min <= max; min++)
		printf("%5d %5d\n", min, min * min);

	return 0;
}