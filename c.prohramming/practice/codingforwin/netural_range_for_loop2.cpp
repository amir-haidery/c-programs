//dispaly a natural number from desier number from start to end?
#include<stdio.h>
#include<conio.h>

int main()
{
	int num,start,end;
	
	printf("Enter strat number:\n");
	scanf("%d",&start);
	printf("Enter end number:\n");
	scanf("%d",&end);
	
	printf("natural number from %d to %d:\n",start,end);
	
	for(num=start;num<=end;num++)
	{
		printf("==>%d\n",num);
	}
	return 0;
}
