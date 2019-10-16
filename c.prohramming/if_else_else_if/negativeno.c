#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("enter a number:\n");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("number entered is negative\n",num);
		num=-num;
	}
	printf("value of number is : %d",num);
	
	return 0;
	
}
