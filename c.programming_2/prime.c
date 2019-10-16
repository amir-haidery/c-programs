#include<stdio.h>
#include<stdlib.h>

int main()
{
	int prime,num;
	
	printf("Enter a number:\n");
	scanf("%d",&num);
	
	prime=1;
	
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			prime=0;
		}
	}
	if(prime==1)
	{
		printf("%d is prime number:\n",num);
	}
	else
	{
		printf("%d is not a prime number.\n");
	}
}
