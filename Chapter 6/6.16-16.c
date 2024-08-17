#include <stdio.h>
#define DAP 0.1
#define DEI 0.05

int main()
{
	const investment = 100;
	double dap = 100, dei = 100;
	int year = 0;
	
	while(dap >= dei){
		
		dap += investment * DAP;
		dei += dei * DEI;
		year++;
	}
	
	printf("this year is %d\n",year);
	printf("Daphne invest %.2lf ,Deidre invset %.2lf\n",dap,dei);
	
	return 0;
		
}