#include<stdio.h>

int main()
{
	int i,num;
	long long fact=1;
	printf("enter any number to calculate factorial\n");
	scanf("%d",&num);
	
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("factorial %d = %lld",num,fact);
	return 0;
}
