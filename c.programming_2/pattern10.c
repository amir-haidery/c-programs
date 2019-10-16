#include<stdio.h>
#include<stdlib.h>

int main()
{
	int j,i,num;
	
	printf("Enter the line number\n");
	scanf("%d",&num);
	
	for(i=num;i>0;i--)
	{
		for(j=i;j<=num;j++)
		{
			printf(" %d",i);
			
		}
		printf("\n");
	}
}
