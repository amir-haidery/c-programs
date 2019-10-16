#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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
	int small1,small2,small3;
	small1=small2=small3=INT_MAX;
	for(i=0;i<num;i++)
	{
		if(a[i]<small1)
		{
			small2=small1;
			small1=a[i];
			
		}
		else if(a[i]<small2 && a[i] != small1)
		{
			small2=a[i];
		}
		if(a[i]<small3  && a[i]!=small2 && a[i] != small1 )
		{
			small3=a[i];
		}
	}
	printf("The first smallest no %d and second smallest %d and third smallest no.%d\n ",small1,small2,small3);
}
