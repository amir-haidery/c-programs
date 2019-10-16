#include<stdio.h>
#include<conio.h>


int main()
{
	int end,sum=0,j,i;
//	printf("Enter starting point to find the porfect number:\n");
//	scanf("%d",&start);
	printf("Enter the end point for perfect number:\n");
	scanf("%d",&end);
	
	for(i=2;i<=end;i+=2)
	{
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			sum=sum+j;
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
		sum=0;
		
	}
}
