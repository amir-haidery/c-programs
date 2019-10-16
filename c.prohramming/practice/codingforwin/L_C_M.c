#include<stdio.h>
#include<conio.h>


int main()
{
	int i,num1,num2,lcm=1;
	
	printf("Enter two number to find L.C.M of number:\n");
	scanf("%d%d",&num1,&num2);
	
	int max;
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
	printf("The L.C.M of %d and %d = %d",num1,num2,lcm);
	return 0;
}
