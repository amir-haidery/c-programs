#include<stdio.h>
#include<string.h>


int main()
{
	char str[20];
	
	printf("Enter the string:\n");
	gets(str);
	printf("\n the string is : %s",str);
	
	strlwr(str);
	strrev(str);
	printf("\n The revers of string is %s\n",str);
	printf("\n The LOWER of string is %s\n",strrev(str));
}
