#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j;
	char ch;
	ch = 'A';

	for (i = 1; i <= 6; i++) {
		for (j = 0; j < i; j++, ch++)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}