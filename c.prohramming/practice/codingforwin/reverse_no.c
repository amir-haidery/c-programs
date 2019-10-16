// print the reverse of number?
#include<stdio.h>
#include<conio.h>


int main()
{
	int rem,num,reverse,d;
	
	printf("Enter any number to reverse:\n");
	scanf("%d",&num);
	d=num;
	while(num!=0)
	{
		rem=num%10;
		reverse=reverse*10+rem;
		num/=10;
	}
	printf("reverse number of %d is = %d",d,reverse);
}
