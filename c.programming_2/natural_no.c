#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
	int i,j;
	int num;
	
	printf("Enter any number:\n");
	scanf("%d",&num);
	
	
	printf("the natural from to %d are:\n",num);
	
	for(i=1;i<=num;i++)
	{
		printf("==> %d\n",i);
	}
	return 0;
	
	
	
}
