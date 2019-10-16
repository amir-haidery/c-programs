#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,i,position,n;
	
	printf("Enter the number of elements:\n",num);
	scanf("%d",&num);
	
	int a[num];
	
	printf("Enter the %d elements:\n",num);
	
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements of Array are :\n");
	
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	printf("Enter the number to be insert:\n");
	scanf("%d",&n);
	printf("Enter position the element to insert:\n");
	scanf("%d",&position);
	
	if(position > num+1 || position <=0 )
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
		a[position -1]=n;
		
	}
	printf("Elements of Array after insertion:\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}
