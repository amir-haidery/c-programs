#include<stdio.h>
#include<stdlib.h>

int main()
{
	int j,i;
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=4+i;j++)
		{
			printf("%c",j+64);
			
		}
		printf("\n");
	}
}
