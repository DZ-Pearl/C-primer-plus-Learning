#include <stdio.h>
int main()
{
	int toobig = 2e15;
	printf("%d\n", toobig);				//��������

	float toobig_2 = 3.4e38 * 100.0f;
	printf("%e\n", toobig);				//����������

	float toosmall = 0.1234e-112 / 10;
	printf("%e\n", toosmall);			//����������
	
	
	
	
	
	return 0;



}