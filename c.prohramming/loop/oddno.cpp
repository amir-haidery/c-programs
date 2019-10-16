#include<stdio.h>
#include<conio.h>


int main()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	
	num%2==0?printf("even"):printf("odd");
//	printf("number is %d",num);
	 
	return 0;
}
