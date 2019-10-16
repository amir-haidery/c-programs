#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


int main()
{
	int num,i,c;
	printf("Enter the number of elements in Array:\n");
	scanf("%d",&num);
	
	int a[num];
	
	srand(time(NULL));
	
	for(i=0;i<num;i++)
	{
		a[i]=rand()%10+10;
	}
	printf("The elements of Array are:\n");
	for(i=0;i<num;i++)
	{
		printf(" a[%d] = %d\n",i,a[i]);
	}
	
	int max;
	
	max=a[0];
	for(i=0;i<num;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			c=i;
		}
	}
	printf("\nThe smallest element of Array is present in location a[%d] and equal to %d\n",c,max);
}
