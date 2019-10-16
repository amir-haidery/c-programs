//  find the power of digit without use of library function?
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,base,exponent;
	long long power=1;
	
	printf("Enter base\n");
	scanf("%d",&base);
	printf("Enter exponent\n");
	scanf("%d",&exponent);
	
	for(i=1;i<=exponent;i++)
	{
		power= power* base;
	}
	printf("%d ^ %d =%lld\n",base,exponent,power);
	return 0;
}
