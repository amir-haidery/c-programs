#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,n,revers=0;
	
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	while( num!=0)
	{
		revers=revers* 10 + (num%10);
		num=num/10;
	}
	
	n=revers;
	while(n!=0)
	{
		switch(n%10)
		{
			case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
		}
		n/=10;
	}
}
