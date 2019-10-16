/*while purchasing certain item,a discount of 10% is offered if a quantity purchased is more than 1000,
if quantity and price per item are input through the keyboard,write a program to calculate the total expenses?*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int quantity,dis=10;
	float rate,total;
	
	
	printf("Enter the quantity and rate\n");
	scanf("%d%f",&quantity,&rate);
	
	if(quantity>1000)
	
	dis=10;
	
	total=(quantity*rate)-(quantity*rate*dis/100);
	printf("Total expenses =Rs %f\n",total);
	
	return 0;
}
