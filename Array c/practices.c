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
	/*
	//first smallest and second smallest no
	int j;
	int small1,small2;
	small1=small2=INT_MAX;
	for(i=0;i<num;i++)
	{
		if(a[i] < small1)
		{
			small2=small1;
			small1=a[i];
		}
		else if(a[i]<small2 && a[i]!=small1)
		{
			small2=a[i];
		}
	}
	printf(" The first smallest no %d and the second no is %d\n",small1,small2);
	
	*/
	
	
	
	/*
	//inserting a number in array
	printf("Enter the number to be insert:\n");
	int n,position;
	scanf("%d",&n);
	printf("Enter the position that elements being insert:\n");
	scanf("%d",&position);
	if( position > num+1 || position <= 0)
	{
		printf("you have Entered the wromg position\n");
	}
	else
	{
	for(i=num;i>=position;i--)
	{
		a[i]=a[i-1];
	}
	a[position-1]=n;
	num++;
   }
   printf("Elements of Array after insert a a elements:\n");
   for(i=0;i<num;i++)
   {
   	printf("a[%d] = %d\n",i,a[i]);
   }
   */
   
   printf("Enter the position of element that to be delete:\n");
   int position;
   scanf("%d",&position);
   if(position > num || position <=0 )
   {
   	printf("you have entered the wrong position:\n");
   	
   }
   else 
   {
   	for(i=position-1;i<num;i++)
   	{
   		a[i]=a[i+1];
	   }
	   num--;
   }
   printf("Elements of Array after deleting a elements:\n");
   
   for(i=0;i<num;i++)
   {
   	printf("a[%d] = %d\n",i,a[i]);
   }
	return 0;
}
