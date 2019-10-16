#include<stdio.h>
#include<conio.h>


int main()
{
	int salary,qualification,yos;
	char g;
	
	printf("Enter g and year of service and qualification(1 = post graduation and 2 = graduation)\n");
	scanf("%c%d%d",&g,&yos,&qualification);
	
	if(g=='m' && yos >=10 && qualification == 1)
	 salary=15000;
	
	else if( g =='m' && yos >= 10 && qualification == 2)
	salary=10000;
	
	else if( g =='m' && yos < 10 && qualification == 1)
	salary=10000;
	
	else if( g =='m' && yos < 10 && qualification == 2)
	salary= 7000;
	
	else if( g =='f' && yos >= 10 && qualification == 1)
	 salary=12000;
	
	else if( g =='f' && yos >= 10 && qualification == 2)
	salary=9000;
	
	else if( g =='f' && yos < 10 && qualification == 1)
	salary=10000;
	
	else if( g =='f' && yos < 10 && qualification == 2)
	salary= 6000;
	
	printf(" salary of employee = %d\n",salary);
	
	return 0;
	
	
}
