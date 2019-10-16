#include<stdio.h>
#include<conio.h>

int main()
{
	
	int m1,m2,m3,m4,m5,per;
	printf("enter marks of five subject\n");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	
	per=(m1+m2+m3+m4+m5)*100/500;
	
	if(per>=60)
	printf("first division\n");
	
	else if(per >= 50 && per <= 59)
	printf("second division\n");
	
	else if(per >= 40 && per <= 49)
	printf("third division\n");
	
	else
	printf("fail\n");
	
	return 0;
	
}
