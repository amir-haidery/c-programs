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
	printf("Enter the elements position to delete:\n");
	scanf("%d",&position);

	for(i=position-1;i<num-i;i++)
	{
		a[i]=a[i+1];
	}
	num--;
	printf("elemente of Array after deleted a element are:\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	return 0;
}
