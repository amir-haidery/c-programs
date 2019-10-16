#include<stdio.h>
#include<conio.h>

double cube(double num);
int main()
{
	int n;
	double result;
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	result=cube(n);
	printf("the cube number of %d is %.2f\n",n,result);
}

double cube(double num)
{
	return (num*num*num);
	
}
