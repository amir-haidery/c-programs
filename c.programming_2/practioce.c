#include<stdio.h>
#include<stdlib.h>



int main()
{
	int exponent,base;
	long long power=1;
	
	printf("Enter the base:\n");
	scanf("%d",&base);
	printf("Enter the base:\n");
	scanf("%d",&exponent);
	int i;
	for(i=1;i<=exponent;i++)
	{
		power=power*base;
	}
	printf("%d ^ %d = %d",base,exponent,power);
	
	return 0;
}
