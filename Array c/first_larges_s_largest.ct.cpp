#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


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
	int max1,max2;
	max1=max2=INT_MIN;
	for(i=0;i<num;i++)
	{
		if(a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
		else if(a[i] > max2 && a[i] < max1 )
		{
			max2=a[i];
		}
	}
	printf("the first largest %d\n second largest %d\n",max1,max2);
}
