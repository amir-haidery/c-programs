#include<stdio.h>
#include<conio.h>


int main()
{
	int num,sum=0,rem;
	
	printf("enter a number:\n");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("sum of digit is = %d",sum);
	
	return 0;
}
