#include<stdio.h>
#include<conio.h>
#define size 3


int main()
{
	int a[5][5];
	int b[5][5];
	int c[5][5];
	int row,col;
	printf("Enter the elements of first matrix:\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&a[row][col]);
			
		}

	}
	printf("the matrix is below:\n");
		for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			printf("%d\t",a[row][col]);
			
		}
		printf("\n");
	}
}
