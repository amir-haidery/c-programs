#include<stdio.h>
#include<conio.h>


int main()
{
	int days,year,week,day,month;
	printf("enter a days number to divided into year and week and days:\n ");
	scanf("%d",&days);
	
	if(days<365)
	printf("number of days are less than a year\n");
	
	year=days/365;
	month=(days%365)/30;
	week=(days%365)%30/7;
	day=(days%365)%7;
	if(month<=30)
	month==0;
	if(week>30)
	week==0;
	printf("%d days\n Is\n  %d years\n  %d month\n  %d weeks\n  %d days\n",days,year,month,week,day);
	
	return 0;
}
