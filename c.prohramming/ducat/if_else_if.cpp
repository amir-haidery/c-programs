#include<stdio.h>
#include<conio.h>


int main()
{
	char ch;
	printf("enter the character\n");
	scanf("%c",&ch);
	
	if(ch>='a' && ch <='z')
	{
	
	
	{
		if(ch =='a' || ch =='e' || ch =='i'|| ch =='o' || ch =='u')
		printf(" Lower case vowel\n");
		else
		printf("lower case consonent\n");
	}
	if(ch>='A' && ch <='Z')
	{
		if(ch == 'A' || ch =='E' || ch == 'I'|| ch == 'O' || ch == 'U')
		printf(" upper case vowel");
		else
		printf("upper case consonent");
	}
	else if(ch>='0' && ch <='9')
	printf("digit");
	else if(ch==' ');
	printf("space");
    }
	else 
	printf("special charater");
	
	return 0;
}
