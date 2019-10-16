//find the factors of number?
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,num;
	
	printf("Enter a number to find the factor of number:\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("=> %d\t",i);
		}
		
	}
	return 0;
}
