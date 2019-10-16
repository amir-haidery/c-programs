#include<stdio.h>
#include<stdlib.h>

int main()
{
	int start,end,prime,i,j;
	
	printf("Enter starting point:\n");
	scanf("%d",&start);
	printf("Enter end point:\n");
	scanf("%d",&end);
	
	for(i=start;i<=end;i++)
	{
		prime=1;
		
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				prime=0;
				break;
			}
		}
		if(prime==1)
		{
			
			printf("prime number = %d\n",i);
		}
	}
	return 0;
}
