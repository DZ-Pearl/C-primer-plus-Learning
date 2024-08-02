#include <stdio.h>
int main()
{
	int toobig = 2e15;
	printf("%d\n", toobig);				//整数上溢

	float toobig_2 = 3.4e38 * 100.0f;
	printf("%e\n", toobig);				//浮点数上溢

	float toosmall = 0.1234e-112 / 10;
	printf("%e\n", toosmall);			//浮点数下溢
	
	
	
	
	
	return 0;



}