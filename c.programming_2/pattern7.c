#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i,j;
	
	for(i=65;i<=86;)
	{
		for(j=1;j<=5;j++)
		{
			printf(" %c",i++);
		}
		printf("\n");
	}
}
