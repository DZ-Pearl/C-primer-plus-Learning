#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num[8];
	int  i;

	printf("Enter 8 numbers :");
	for (i = 0;i<=7;i++)
		scanf("%d", &num[i]);

	for (i = 7; i >= 0; i--)
		printf("%d ", num[i]);

	return 0;
}