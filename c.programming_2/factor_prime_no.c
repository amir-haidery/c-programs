#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,prime,num;
	
	printf("Enter a number:\n");
	scanf("%d",&num);
	
	
	
	printf("All prime factor of : %d \n",num);
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
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
			printf(" ==> %d :\n",i);
		}
		
		}
		
	}

	return 0;
}
