#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	float Mb, MB, time;

	printf("enter your downloadspeed(Mb/s):");
	scanf("%f", &Mb);
	printf("enter your file size(MB):");
	scanf("%f", &MB);
	time = MB * 8 / Mb;
	printf("At %.2f Mb/s, a file of %.2f MB\n", Mb, MB);
	printf("downloads in %.2f seconds.\n", time);

	return 0;


}