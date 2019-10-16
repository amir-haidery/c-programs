#include<stdio.h>
#include<conio.h>
#include<time.h>


int main()
{
	int num,i,j,temp;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	srand(time(NULL));
	
	for(i=0;i<num;i++)
	{
		a[i]=rand()%10+7;
	}
	printf("The elements of Array are :\n");
	for(i=0;i<num;i++)
	{
		printf(" a[%d] = %d\n",i,a[i]);
	}
	printf("Elements of Array in sorted ascending order:\n");
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a[j] < a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("%d\t",a[i]);
	}
	int min;
	min=a[1];
	for(i=0;i<num;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
	
		}
	}
	int min2;
	min2=a[1];
	for(i=1;i<num;i++)
	{
		if(a[i]<min2)
		{
			min2=a[i];
		}
	}
	printf("\nThe first smallest is %d and second_smallest is %d",min,min2);

	
//	for(i=0;i<num;i++)
//	{
//		prin
}
