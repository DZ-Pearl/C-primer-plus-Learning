#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const DUNBAR = 150;
	int fridens = 5;
	int i = 1;

	while (fridens < 150) {
		fridens = (fridens - i) * 2;
		printf("In %d week Rabnud has %d fridens\n", i, fridens);
		i++;
	}
	printf("After %d weeks the number of Rabnud's fridens is more than Dumbar's nuber(150) ",i-1);
	return 0;
}