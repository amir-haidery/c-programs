//print the digits in words?
#include<stdio.h>
#include<conio.h>

int main()
{
	int num=0,n;
	
	printf("Enter any number to print in word:\n");
	scanf("%d",&n);
	
	while(n!=0)
	{
		num=(num*10)+(n%10);
		n/=10;
	}
	
	while(num!=0)
	{
		switch(num%10)
		{
			case 0:
				printf("zero");
				break;
			case 1:
				printf("one\t");
				break;
			case 2:
				printf("two\t");
				break;
			case 3:
				printf("three\t");
					break;
			case 4:
				printf("four\t");
				break;
			case 5:	
				printf("five\t");
				break;
			case 6:
				printf("six\t");
				break;
			case 7:	
				printf("seven\t");
				break;
			case 8:
				printf("Eight\t");
				break;
			case 9:
				printf("nine\t");
				break;
			default:
			printf(" invalid choice");								
		}
		num/=10;
	}
}
