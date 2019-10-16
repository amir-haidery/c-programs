#include<stdio.h>
#include<conio.h>
#include<string.h>


int main()
{
	char str[20];
	int i,len=0;
	
	printf("Enter the string:\n");
	gets(str);
	
	printf("string is  :%s",str);
	strlen(str);
	for(i=0;str[i]!='\0';i++)
	len++;
	//for(i=0;str[i]!="\0";i++,len++);
	printf("\nlenght string is : %d",len);
	printf("\nlenght string is : %d",strlen(str));
	
	return 0;
}
