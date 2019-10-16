#include<stdio.h>
#include<stdlib.h>


int main()
{
	int num,i,j,k;
	
	printf("Enter the number of Arrar:\n");
	scanf("%d",&num);
	
	int a[num];
	
	printf("Enter %d elements:\n",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("elements of Array are:\n ");
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a[i] == a[j])
			{
				for(k=j;k<num;k++)
				{
					a[k]=a[k+1];
				}
				j--;
				num--;
			}
			
		}
	}
	printf("Elements of Array after deleting the diplicate value:\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}
