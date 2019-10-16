#include<stdio.h>


int main()
{
	int row,col,j,i;
	printf("Enter the row number:\n");
	scanf("%d",&row);
	printf("Enter the column number:\n");
	scanf("%d",&col);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			if(i==1 || i==row  || j==1 || j==col || i==j )
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;

	
}
