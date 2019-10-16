#include<stdio.h>
#include<conio.h>


int main()
{
	char ch;
	
	printf("Enter a character:\n");
	scanf("%c",&ch);
	
	
	
	(ch>='a'  && ch<='z') || ( ch>='A' && ch<='Z')?
					printf("Its Alphabet\n"):(ch<='9' && ch >= '1' )?
								printf("Its number\n"):printf("you enter somehting else\n");
}
