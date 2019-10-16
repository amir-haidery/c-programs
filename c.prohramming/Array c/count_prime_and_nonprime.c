#include<stdio.h>
#include<conio.h>



int main()
{
	int num,i,k,j,prime,sum=0,sum1=0;
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	for(i=0;i<num;i++)
	{
		for(j=i;j<=i+2;j++)
		{
			a[i]=j;
		}
	}
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	printf("\nThe prime number of Array:\n");
	for(i=0;i<num;i++)
	{
		prime=1;
		for(k=2;k<=a[i]/2;k++)
		{
			if(a[i]%k==0)
			{
				prime=0;
				if(prime==0)
				{
					sum1+=a[i];
				}
				break;
			}
		
		}
		if(prime==1)
		{
			sum+=a[i];
			printf("a[%d] = %d\n",i,a[i]);
		}
	}
	printf("The sum of prime No. %d\n The sum nonprime No. %d\n",sum,sum1);
	
}
