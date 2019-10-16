#include<stdio.h>
#include<conio.h>


int main()
{
	int j,i;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d ",j%2);
		}
		printf("\n");
		
	}
	return 0;
}
