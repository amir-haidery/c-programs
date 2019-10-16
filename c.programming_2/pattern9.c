#include<stdio.h>
#include<stdlib.h>

int main()
{
	int j,i,num;
	
	printf("Enter the line number\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		for(j=i;j>0;j--)
		{
			printf(" %d",j);
			
		}
		printf("\n");
	}
}
