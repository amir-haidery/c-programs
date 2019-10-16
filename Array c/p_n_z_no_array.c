#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	int i,num,p=0,n=0,z=0;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	srand(time(NULL));
	
//	printf("Enter %d elements:\n",num);
	
	for(i=0;i<num;i++)
	{
	a[i]=rand()%100-50;
		
	}
	printf("The elements of Array are :\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	for(i=0;i<num;i++)
	{
		if(a[i]<0)
		{
			n++;
		}
		else if(a[i]>0)
		{
			p++;
		}
		else if(a[i]==0)
		{
			z++;
		}
		
	}
	printf("The number of -v = %d\n",n);
	printf("The number of +v = %d\n",p);
	printf("The number of z = %d\n",z);
}
