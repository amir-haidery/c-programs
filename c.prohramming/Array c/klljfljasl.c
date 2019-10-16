#include<stdio.h>
#include<conio.h>
#include<time.h>


int main()
{
	int i,j,num,prime;
	
	printf("Enter the number of Array:\n");
	scanf("%d",&num);
	
	srand(time(NULL));
	int a[num];
	
	for(i=0;i<num;i++)
	{
		a[i]=rand()%10+30;
	}
	printf("The elements of Array are:\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d \n",i,a[i]);
		}
		printf("The prime number of array:\n");
		
		
		for(i=0;i<num;i++)
		{
			prime=1;
			for(j=2;j<a[i]/2;j++)
			{
				if(a[i]%j==0)
				{
					prime=0;
					break;
				}
			}
			if(prime==1)
			{
				printf("a[%d ] = %d\n",i,a[i]);
			}
		}	
	
}
