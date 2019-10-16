#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i,start,end;
	
	
	printf("Enter the start number:\n");
	scanf("%d",&start);
	
	printf("Enter the end number:\n");
	scanf("%d",&end);
	int sum=0;
	for(i=start;i<=end;i++)
	{
		sum+=i;
		printf("%d\n",i);
	}
	
	printf("the sum of number is %d\n",sum);
	return 0;
	
	
}
