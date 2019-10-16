#include<stdio.h>
#include<stdlib.h>


int main()
{
	int base,exponent;
	long long power=1;
	
	printf("Enter the exponent:\n");
	scanf("%d",&exponent);
	printf("Enter the base:\n");
	scanf("%d",&base);
	int i;
	for(i=1;i<=exponent;i++)
	{
		power=power * base;
	}
	printf(" %d^%d = %d",base,exponent,power);
	
}
