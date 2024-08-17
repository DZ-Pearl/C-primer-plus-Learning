#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num_1, num_2;
	int sum, min;
	_Bool right;
	printf("Enter lower and upper integer limits:");
	right = (scanf("%d %d", &num_1, &num_2) == 2);
	
	while (right == 1 && num_1 < num_2){
			for (sum = 0, min = num_1; min <= num_2; min++)
				sum += min * min;

			printf("The sums of the squares from %d to %d is %d\n", num_1 * num_1, num_2 * num_2, sum);
			printf("Enter next set of limits");
			printf("or enter q to quit:\n");
			right = (scanf("%d %d", &num_1, &num_2) == 2);
	}
	printf("Done");
	
	return 0;
}