#include<stdio.h>
#include<conio.h>


int main()
{
	int a,b,c;
	float d;
	printf("enter the number\n");
	scanf("%d%d",&a,&b);
	
	c=a%b;
	d=(float)a/(float)b;
	printf("modulus = %d\n",c);
	printf("divided = %f\n",d);

	return 0;
	
	
	
}
