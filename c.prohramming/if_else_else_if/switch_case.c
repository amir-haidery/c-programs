#include<stdio.h>
#include<conio.h>


int main()
{
	char op;
	int a,b;
	
	printf("Enter number operator and other number:\n");
	scanf("%d%c%d",&a,&op,&b);
	
	switch(op)
	{
		    case '+':
			printf("result of two no is =%d",a+b);
			break;
				case '-':
			printf("result of two no is =%d",a-b);
			break;
				case '*':
			printf("result of two no is =%d",a*b);
			break;
				case '/':
			printf("result of two no is =%d",a/b);
			break;
				case '%':
			printf("result of two no is =%d",a%b);
			break;
	}
	return 0;
}
