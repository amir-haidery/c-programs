#include<stdio.h>
#include<conio.h>

int main()
{
	int i,num,sum=0;
	printf("Enter any number to check perfect number\n");
	scanf("%d",&num);
	
	for(i=1;i< num;i++)
	{
		if(num%i==0)
		{
			sum+=i;
			printf("=>%d\t",i);
		}
		
	}
	if(sum == num)
	{
		printf("........%d is a perfect number\n",num);
	}
	else
	{
		printf("%d is not a perfect number\n",num);
	}
	return 0;
}
