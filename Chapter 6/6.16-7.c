#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char world[20];
	int sub;

	printf("Enter a world:");
	scanf("%s", world);
	sub = strlen(world);

	for (int i = sub - 1; i >= 0; i--)
		printf("%c", world[i]);

	return 0;
}