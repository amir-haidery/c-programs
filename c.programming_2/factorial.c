#include<stdio.h>
#include<stdlib.h>


int main()
{
	int num,i,fact=1;
	
	printf("Enter any number:\n");
	scanf("%d",&num);
	
	while(num!=0)
	{
		fact=fact*num;
		num--;
	}
	printf("The factorial of number is %d",fact);
	
}
