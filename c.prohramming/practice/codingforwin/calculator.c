// baseic calculater?
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int num1,num2;
	char ch,n;
	
	do
	{
		system("pause");
		system("cls");
		printf("Enter two number:\n");
		fflush(stdin);
		scanf("%d%d",&num1,&num2);
		printf("press + for Addition\npress - for subtraction\n press * for multiplication\npress / for division\npress %% for mudulasion\n");
		fflush(stdin);
		scanf("%c",&ch);
		
		switch(ch)
		{
			case '+':
				printf(" %d + %d = %d\n",num1,num2,num1+num2);
				break;
				case '-':
				printf(" %d - %d = %d\n",num1,num2,num1-num2);
				break;
				case '*':
				printf(" %d * %d = %d\n",num1,num2,num1*num2);
				break;
				case '/':
				printf(" %d / %d = %d\n",num1,num2,num1/num2);
				break;
				case '%':
				printf(" %d % %d = %d\n",num1,num2,num1%num2);
				break;
				default:
					printf("invalid choice\n");
		}
		printf("\npress n to exit else any other key to continue\n");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch !='n');
	
	return 0;

}
