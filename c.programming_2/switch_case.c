#include<stdio.h>
#include<stdlib.h>


int main()
{
	
	int week;
	printf("Enter week number(1-7)\n");
	scanf("%d",&week);
	
	
	switch(week)
	{
		    case 1:
			printf("Monday\n");
			break;
			
				    case 2:
			printf("Tuesday\n");
			break;
					case 3:
			printf("wednesday\n");
			break;
					case 4:
			printf("Thursday\n");
			break;
					case 5:
			printf("friday\n");
			break;
					case 6:
			printf("saturday\n");
			break;
					case 7:
			printf("Sunday");
			break;
				default :
					printf("wrong choice:\n");	}
}
