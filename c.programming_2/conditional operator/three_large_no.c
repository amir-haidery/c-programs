#include<stdio.h>
#include<conio.h>


int main()
{
	int num1,num2,num3;
	int large;
	
	printf("Enter three number to findout which one is laragest:\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1>num2 && num1>num3)
	{
		large=num1;
	}
	else if(num2>num1 && num2>num3)
	{
		large=num2;
	}
	else
	
	large=num3;
	
	printf("The largest number between %d and %d and %d is = %d",num1,num2,num3,large);
	
	return 0;
}
