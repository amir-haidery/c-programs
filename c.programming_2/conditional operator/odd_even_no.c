#include<stdio.h>
#include<conio.h>


int main()
{
	int num;
	
	printf("Enter a number :\n");
	scanf("%d",&num);

/* 
	First way
	
*/	
	
//	if(num%2==0)
//	
//	printf("The %d is even.\n",num);
//	
//	else if(num<0)
//	
//	printf("The %d is negative.\n",num);
//	
//	else
//	printf("The %d is odd.\n",num);
/*

	 second way
	 
*/ 	
//	(num%2==0)?printf("The %d is Even\n",num):printf("The %d is Even\n",num);
	
/*
	third way
	
*/
		printf("The number is %s",(num%2==0? "Even":"Odd"));	

	return 0;
}
