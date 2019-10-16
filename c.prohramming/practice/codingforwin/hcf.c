#include<stdio.h>
#include<conio.h>

int main()
{
	int num1,num2,min,hcf=1;
	
	printf("Enter the first number:\n");
	scanf("%d",&num1);
	printf("Enter the second number:\n");
	scanf("%d",&num2);
	
	min=(num1>num2)? num1 : num2;
	int i;
	for(i=1;i<=min;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			hcf=i;
		}
		
	}
	if(hcf>1)
	{
		printf("high common factor of %d and %d is = %d\n",num1,num2,hcf);
	}
	else
	{
		printf(" %d and %d does not have high common factor \n ",num1,num2);
	}
	return 0;
}
