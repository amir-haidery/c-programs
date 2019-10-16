#include<stdio.h>
#include<conio.h>


int main()
{
	int num,i,temp;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	printf("Enter the elements:\n");
	
	for(i=0;i<num;i++)
	{
		printf("Enter value a[%d]:\n",i);
		scanf("%d",&a[i]);
	}
	printf("The original elements of Array:\n");
	
	for(i=0;i<num;i++)
	{
		printf("a[%d] == %d\n",i,a[i]);
	}
	temp=a[i-1];
	for(i=num;i>0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=temp;
	
	printf("The shifting value of Array are :\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	return 0;
}
