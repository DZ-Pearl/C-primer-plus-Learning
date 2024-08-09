#include <stdio.h>
#include <float.h>
int main()
{
	float num_1 = 1.0 / 3.0;
	double num_2 = 1.0 / 3.0;

	printf("%.6f %.6f\n", num_1, num_2);
	printf("%.12f %.12f\n", num_1, num_2);
	printf("%.16f %.16f\n", num_1, num_2);
	printf("%d %d\n", FLT_DIG, DBL_DIG);

	return 0;
	//不一致，超过float精度后结果有差异

}