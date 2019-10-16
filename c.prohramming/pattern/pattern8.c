#include<stdio.h>
#include<conio.h>
/*
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9
*/

int main()
{
	int j,i;
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=i+4;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
