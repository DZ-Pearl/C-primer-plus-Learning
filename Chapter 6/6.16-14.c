#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double num[8];
	double sum[8];
	int i;
	
	printf("Enter 8 numbers:\n");
	for (i = 0; i < 8; i++)
		scanf("%lf", &num[i]);
	sum[0] = num[0];
 	for (i = 1; i < 8; i++)
		sum[i] = num[i] + sum[i - 1];
	for (i = 0; i < 8; i++)
		printf("%5.2g", num[i]);
	printf("\n");
	for (i = 0; i < 8; i++)
		printf("%5.2g", sum[i]);

	return 0;
}

