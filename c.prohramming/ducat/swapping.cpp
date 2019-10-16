//swap two number 
#include<stdio.h>

int main()
{
	int a,b;
	int temp; 
	printf("enter the two number");
	scanf("%d%d",&a,&b);
	printf("before swappin a = %d b = %d",a,b);
	temp=a;
	a=b;
	b=temp;
//	a=a+b;
//	b=a-b;
//	a=a-b;
	printf("\nafter swapping a = %d b = %d",a,b);
	return 0;
	
}
