#include<stdio.h>
#include<conio.h>


int main()
{
	int prod=1,num,rem;
	
	printf("enter a number:\n");
	scanf("%d",&num);
	
	while(num>1)
	{
		rem=num%10;
		prod=prod*rem;
		num/=10;
	}
	printf("the product of number is %d\n",prod);
	return 0;
}
