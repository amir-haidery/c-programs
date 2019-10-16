#include<stdio.h>
#include<conio.h>

int main()
{
	int rem,num,sum=0;
	
	printf("enter a number:\n");
	scanf("%d",&num);
	
	for( ;num>0;num/=10)
	{
		rem=num%10;
		sum+=rem;
		
	}
	printf("sum of digits are =%d",sum);
	
	return 0;
}
