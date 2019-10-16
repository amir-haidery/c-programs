#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Enter the month number(1-12)\n");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			printf("january 31\n");
			break;
		case 2:
		printf("feburary 28/29\n");
		break;
		case 3:
		printf("March 31\n");
		break;
		case 4:
		printf("April 30\n");
		break;
		case 5:
		printf("May 31\n");
		break;
		case 6:
		printf("June 30\n");
		break;
		case 7:
		printf("july 31\n");
		break;
		case 8:
		printf("Auguest 31\n");
		break;
		case 9:
		printf("September 30\n");
		break;
		case 10:
		printf("october 31\n");
		break;
		case 11:
		printf("november  31\n");
		break;
		case 12:
		printf("december 30\n");
		break;
		default :
			printf("wrong choice\n");
			
	}
}
