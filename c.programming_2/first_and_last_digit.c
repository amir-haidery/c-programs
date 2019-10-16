#include<stdio.h>
#include<math.h>

int main()
{
	int first,last,num,sum;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	last=num%10;
	
	first=num;
	
	while(first>=10)
	{
		first=first/10;
	}
	sum=first+last;
	printf("the first digit %d and the last digit %d and su, of them is %d\n ",first,last,sum);
	
}
