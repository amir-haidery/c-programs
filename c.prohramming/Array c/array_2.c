#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int num,i;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	srand(time(NULL));
	
	for(i=0;i<num;i++)
	{
		a[i]=rand()%10+40;
	}
	printf("The elements of Array are:\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
