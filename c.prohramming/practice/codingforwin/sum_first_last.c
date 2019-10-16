// fintout of sum of first andf last digits of number?
#include<stdio.h>
#include<conio.h>


int main()
{
	int num,sum=0,firstdigit,lastdigit,d;
	
	printf("Enter any number to find sum first and last digits:\n");
	scanf("%d",&num);
	
	lastdigit=num%10;
	d=num;
	
	while(num>=10)
	{
		num/=10;
	}
	firstdigit=num;
	
	sum=firstdigit+lastdigit;
	printf("sum of first and last digits of %d = %d\n",d,sum);
}
