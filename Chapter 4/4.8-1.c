#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char F_name[15];
	char L_name[15];
	
	printf("Please enter your first name:");
	scanf("%s", F_name);
	printf("Enter your last name:");
	scanf("%s", L_name);
	printf("Hello %s %s!", F_name, L_name);

}