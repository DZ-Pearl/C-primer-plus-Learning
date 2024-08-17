#include <stdio.h>
#include <string.h>
#define LEN 255

int main()
{
	char s[LEN];
	int i = 0;
	printf("Enter some words:");
	while (scanf("%c", &s[i]) && i + 1 < 255 && s[i] != '\n') {
		i++;
	}
	printf("Reversing print the string is: ");
	for (i = strlen(s)-1; i >= 0; i--)
		printf("%c", s[i]);

	return 0;
}

