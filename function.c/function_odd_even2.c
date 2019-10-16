#include<stdio.h>
#include<conio.h>
int even(int num)
{
	return !(num & 1);
}
int main()
{
	int n;
	printf("Enter the numner :\n");
	scanf("%d",&n);
	
	if(even(n))
	{
		printf("the number %d is even\n",n);
		
	}
	else
	{
		printf("the number %d is odd\n ",n);
	}
	
}
