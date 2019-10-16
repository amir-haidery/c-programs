#include<stdio.h>
#include<conio.h>


int main()
{
	int n,num;
	long fact=1;
	
	printf("Enter a number:\n");
	scanf("%d",&num);
	
	n=num;
	if(n<0)
	printf("no factorial of negative no:\n");
	else
	{
		while(n>1)
		{
			fact=fact*n;
			n--;
		}
		printf("factorial of %d = %ld",num,fact);
	}
	return 0;
}
