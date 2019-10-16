#include<stdio.h>
#include<stdlib.h>


int main()
{
	int n,revers=0,num,rem;
	
	printf("enter the number:\n");
	scanf("%d",&num);
	n=num;
	while(num !=0)
	{
		rem=num%10;
		revers= revers*10+rem;
		num=num/10;
		
	}
	if(n==revers)
	printf("The %d is palindrome \n",n);
	else
	printf("The %d is not palindrome \n",n);
	
}
