//read an amount and break the amount into smallest possible number of bank note???????
#include<stdio.h>
#include<conio.h>


int main()
{
	int amount,total;
	printf("Enter the Amount:\n");
	scanf("%d",&amount);
	if(amount<0)
	{
		printf("invalid choice\n");
	}
	
	if(amount>=500)
	{
		total=amount/500;
		amount=amount-(total*500);
		printf("==>%d Note(s) of 500\n",total);
	}
	if(amount>=100)
	{
		total=amount/100;
		amount=amount-(total*100);
		printf("==>%d Note(s) of 100\n",total);
	}
	if(amount>=50)
	{
		total=amount/50;
		amount=amount-(total*50);
		printf("==>%d Note(s) of 50\n",total);
	}
		if(amount>=20)
	{
		total=amount/20;
		amount=amount-(total*20);
		printf("==>%d Note(s) of 20\n",total);
	}
	if(amount>=10)
	{
		total=amount/10;
		amount=amount-(total*10);
		printf("==>%d Note(s) of 10\n",total);
	}
		if(amount>=5)
	{
		total=amount/5;
		amount=amount-(total*5);
		printf("==>%d Note(s) of 5\n",total);
	}
		if(amount>=2)
	{
		total=amount/2;
		amount=amount-(total*2);
		printf("==>%d Note(s) of 2\n",total);
	}
		if(amount>=1)
	{
		total=amount/1;
		printf("==>%d Note(s) of 1\n",total);
	}
	else if(amount<0)
	{
		printf("just integer amount is valid:::::");
	}
	return 0;


}
