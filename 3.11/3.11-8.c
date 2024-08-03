#include <stdio.h>
int main()
{
	float pint, cup, ounce, spoon, tsp;
	

	printf("Please enter the number of cup:");
	scanf_s("%F", &cup);
	
	pint = cup / 2;
	ounce = cup * 8;
	spoon = cup * 16;
	tsp = cup * 48;
	
	printf("%.3f cup is %.3f pint\n",cup,pint);
	printf("%.3f cup is %.3f ounce\n",cup,ounce);
	printf("%.3f cup is %.3f spoon\n",cup,spoon);
	printf("%.3f cup is %.3f tsp\n",cup,tsp);
	
	return 0;

}