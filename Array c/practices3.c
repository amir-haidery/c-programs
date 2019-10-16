#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i,num;
	
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num],b[100];
	
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
	
	int index1,index2;
	index1=num-1;
	index2=0;
	while(index1>=0)
	{
		b[index2]=a[index1];
		index1--;
		index2++;	
	}
	printf("The reverse elements of Array are :\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,b[i]);
	}
	
}
