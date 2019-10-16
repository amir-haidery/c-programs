/*
1 2 3 4 5
* * * * *
1 2 3 4 5
* * * * *
1 2 3 4 5
*/
#include<stdio.h>
#include<conio.h>


int main()
{
	int j,i;
	
	for(i=1;i<=5;i++)
	{
		printf("\n");
		for(j=1;j<=5;j++)
		{
			if(i%2==0)
			printf("* ");
			else
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
