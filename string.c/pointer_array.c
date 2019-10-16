#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
	int arr[size];
	int *ptr=arr;
	int i;
	
	printf("Enter the elements of array:\n");
	while(ptr < &arr[size]);
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr=arr;
	
	for(i=0;i<size;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	
}
