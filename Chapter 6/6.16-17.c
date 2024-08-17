#include <stdio.h>

int main()
{
	int year = 0;
	double money = 1E6;
	float RATE = 0.08;
	
	while (money >= 0){
		money += money * RATE;
		money -= 1E5;
		year++; 
		printf("There still left %lf dollar in the money\n",money);
	}
	printf("Chuckie Lucky's money will run out in %d years\n",year);
	
	return 0;
} 