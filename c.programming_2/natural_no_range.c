#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i,start,end;
	
	
	printf("Enter the start number:\n");
	scanf("%d",&start);
	
	printf("Enter the end number:\n");
	scanf("%d",&end);
	
	for(i=end;i>=start;i--)
	{
		printf("%d\n",i);
	}
	return 0;
	
	
}
