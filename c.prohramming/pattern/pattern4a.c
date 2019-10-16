#include<stdio.h>
#include<conio.h>

/*
  1  2  3  4  5
  6  7  8  9 10
 11 12 13 14 15
 16 17 18 19 20
 21 22 23 24 25
*/

int main()
{
	int i,j;
	
	for(i=1;i<=25;i+=5) //i+=5 for changing the value of j 
	{
		for(j=i;j<=i+4;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
