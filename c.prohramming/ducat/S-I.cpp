#include<stdio.h>



int main()
{
	float principle,time,rate,SI;
	
	printf("enter principle (amount):\n");
	scanf("%f",&principle);
	
	printf("enter time:\n");
	scanf("%f",&time);
	
	printf("enter rate:\n");
	scanf("%f",&rate);
	
	SI= (principle * time * rate) / 100;
	
	printf("simple interest = %f \n",SI);
	
	return 0;
}
