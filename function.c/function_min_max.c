#include<stdio.h>
#include<conio.h>

int max(int num1,int num2);
int min(int num1,int num2);


int main()
{
	int num1,num2,minimum,maximum;
	
	printf("Enter two number :\n");
	scanf("%d%d",&num1,&num2);
	
	minimum=min(num1,num2);
	maximum=max(num1,num2);
	
	printf("\n maximum is %d\n",maximum);
	printf("\n minimum is %d\n",minimum);
	
}

int max(int num1,int num2)
{
	return (num1>num2)?num1:num2;
}
int min(int num1,int num2)
{
	return (num1<num2)?num1:num2;
}
