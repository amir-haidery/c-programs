#include<stdio.h>
#include<stdlib.h>

int main()
{
	int start,end,prime,i,j,sum=0;
	int count=0;
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
			count++;
			sum+=i;
			printf("prime number = %d\n",i);
		}
	
	
	}
		
	printf("The sum of prime number is : %d\n",sum);
	
	return 0;
}
