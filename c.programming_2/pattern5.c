/*
 E E E E E
 D D D D D
 C C C C C
 B B B B B
 A A A A A
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int j,i;
	
	for(i=5;i>0;i--)
	{
		for(j=1;j<=5;j++)
		{
			printf(" %c",i+64);
			
		}
		printf("\n");
	}
}
