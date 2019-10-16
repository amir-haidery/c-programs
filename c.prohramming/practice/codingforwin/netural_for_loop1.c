//display a natural number from 1 to n?

#include<stdio.h>
#include<conio.h>


int main()
{
	int num;
	
	printf("Enter any number:\n");
	scanf("%d",&num);
	printf("netural number from 1 to %d :\n",num);
	
	
	
	for(num=1;num<=10;num++)
	{
		printf("==>%d\n",num);
		
	}
	return 0;
}
