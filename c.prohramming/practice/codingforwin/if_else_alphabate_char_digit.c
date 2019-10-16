#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	
	printf("Enter any caracter:\n");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' ||ch=='I'||ch=='o' ||ch=='O'||ch=='u'||ch=='U')
	{
		printf("its a Alphabate and\n");
		printf("%c is a vowel character\n",ch);
	}
	else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("its a Alphabate and\n");
		printf("%c is a consonant:\n",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("% is Digit\n");
	}
	else
	{
		printf("its special character\n");
	}
	return 0;
}
