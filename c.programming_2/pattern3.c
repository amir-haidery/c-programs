/*
 E D C B A
 F E D C B
 G F E D C
 H G F E D
 I H G F E
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int j,i;
	
	for(i=1;i<=5;i++)
	{
		for(j=5;j>0;j--)
		{
			printf(" %c",j+63+i);
			
		}
		printf("\n");
	}
}
