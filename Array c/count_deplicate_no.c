#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main()
{
	int  num,i,j,count=0;
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	printf("Enter %d elements:\n",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ELements of Array are:\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a[i] == a[j])
			{
				count++;
				break;
			}
		}
	}
	printf("the delicate number are %d\n",count);
}
