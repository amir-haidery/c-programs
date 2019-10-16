#include<stdio.h>
#include<conio.h>
/*
 E D C B A
 D C B A
 C B A
 B A
 A
 */


int main()
{
		int i,j;
		
	printf("\n");
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf(" %c",j+64);
		}
		printf("\n");
	}
	return 0;
}
