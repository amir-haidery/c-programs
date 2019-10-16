#include<stdio.h>
#include<conio.h>

int isEven(int num)
{
	return !(num & 1);
}
int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	
	if(isEven(num))
	{
		printf("the number(%d) is even",num);
		
	}
	else
	{
		printf("\nThe number(%d) is odd\n",num);
	}
}
