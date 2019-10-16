#include<stdio.h>
#include<stdlib.h>


int main()
{
	int num1,lcm=1,i,max,num2;
	printf("Enter two number to find the lcm of them:\n");
	scanf("%d%d",&num1,&num2);
	max=(num1>num2)?num1:num2;
	
	
	i=max;
	while(1)
	{
		if(i%num1==0 && i%num2==0)
		{
			lcm=i;
			break;
		}
		i+=max;
	}
	printf("The LCM of %d and %d is %d\n",num1,num2,lcm);
		
		return 0;
}
