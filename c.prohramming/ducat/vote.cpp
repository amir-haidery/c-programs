#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
	int man;
	float age;
	printf("enter the age\n");
	scanf("%f",&age);
	
	age>=18?printf("vaild to vote\n"):printf("not valid to vote\n");
	
	return 0;
}
