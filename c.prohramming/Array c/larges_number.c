#include<stdio.h>
#include<conio.h>

int main()
{
	int num,large,i;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	printf("Enter the elements of Array:\n");
	for(i=0;i<num;i++)
	{
		printf("enter a[%d]\n",i);
		scanf("%d",&a[i]);
	}
	large=a[0];
	for(i=0;i<num;i++)
	{
		printf("the a[%d] is = %d\n\n\n",i,a[i]);
		if(large<a[i])
		{
			
			large=a[i];
			printf("large=%d \n",a[i]);
		}
	}
	
	printf("\n\nthe largest number is %d\n",large);
	
}
