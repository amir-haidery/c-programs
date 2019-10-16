#include<stdio.h>

int main()
{
	int count,i,num;
	
	printf("enter a number:\n");
	scanf("%d",&num);
	
	while(num>0)
	{
		num/=10;
		count++;
	}
	printf(" number of digit =%d\n",count);
}
