#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
	int i,j;
	int num;
	int sum=0;
	printf("Enter any number:\n");
	scanf("%d",&num);
	
	
	printf("the natural from to %d are:\n",num);
	
	for(i=1;i<=num;i++)
	{
		sum+=i;
		printf("==> %d\n",i);
	}
	printf(" the sum of natiral number are %d:\n",sum);
	return 0;
	
	
	
}
