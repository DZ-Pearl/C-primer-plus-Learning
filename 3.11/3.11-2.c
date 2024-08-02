#include <stdio.h>            //输入ASCII码值显示对应的字符
 int main()
 {
	 int ch;

	 printf("Please enter a ASCII value：");
	 scanf_s("%d",&ch);
	 printf("ASCII code is %c\n", ch);		
	 
	 return 0;
 }