//display all even number from 2 to desier number?
#include<stdio.h>
#include<conio.h>


int main()
{
	int i,n;
	printf("print all even number till:\n");
	scanf("%d",&n);
	printf("Even number from 2 till %d\n",n);
	
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		printf("%d\t",i);
	}
	
	
	
	return 0;
}
