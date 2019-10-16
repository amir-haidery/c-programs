#include<stdio.h>
#include<conio.h>

double cube(double num);

int main()
{
	int num;
	double c;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	c=cube(num);
	printf("the cube of %d id %.2f \n",num,c);
}

double cube(double num)
{
	return (num*num*num);
}
