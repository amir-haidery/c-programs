#include<stdio.h>
#include<conio.h>

int main()
{
	int start,end,i,sum=0;
	
	printf("Enter the start point:\n");
	scanf("%d",&start);
	printf("Enter the end point:\n");
	scanf("%d",&end);
	
	if(start%2==0)
	{
		start++;
	}
	for(i=start;i<=end;i+=2)
	{
		printf("==> %d\n",i);
		if(i%2!=0)
		printf("==> %d\n",i);
		sum+=i;
	}
	printf("the sum of even number from %d to %d is = %d",start,end,sum);
	
	return 0;
}
