#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
	int num[size]={10,20,30,40,50};
	int *ptr=&num[0];
	
		printf("pointer address is %d\n",&num);
	while(ptr < &num[size])
	{
		printf("array elements are :%d\n",*ptr);
		printf("pointer address is %d\n",ptr);
		ptr++;
	}
}
