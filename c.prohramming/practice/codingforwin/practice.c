#include<stdio.h>


int main()
{
	int sum=0,i,end,start;
	
	printf("Enter starting point:\n");
	scanf("%d",&start);
	printf("Enter ending point:\n");
	scanf("%d",&end);
	
	printf("Natural number from %d to %d\n",start,end);
	
	
	for(i=start;i<=end;i+=2)
	{
	    if(i%2==0)
		printf("==> %d\n",i);
		sum+=i;
	}
	printf("sum of even natural number =%d:\n",sum);
	sum=0;
	printf("part 2\n");
		if(start%2==0)
	{
		start++;
	}
	for(i=start;i<=end;i+=2)
	{
	    if(i%2!=0)
		printf("==> %d\n",i);
		sum+=i;
	}
	printf("sum of odd natural number =%d:\n",sum);
	return 0;
}
