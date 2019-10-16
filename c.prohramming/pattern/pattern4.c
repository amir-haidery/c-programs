#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	
	for(i=1;i<=20;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d",i%2);//when odd number divided by 2 reminder become 0  
		}
		printf("\n");
	}
	return 0;
}
