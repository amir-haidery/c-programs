//display all even number from 1 till n..... 
#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,sum=0;
	
	printf("enter upper limit:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2 == 0)
		sum+=i;
		printf("%d\t",i);
	}
	printf("\nsum of even number = %d",sum);
	sum=0;
	for(i=1;i<=n;i++)
	{
		if(i%2 !=0)
		sum+=i;
	//	printf("%d\t",i);
	}
	printf("\nsum of odd number = %d",sum);
	return 0;
}
