#include<stdio.h>
#include<conio.h>


int main()
{
	int num,rem,sum=0;
	
	printf("Enter a Number:\n");
	scanf("%d",&num);
	
	while(num>0) //loop shoud be continue till the number become zero
	{
		
		rem=num%10; //to sperate the number and add to sum
		sum=sum+rem;
		num=num/10; // to delete the number
	}
	printf("The sum of Number is = %d\n ",sum);
	
	return 0;
}
