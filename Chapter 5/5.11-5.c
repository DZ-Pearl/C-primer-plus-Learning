#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int money = 1,i = 0,day = 0;
	int total = 0;
	printf("enter the number of days:");
	scanf("%d", &day);

	while (i < day) {
		total = money + total;
		money++;
		i++;
	}
	printf("%d", total);
	return 0;
}