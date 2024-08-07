#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main()
{
	char Fname[10];
	//char Lname[10];
	
	printf("Please enter your first name:");
	scanf("%s", Fname);

	printf("\"%s\"\n", Fname);
	printf("\"%20s\"\n", Fname);
	printf("\"%-20s\"\n", Fname);
	printf("\"%*s\"", strlen(Fname) + 3, Fname);

	return 0;
}

