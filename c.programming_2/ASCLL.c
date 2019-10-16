#include<stdio.h>
#include<conio.h>

int main()
{
	char a;
	int i;
	printf("Enter any character to start:\n");
	scanf("%c",&a);
	
	for(i=1;i<=255;i++)
	{
		printf("The ASCLL IS %c = %d\n",i,i);
	}
}
