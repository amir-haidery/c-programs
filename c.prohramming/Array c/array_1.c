#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,i;
	
	printf("Enter the number of Array:\n");
	scanf("%d",&num);
	
	int a[num];
	
//	printf("Enter %d elements:\n",num);
	for(i=0;i<num;i++)
	{
		printf("Enter value for a[%d]\n",i);
		scanf("%d",&a[i]);
	}
	printf("Elements of Array are:\n");
	
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	return 0;
	
}
