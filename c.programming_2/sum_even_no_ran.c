#include<stdio.h>
#include<stdlib.h>



int main()
{
	int i,start,end;
	printf("Enter the lower number :\n");
	scanf("%d",&start);
	
	printf("Enter the  upper number:\n");
	scanf("%d",&end);
	
	if(start%2!=0)
	{
		start++;
	}
	int sum=0;
	for(i=start;i<=end;i=i+2)
	{
		sum+=i;
		//if(i%2==0)
		//{
			printf("=>%d\n",i);
		//}
	}
}
