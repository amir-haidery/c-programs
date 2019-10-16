#include<stdio.h>
#include<conio.h>


int main()
{
	int num = 1;
	int *ptr = &num;
	
	printf("value of num %d\n",num);
	printf("adress of num %d\n",&num);
	
	printf("\n");
	
	printf("value of ptr %d\n",ptr);
	printf("adress of ptr %d\n",&ptr);
	printf("value pointed by ptr %d\n",*ptr);
	
	num=10;
	printf("after changing of num directly:\n");
	printf("value of num %d\n",num);
	printf("value of ptr %d\n",*ptr);
	printf("value of ptr %d\n",ptr);
}
