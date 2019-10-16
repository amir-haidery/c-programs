#include<stdio.h>
#include<conio.h>

int main()
{
	int i,hcf=1,min,num1,num2;
	
	printf("enter two number to find common factors:\n");
	scanf("%d%d",&num1,&num2);
	
	min=(num1<num2)?num1:num2;
	
	for(i=1;i<=min;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			printf("==> %d\t",hcf);
			hcf=i;
		}
		
	}
	printf("the common factor of %d and %d = %d\n",num1,num2,hcf);
	
	return 0;
}
