#include<stdio.h>
#include<conio.h>

int main()
{
	int year;
	
	
	printf("Enter the year:\n");
	scanf("%d",&year);
	
	/* first way*/
	
//	(year%4==0 && year%100!=0)?printf("leap year\n")
//											:(year%400==0)?printf("leap year\n"):printf("not leap year\n");
	/* second WAY  */

//		printf("%s",(year%4==0 && year%100 !=0)?
//						("leap year\n"):(year%400==0)?
//								printf("leap year\n"):printf("not leap year"));

		if(year%4==0)
		{
			if(year%100 != 0)
			{
				if(year%400 == 0)
				{
					printf("leap year\n")
				
				else
				{
					printf("not a leap year\n");
				}
			}
			else
			{
				printf(" a leap year\n");
			}
			else
			{
				printf("not a leap year\n");
			}
		}





}
