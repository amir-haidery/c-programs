#include<stdio.h>
#include<conio.h>


int main()
{
	int sum=0,num,rem;
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num/=10;
	
	}
	printf("the sum of number %d\n",sum);
}
