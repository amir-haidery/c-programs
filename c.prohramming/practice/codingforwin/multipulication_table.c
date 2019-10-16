#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i,num;
	
	for(num=1;num<=20;num++)
	{
		printf(" table multiplication of %d\n",num);
		
		for(i=1;i<=10;i++)
		{
			printf("\t%d * %d = %d\n",num,i,num*i);
		}
		printf("\n");
	}
	return 0;
}
