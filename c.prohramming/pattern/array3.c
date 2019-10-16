/*
write a programto implement an array by reading input from user?   
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,num;
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	printf("Enter the %d elements:\n",num);
	
	for(i=0;i<num;i++)
	{
		printf("enter number a[%d] \n",i);
		scanf("%d",&a[i]);
	
	}
	printf("Array elements are:\n");
	
	for(i=0;i<num;i++)
	{
		printf("a[%d] ==> %d\n",i,a[i]);       
	}
	return 0;
}
