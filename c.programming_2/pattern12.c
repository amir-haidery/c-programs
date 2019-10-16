#include<stdio.h>
#include<stdlib.h>

int main()
{
	int j,i,num;
	
	printf("Enter the line number\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		for(j=num;j=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
