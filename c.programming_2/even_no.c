#include<stdio.h>
#include<stdlib.h>



int main()
{
	int i,start,end;
	printf("Enter the lower number\n :");
	scanf("%d",&start);
	
	printf("Enter the  upper number\n :");
	scanf("%d",&end);

	
	for(i=start;i<=end;i=i+2)
	{
		//if(i%2==0)
		//{
			printf("=>%d\n",i);
		//}
	}
}
