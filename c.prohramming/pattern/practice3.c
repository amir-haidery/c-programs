#include<stdio.h>
#include<conio.h>

int main()
{
	int i,num;
	
	printf("Enter the number of elements\n");
	scanf("%d",&num);
	
	int a[num];
	
	printf("enter the %d elements:\n");
	
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("structure of  elements are:\n");
	
	for(i=0;i<num;i++)
	{
		printf(" a[%d]==> %d\t",i,a[i]);
	}
}
