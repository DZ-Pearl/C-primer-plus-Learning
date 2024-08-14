#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num_1, num_2;
	
	printf("This program computes moduli.\n");
	printf("Enter am integer to serve as the second opwrand:");
	scanf("%d", &num_2);
	printf("Now enter the first operand:");
	scanf("%d", &num_1);
	
	while (num_1 > 0) {
		printf("%d %% %d is %d\n", num_1, num_2, num_1 % num_2);
		printf("Enter next number for first operand(<=0 to quit):");
		scanf("%d", &num_1);
	}

	printf("\nDONE");
	
	return 0;
}