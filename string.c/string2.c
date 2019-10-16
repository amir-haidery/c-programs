#include<stdio.h>
#include<conio.h>
#include<string.h>


int main()
{
	char str[20];
	
	printf("Enter the string:\n");
	gets(str);
	
	printf("string is  :%s",str);
	strupr(str);
	printf("\nupper string is : %s",str);
	
	return 0;
}
