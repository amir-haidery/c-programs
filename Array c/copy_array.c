#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i,num;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	int b[num];
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
	
	for(i=0;i<num;i++)
	{
		b[i]=a[i];
	}
	printf("the copy array ARE below:\n");
	for(i=0;i<num;i++)
	{
		printf("b[%d] = %d\n",i,b[i]);
	}
	
}
