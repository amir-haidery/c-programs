#include<stdio.h>
#include<stdlib.h>


int main()
{
	int num,hcf=1,i,min,num1;
	printf("Enter two number to find the hcf of them:\n");
	scanf("%d%d",&num,&num1);
	min=(num<num1)?num:num1;
	
	for(i=1;i<=min;i++)
	{
		if(num%i==0 && num1%i==0)
		{
			hcf=i;
		}
	}
	printf("The HCF of %d and %d is %d\n",num,num1,hcf);
		
		return 0;
}
