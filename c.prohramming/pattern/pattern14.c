#include<stdio.h>
#include<conio.h>

int main()
{
	int j,i;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
