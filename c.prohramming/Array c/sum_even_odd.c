#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,num,sum_even=0,sum_odd=0,sum=0;
	
	printf("Enter the elements of Array:\n");
	scanf("%d",&num);
	
	int a[num];
	printf("Enter %d value:- \n",num);
	for(i=0;i<num;i++)
	{
		printf("Enter a[%d] \n ",i);
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			sum_even+=a[i];
		}
		if(a[i]%2!=0)
		{
			sum_odd+=a[i];
		}
		
	}
	sum=sum_even+sum_odd;
	
	printf("Sum of even number of Array = %d\n",sum_even);
	printf("Sum of odd number of Array = %d\n",sum_odd);
	printf("Sum of even and odd number = %d\n",sum);
}
