
/*******************************************************
 * Program to find the factorial of a number
********************************************************/

#include<stdio.h>


int main()
{
	int i;
    int fact=1;
	int num;
	
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	for(i=num;i>0;i--)
	{
		fact = fact*i;
		
	}
	printf("the factor of %d is =%d:\n",num,fact);
	
	return 0;
}
