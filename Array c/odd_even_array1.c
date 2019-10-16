#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i,num;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	printf("Enter %d elements:\n",num);
	
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("The elements of Array are :\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	int b[20];
	int c[20];
	int counta=0,countb=0;
	for(i=0;i<num;i++)
	{
		if(a[i] %2 != 0)
		{
			b[counta]=a[i];
			counta++;
			
		}
		else
		{
			c[countb]=a[i];
			countb++;
			
		}
	}
	printf("odd elements of array are:\n");
	for(i=0;i<counta;i++)
	{
		printf("a[%d]=%d\n",i,b[i]);
	}
	printf("even elements of array are:\n");
	for(i=0;i<countb;i++)
	{
		printf("a[%d]=%d\n",i,c[i]);
	}
	
}
