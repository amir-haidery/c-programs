#include<stdio.h>
#include<conio.h>
#define size 3


int main()
{
	int a[size][size];
	int b[size][size];
	int c[size][size];
	int row,col;
	printf("Enter the elements of first(A) matrix:\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&a[row][col]);
			
		}

	}
	printf("Enter the elements of second(B) matrix:\n");
	for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			scanf("%d",&b[row][col]);
			
		}

	}
	printf("the matrix(A) is below:\n");
		for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			printf("%d\t",a[row][col]);
			
		}
		printf("\n");
	}
	printf("the matrix(B) is below:\n");
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
	printf("the matrix(B +A) is below:\n");
		for(row=0;row<size;row++)
	{
		for(col=0;col<size;col++)
		{
			printf("%d\t",c[row][col]);
			
		}
		printf("\n");
	}
	
}
