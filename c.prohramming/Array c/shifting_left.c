#include<stdio.h>
#include<conio.h>

int main()
{
	int temp,num,i;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	printf("Enter the elements:\n");
	for(i=0;i<num;i++)
	{
		printf("\n Enter value for a[%d]:\n",i);
		scanf("%d",&a[i]);
	}
	printf("The original value of Array:\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d]==> %d\n",i,a[i]);
	}
	temp=a[0];
	for(i=0;i<num;i++)
	{
		a[i]=a[i+1];
	}
	a[i-1]=temp;
	printf("New array after rotating by one postion in the left direction:\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d] ==> %d \n",i,a[i]);
	}
	return 0;

}
