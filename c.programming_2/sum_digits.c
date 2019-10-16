#include<stdio.h>
#include<stdlib.h>


int main()
{
	int rem,sum=0,num;
	
	printf("enter the number:\n");
	scanf("%d",&num);
	
	while(num !=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
		
	}
	printf("the sum of number is %d \n",sum);
}
