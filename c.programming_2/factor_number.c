#include<stdio.h>
#include<stdlib.h>


int main()
{
	int num,i;
	
	printf("Enter any number:\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
			printf(" ===> %d\n",i);
		if(num%i==0)
		{
				printf(" =======================t");
			printf(" => %d \n",i);
		}
	}
}
