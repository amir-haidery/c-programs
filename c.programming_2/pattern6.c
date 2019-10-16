/*
 E D C B A
 E D C B A
 E D C B A
 E D C B A
 E D C B A
 */


#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=5;j>0;j--)
		{
			printf(" %c",j+64);
		}
		printf("\n");
	}
}
