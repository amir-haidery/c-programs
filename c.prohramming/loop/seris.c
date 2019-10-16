#include<stdio.h>
#include<conio.h>

int main()
{
	int sum=0,term=1,num,i;
	
	printf("Enter number of term:\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		sum+=term;
		term+=i;
	}
	printf("the sum of seris = %d",sum);
	
	return 0;
}
