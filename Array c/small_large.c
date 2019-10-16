#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i,num;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	printf("Enter %d elements:\n",num);
	
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("The elements of Array are :\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	int min,max;
	min=max=a[0];
	
	for(i=0;i<num;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			
		}
	    if(a[i]>max)
	    {
	    	max=a[i];
		}
	}
	printf("The smallest no %d \nAnd largest no %d\n",min,max);
}
