#include<stdio.h>
#include<conio.h>

//display all even number from 1 till n without using (if)
int main()
{
	int i,n;
	
	printf("print all even number till :\n");
	scanf("%d",&n);
	
	printf("All even number from 1 to %d:\n",n);
	for(i=2;i<=n;i+=2)
	printf("==>%d\t",i);
	
	return 0;
}
