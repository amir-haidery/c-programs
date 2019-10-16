#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i,num,position,n;
	
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
	printf("Enter the number to insert:\n");
	scanf("%d",&n);
	printf("Enter the position to insert the elements:\n");
	scanf("%d",&position);
	
	if(position > num+1 || position <= 0)
	{
		printf("Enter the wrong position:\n");
	}
	else
	{
		num++;
		for(i=num;i>=position;i--)
		{
			a[i]=a[i-1];
		}
		a[position-1]=n;
		
		
		printf("Array elements after insertion:\n");
		for(i=0;i<num;i++)
		{
			printf("a[%d] = %d\n",i,a[i]);
		}
	}
	return 0;
}
