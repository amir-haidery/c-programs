#include<stdio.h>
#include<stdlib.h>

int main()
{
	int j,i,num,n=1;
	
	printf("Enter the line number\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		n=i;
		for(j=1;j<=i;j++,n++)
		{
			printf(" %d",n);
			
		}
		printf("\n");
	}
}
