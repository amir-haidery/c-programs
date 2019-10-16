#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,prime,end;
	
	printf("Enter a number:\n");
	scanf("%d",&end);
	
	for(i=2;i<=end;i++)
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
			printf("The prime Number is = %d\n",i);
		}
	}
	return 0;
	
	
}
