#include<stdio.h>
#include<stdlib.h>
#define size 3

int main()
{
	int a[size][size];
	int b[size][size];
	int c[size][size];
	int row,col;
	
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
	printf("Enter the first matrix(B) elements:\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&b[row][col]);
		}
	}
	printf("second matrix(B):\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			printf("%d\t",b[row][col]);
		}
		printf("\n");
	}
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			c[row][col]=a[row][col]+b[row][col];
		}
	}
	printf("subtrct of two matrixs(A)+(B):\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			printf("%d\t",c[row][col]);
		}
		printf("\n");
	}
}
