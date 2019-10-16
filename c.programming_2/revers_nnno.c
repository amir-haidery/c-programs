#include<stdio.h>
#include<stdlib.h>


int main()
{
	int revers=0,num,rem;
	
	printf("enter the number:\n");
	scanf("%d",&num);
	
	while(num !=0)
	{
		rem=num%10;
		revers= revers*10+rem;
		num=num/10;
		
	}
	printf("the sum of number is %d \n",revers);
}
