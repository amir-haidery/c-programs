#include<stdio.h>
#include<conio.h>


int main()
{
	int j,i,x=1,col,row;
	printf("Enter column number:\n");
	scanf("%d",&col);
	printf("Enter row number:\n");
	scanf("%d",&row);
	
	for(i=1;i<=col;i++)
	{
		for(j=1;j<=row;j++)
		{
			printf("%4d",x++);
		}
		printf("\n");
		
	}
	return 0;
}
