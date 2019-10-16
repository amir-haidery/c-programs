#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	
	printf("Enter a character:\n");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='A' ||ch=='e' ||ch=='E' || ch=='i' || ch=='I'||ch=='o' || ch=='O' || ch=='u' || ch=='U')
	{
		printf("%c is vowel\n",ch);
	}
	else if(( ch>='A' && ch>='a' ) || ( ch<='z' ||ch<='Z'))
	{
		printf("%c is consonant\n",ch);
	}
	else
	printf("%c is not a character\n",ch);
	
	return 0;
}
