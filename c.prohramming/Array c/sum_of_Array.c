#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,num,sum=0;
	printf("Enter the number of element:\n");
	scanf("%d",&num);
	
	int a[num];
	
	printf("Enter %d value and find the sum of them:\n",num);
	
	for(i=0;i<num;i++)
	{
		printf("Enter the a[%d]\n",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\nThe elements of Array are:\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	printf("\n the sum of aarray are = %d\n",sum);
}
