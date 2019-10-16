#include<stdio.h>
#include<conio.h>
int max(int n,int m);
int min(int n,int m);
int main()
{
	int num1,num2,max1,min1;
	printf("Enter the two number :\n");
	scanf("%d%d",&num1,&num2);
	
	max1=max(num1,num2);
	min1=min(num1,num2);
	
	printf("the maximim number is %d\n",max1);
	printf("the minimum number is %d\n",min1);
	
}

int max(int n,int m)
{
	
	return (n>m)?n:m;
}
int min(int n,int m)
{
	return (n>m)?m:n;
}
