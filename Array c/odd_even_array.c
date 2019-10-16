#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i,j,num;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	printf("Enter %d elements:\n",num);
	
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<i+2;j++)
		{
			a[i]=j;
		}
		
	}
	printf("The elements of Array are :\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	int sum_even=0,sum_odd=0;
	int even=0,odd=0;
	for(i=0;i<num;i++)
	{
		if(a[i]%2==0)
		{
			even++;
			sum_even+=a[i];
		}
		else if(a[i]%2!=0)
		{
			odd++;
			sum_odd+=a[i];
		}
	}
	printf("The number of even %d and number of odd is %d\n",even,odd);
	printf("The sum of even %d and sum of odd is %d\n",sum_even,sum_odd);
}
