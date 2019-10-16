#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main()
{
	int num,i,temp,j;
	printf("Enter the number of elements :\n");
	scanf("%d",&num);
	int a[num];
	
	printf("Enter the %d elements\n",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The elements of Array are:\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	printf("the elements of array in Ascending order:\n");
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
	   {
	   	  if( a[i] > a[j])
	   	  {
	   		temp=a[i];
	   		a[i]=a[j];
	   		a[j]=temp;
		  }
	   	
     	}
		printf("%d\t",a[i]);
	}
	
	
}
