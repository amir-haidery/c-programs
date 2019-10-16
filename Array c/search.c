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
	int n,found=0;
	printf("Enter the number that to find:\n");
	scanf("%d",&n);
	
	for(i=0;i<num;i++)
	{
		if(a[i] == n)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("\nelements to search is %d:\n ",n);
		printf("\n%d element is in index [%d] and position %d",n,i,i+1);
	}
	else
	{
		printf("\nelements is not found it\n");
	}
}
