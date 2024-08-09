#include <stdio.h>
#include <string.h>
int main()
{
	int f_num, l_num;
	char fn[10];		//first name
	char ln[10];		//last name
	
	printf("Enter your first name:");
	scanf("%s", fn);
	printf("Enter your last name:");
	scanf("%s", ln);
	//字母数与结尾对齐
	printf("%s %s\n", fn, ln);
	printf("%*d %*d\n", strlen(fn), strlen(fn), strlen(ln), strlen(ln));
	//字母数与开头对齐
	printf("\n%s %s\n", fn, ln);
	printf("%-*d %-*d\n", strlen(fn), strlen(fn), strlen(ln), strlen(ln));

	return 0;
}