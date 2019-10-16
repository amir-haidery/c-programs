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
		a[i]=rand()%200-100;
	}
	printf("The elements of Array are:\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d]=%d\t",i,a[i]);
	}
	int p=0,n=0,z=0;
	for(i=0;i<num;i++)
	{
		if(a[i] > 0)
		{
			p++;
		}
		else if(a[i] < 0)
		{
			n++;
		}
		else
		{
			z++;
		}
		
	}
	printf("\n negetive no = %d\n positive no %d\n zero = %d\n",n,p,z);
}
