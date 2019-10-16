/* write a program to implement an array by using random numbers?
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,num;
	printf("enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	srand(time(NULL));
	
	for(i=0;i<num;i++)
	{
		a[i]=rand() % 15 + 10;
	}
	printf("Array elements are:\n");
	for(i=0;i<num;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
