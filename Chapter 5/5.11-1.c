#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	const  MINUTES = 60;		//Ò»·ÖÖÓ60Ãë
	int hours, min, left;

	printf("Enter the number of minutes:");
	scanf("%d", &min);
	
	while (min > 0) {
		hours = min / MINUTES;
		left = min % MINUTES;
		printf("%d minutes is %d hous and %d minutes\n", min, hours, left);
		printf("##########if you want to quit, enter the number <= 0##########");

		scanf("%d", &min);
	}
	
	return 0;
}