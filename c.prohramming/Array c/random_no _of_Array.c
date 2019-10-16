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
	
	printf("Enter %d numbers of elements:\n",num);
	
	for(i=0;i<num;i++)
	{
		a[i]=rand()%20+5;
		
	}
	printf("The elements are :\n");
	
	for(i=0;i<num;i++)
	{
		printf("%d\n"0,a[i]);
	}
	
}
