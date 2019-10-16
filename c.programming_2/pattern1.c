#include<stdio.h>
#include<stdlib.h>


int main()
{
	int j,i;
	
	for(i=1;i<=5;i++)
	{
		for(j=4+i;j>=i;j--)
		{
			printf(" %c",j+64);
		}
		printf("\n");
	}
}
