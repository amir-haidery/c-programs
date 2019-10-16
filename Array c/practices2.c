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
	int j,k,count=0;
	for(i=0;i<num;i++)
	{
	   for(j=i+1;j<num;j++)
	   {
	   	if(a[i] == a[j])
	   	{
	   		count++;
	   		for(k=j;k<num;k++)
	   		{
	   			a[k]=a[k+1];
			   }
			   num--;
		   }
		   
	   }
	}
	printf("Elements of Array after deleting %d duplicate elements are :\n ",count);
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}
