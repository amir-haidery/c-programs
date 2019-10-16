#include<stdio.h>
#include<conio.h>

int main()
{
	int num,n,cube,d,sum;
	printf("Armstrong number are:\n");
	
	for(num=100;num<=999;num++)
	{
		n=num;
		sum=0;
		while(n>0)
		{
			d=num%10;
			n/=10;
			cube=d*d*d;
			sum=sum+cube;
		}
		if(sum==num)
		printf("%d",num);
		
	}
	return 0;
}
