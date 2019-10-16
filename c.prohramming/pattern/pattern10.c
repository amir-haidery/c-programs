#include<stdio.h>
#include<conio.h>
/*
A B C D E
a b c d e
A B C D E
a b c d e
A B C D E
*/

int main()
{
	int j,i;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i%2==0)
			printf("%c ",j+96);
			else
			printf("%c ",j+64);
		}
		printf("\n");
	}
	return 0;
}
