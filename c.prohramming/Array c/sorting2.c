#include<stdio.h>
#include<conio.h>	
int main()
{
	int j,i,num,tmp;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	printf("Enter the elements of Array:\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Array elements are:\n");
	for(i=0;i<num;i++)
	{
		printf(" a[%d] = %d\n",i,a[i]);
	}	
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a[j] < a[i])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
			
		}
		
	}
	printf("Element of Array  in sorted acending order:\n");
	for(i=0;i<num;i++);
	{
		printf("a[%d] ==> %d\n",i,a[i]);
	}
	}
