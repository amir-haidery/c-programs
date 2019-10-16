#include<stdio.h>
#include<conio.h>

/*
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
*/

int main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d ",i%2);
		}
		printf("\n");
	}
	return 0;
}
