//write a program to calculate area of right angle triangle?
#include<stdio.h>
#include<conio.h>

int main()
{
	int height,base;
	float area;
	
	printf("Enter the base of right angle triangle\n");
	scanf("%d",&base);
	
	printf("Enter the height of right angle of tringle\n");
	scanf("%d",&height);
	
	area = 0.5 * base * height;
	printf("area of right triangle %f\n ",area);
	
	return 0;
}
