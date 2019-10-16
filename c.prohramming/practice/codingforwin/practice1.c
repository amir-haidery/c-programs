#include<stdio.h>
#include<conio.h>

int main()
{
	int sum=0,num,n,reverse=0;
	
	printf("Enter any number to print reverse of number:\n");
	scanf("%d",&n);
	num=n;
	while(n !=0)
	{
		reverse=(reverse * 10) + (n%10);
		n/=10;
	}
	if(reverse==num)
	{
	
	printf("%d is palindrome number\n",reverse);
    } 
	else
	{
		printf("%d is not a palindrome number:\n",reverse);
	}
	printf("reverse of %d => %d",num,reverse);
//==================================================================================================
//     int i,num;
//     
//     printf("enter any number:\n");
//     scanf("%d",&num);
//     
//     for(i=2;i<=num;i+=2)
//     {
//     	printf(">>> %d",i);
//	 }

		 
	return 0;
}
