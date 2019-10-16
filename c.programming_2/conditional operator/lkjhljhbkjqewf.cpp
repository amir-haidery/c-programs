/*

 Program to find the sum of the digits of a number

*/
#include<stdio.h>
#include<conio.h>


int main()
{
	int sum=0,num,rem;
	
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	while(num !=0)
	{
		rem=num%10;
		sum+=rem;
		num=num/10;
		
	}	
	printf("The sum digits is %d:\n",sum);
	
	return 0;
}
