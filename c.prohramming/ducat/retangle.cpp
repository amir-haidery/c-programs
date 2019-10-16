//write a program to calculate the area od rectangle?
#include<stdio.h>
#include<conio.h>

int main()
{
	int lenght,breadth,area;
	
	printf("Enter the lenght of rectangle\n");
	scanf("%d",&lenght);
	printf("Enter the breadth of rectangle\n");
	scanf("%d",&breadth);
	
	area=lenght * breadth;
	printf("the area of retangle is %d",area);
	
	return 0;
}
