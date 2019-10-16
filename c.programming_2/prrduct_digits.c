#include<stdio.h>
#include<stdlib.h>


int main()
{
	int rem,prod=1,num;
	
	printf("enter the number:\n");
	scanf("%d",&num);
	
	while(num !=0)
	{
		rem=num%10;
		prod=prod*rem;
		num=num/10;
		
	}
	printf("the sum of number is %d \n",prod);
}
