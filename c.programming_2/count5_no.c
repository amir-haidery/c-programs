#include<stdio.h>


int main()
{
	int i,count=0;
	long long int num;
	
	printf("Enter the number to be count:\n");
	scanf("%lld",&num);
	
	while(num !=0)
	{
		
		count++;
		num=num/10;
	}
	printf("The number of digits are %lld\n",count);
}
