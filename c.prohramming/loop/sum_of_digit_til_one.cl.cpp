#include<stdio.h>
#include<conio.h>


int main()
{
	long num;
	int big,sum;
	printf("enter a number\n");
	scanf("%ld",&num);
	printf("%ld==>\t",num);
	do
	{
		sum=0;
		while(num !=0)
		{
			big=num%10;
			sum+=big;
			num/=10;
		}
		printf("%d\t",sum);
		num=sum;
	}while(num/10 !=0);
	return 0;
}
