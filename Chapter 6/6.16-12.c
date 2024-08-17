#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int input = 0;
	float i;
	double sum_1, sum_2;
	int OAE;
	
	printf("Enter the number of calculations(<=0 to quit):");
	scanf("%d", &input);
	while (input > 0) {
		for (i = 1.0, sum_1 = 0; i <= input; i++)
			sum_1 += 1 / i;
		for (i = 1.0, sum_2 = 0, OAE = 1; i <= input; i++, OAE *= -1)
			sum_2 += (1 / i) * OAE;
		printf("the result of 1 + 1/2 + 1/3 +... is %lf\n", sum_1);
		printf("the result of 1 - 1/2 + 1/3 -... is %lf\n", sum_2);
		printf("You can enter again(<=0        to quit):");
		scanf("%d", &input);
	}
	
	return 0;
}


