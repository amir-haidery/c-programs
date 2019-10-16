#include<stdio.h>
#include<stdlib.h>


int main()
{
	int last_digit,first_digit,num,n;
	int sum=0;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	last_digit=num%10;
	
	
	while(num>10)
	{
		num=num/10;
	}
	printf("==> %d\n",num);
	first_digit=num;
	sum=first_digit+last_digit;
	printf("The sum of first and last digit is %d \n",sum);
}
