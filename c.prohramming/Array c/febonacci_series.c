#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i,num;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	a[0]=0;
	a[1]=1;
	
	for(i=2;i<num;i++)
	{
		a[i]=a[i-1]+a[i-2];   //take the value [0]and[1] and add it into [2] and its continue till less then number.
	}
	printf("the following series is febonacci serise :>\n");
	
	for(i=0;i<num;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
