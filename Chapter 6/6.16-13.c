#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int square[8];
	int i, j;

	for (i = 0, j = 2; i < 8; i++, j *= 2)
		square[i] = j;
	i = 0;
	do {
		printf("%d\n", square[i++]);
	} while (i < 8);

	return 0;
}