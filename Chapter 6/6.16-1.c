#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char ch;
	int i;
	int alphabet[26];

	for (i = 0, ch = 'a'; i < 26; i++, ch++) {
		alphabet[i] = ch;
		printf("%c", alphabet[i]);
	}
		
	return 0;
}