#include<stdio.h>
#include<conio.h>


int main()
{
	int num,sum=0;
	do
	{
	   printf("enter a number(enter 0 to stop)\n");
    	scanf("%d",&num);
    	
    	sum=sum+num;
		
	}while(num !=0);
	
	printf("the sum of number is =%d\n",sum);
	
	return 0;
}
