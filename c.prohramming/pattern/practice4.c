#include<stdio.h>
#include<conio.h>


int main()
{
	int num,i;
	
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	printf("Enter the %d elements:\n",num);
		printf("=========================================================\n");
	
	for(i=0;i<num;i++)
	{
		printf("Enter the a[%d] elements\n",i);
		scanf("%d",&a[i]);
		
	}
	printf("Array elements are:\n");
	
     printf("=========================================================\n");
	for(i=0;i<num;i++)
	{
		printf(" a[%d]==> %d\n",i,a[i]);
	}
	return 0;
	
	
}
