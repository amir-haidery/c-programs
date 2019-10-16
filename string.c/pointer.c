#include<stdio.h>
#include<conio.h>


int main()
{
	int num=10;
	
	printf("the value of num =%d\n",num);
	
	printf("the address of num %d\n",&num);
	
	printf("address of number in hexadecimal : %x\n",&num);
	
	printf("The value of memeory Address is : %d",*(&num));
}
