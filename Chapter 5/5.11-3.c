#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	const WEEK = 7;
	int day, week,left;
	printf("Enter tne number of day:");
	scanf("%d", &day);
	while (day > 0) {
		week = day / WEEK;
		left = day % WEEK;
		printf("%d days are %d weeks and %d days\n", day, week, left);
		printf("enter number<=0 to quit\n");
		scanf("%d", &day);
	}

	return 0;
}
