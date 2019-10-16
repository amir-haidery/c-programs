#include<stdio.h>
#include<conio.h>


int main()
{
	int num=10;
	int *ptr=&num;
	int **dptr=&ptr;
	printf("Address of num %d\n",&num);
	printf("address which store in ptr of num %d\n",ptr);
	printf("adress  of ptr %d\n",&ptr);
	printf("adress of ptr which stor in dptr %d\n",dptr);
	printf("value of ptr %d\n",*ptr);
	printf("value of num %d\n",**dptr);
	printf("orginal address of dptr %d\n",&dptr);
}
