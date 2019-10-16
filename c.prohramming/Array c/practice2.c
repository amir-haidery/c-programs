#include<stdio.h>
#include<conio.h>


int main()
{
	int i,num;
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	printf("Enter %d elements in Array:\n",num);
	
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("Eelments of array are:\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
		
	}
	int smallest1,smallest2;
	smallest1=smallest2=a[0];
	for(i=0;i<num;i++)
	{
		if(a[i]<smallest1)
		{
			smallest2=smallest1;
			smallest1=a[i];
		}
		else if( a[i] != smallest1 && a[i]<smallest2)
		{
			smallest2=a[i];		
		}
		
		
	}
	
	printf("The 1th smallest number %d and 2ad smallest is %d\n",smallest1,smallest2);
	
}

