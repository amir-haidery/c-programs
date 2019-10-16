#include<stdio.h>
#include<stdlib.h>
#define size 3

int main()
{
	int a[size][size];
	int b[size][size];
	int c[size][size];
	int row,col,num;
	
	printf("Enter the first matrix(A) elements:\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	printf("first matrix(A):\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			printf("%d\t",a[row][col]);
		}
		printf("\n");
	}
	printf("Enter the number to multiple to the matrix:\n");
	scanf("%d",&num);
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			a[row][col]=num*a[row][col];
		}
		printf("\n");
	}
	printf("the scaler matrix are follow:\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			printf("%d\t",a[row][col]);
		}
		printf("\n");
	}
	


	
}
