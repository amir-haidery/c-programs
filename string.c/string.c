#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[20];
	printf("%d\n%d\n%d\n",str,&str,&str[0]);
	printf("\nEnter the string:\n");
	
	scanf("%[^\n]s",&str);
	
	printf("\nstring is %s",str);
}
