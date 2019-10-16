//dispaly a natural number from desier number from start to end?
#include<stdio.h>
#include<conio.h>


int main()
{
	int i,start,end;
	
	printf("Enter start value:\n");
	scanf("%d",&start);
	printf("Enter end value:\n");
	scanf("%d",&end);
	
	for(i=start;i>=end;i--)
	{
		printf("==>%d\n",i);
	}
	return 0;
	
}
