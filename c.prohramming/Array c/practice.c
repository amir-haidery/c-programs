#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<conio.h>


int main()
{
	int num,j,i,temp,f_small,s_small;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	srand(time(NULL));
	printf("Enter %d value:\n",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
//		a[i]=rand()%10+20;
		
	}
	printf("The elements of Array are:\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d \n",i,a[i]);	
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
	   if(a[i]<smallest2 && a[i]>smallest1)
		{
			smallest2=a[i];
		}
	}
	printf("The 1th smallest number %d and 2ad smallest is %d\n",smallest1,smallest2);
	
	
	
	
	
	
	
	
	
	
	
	
//	printf("elements of Array in sorted ascending order:\n");
//	for(i=0;i<num;i++)
//	{
//		for(j=i+1;j<num;j++)
//		{
//			if(a[j] < a[i])
//			{
//				temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//			
//		}
//		printf(" %d \t",a[i]);
//	}
}
