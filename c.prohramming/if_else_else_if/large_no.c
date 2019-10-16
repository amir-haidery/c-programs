#include<stdio.h>
#include<conio.h>


int main()
{
	int a,b,c,big;
	printf("enter three number to find out which no. is big\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	
	big=a;
	
	if(b>a && b>c)
	
	big=b;
	
	if(c>a && c>b)
	
	big=c;
	
	printf("large no is %d",big);
	
	return 0;
	
	
}
