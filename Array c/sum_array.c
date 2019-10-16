#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i,num,sum=0;
	
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
		sum=sum+a[i];
	}
	printf("\nThe sum array is %d\n",sum);
}
