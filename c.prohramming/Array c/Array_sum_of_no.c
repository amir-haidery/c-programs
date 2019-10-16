#include<stdio.h>
#include<conio.h>

int main()
{
	int sum=0,i,num;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	for(i=0;i<num;i++)
	{
		printf("Enter a[%d]:\n",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of %d elements is = %d",i,sum);
	return 0;
}
