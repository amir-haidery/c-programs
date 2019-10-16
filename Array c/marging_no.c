#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,num1,num2,num3,k;
	int a[20],b[20],c[40];
	printf("Enter the first array size:\n");
	scanf("%d",&num1);
	printf("Enter %d elements in first Array",num1);
	for(i=0;i<num1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the second array size:\n");
	scanf("%d",&num2);
	printf("Enter %d elements in first Array",num2);
	for(i=0;i<num2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<num1;i++)
	{
		c[i]=a[i];
	}
	num3=num1+num2;
	
	for(i=0,j=num1; j<num3 && i<num2;i++,j++)
	{
		c[j]=b[i];
	}
	printf("The elements of marging array:\n");
	for(i=0;i<num3;i++)
	{
		printf("c[%d]= %d\n",i,c[i]);
	}
}
