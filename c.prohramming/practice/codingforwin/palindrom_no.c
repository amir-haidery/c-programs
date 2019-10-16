//find the palindrome number?
#include<stdio.h>
#include<conio.h>

int main()
{
	int num,rem,reverse=0,num2;
	
	printf("Enter a number:\n");
	scanf("%d",&num);
	num2=num;
	while(num !=0)
	{
		rem=num%10;
		reverse=reverse*10+rem;
		num/=10;
	}
	if(num2==reverse)
	{
		printf("%d is palindrome number\n",num2);
	}
	else
	{
		printf("%d is not palindrome number:\n",num2);
	}
}
