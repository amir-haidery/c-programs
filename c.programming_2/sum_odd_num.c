#include<stdio.h>
#include<stdlib.h>



int main()
{
	int i,start,end,sum=0;
	
	
	printf("Enter the lower limit:\n");
	scanf("%d",&start);
	
	printf("Enter the upper limit:\n");
	scanf("%d",&end);
	if(start%2==0)
	{
		start++;
	}
	
	for(i=start;i<=end;i=i+2)
	{
		sum+=i;
		printf("==> %d\n",i);
		
	}
	printf(" the sum of even number %d\n",sum);
}
