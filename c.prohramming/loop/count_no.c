#include<stdio.h>
#include<conio.h>


int main()
{
	int n,count=0;
	printf("enter a number\n");
	scanf("%d",&n);
	
	do
	{
		n=n/10;
		count++;
	}while(n>0); // that loop work till the number is greater then zero
	
	printf("number of digit = %d",count);
	
	return 0;
}
