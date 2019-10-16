#include<stdio.h>
#include<conio.h>


int main()
{
	int j,i,num,tmp;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	srand(time(NULL));
	
	for(i=0;i<num;i++)
	{
		a[i]=rand() % 15 + 50;
	}
	
	printf("Array elements are:\n");
	for(i=0;i<num;i++)
	{
		printf(" a[%d] = %d\n",i,a[i]);
	}

	return 0;
	
}
