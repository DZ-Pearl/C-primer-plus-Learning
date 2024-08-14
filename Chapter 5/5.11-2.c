#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num = 0;
	int i = 0;
	
	printf("Please a integer:");
	scanf("%d", &num);

	while (i++ <= 10) {
		printf("%d\n", num);
		num++;
	}

	return 0;
}