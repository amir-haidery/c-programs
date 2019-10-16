#include<stdio.h>
#include<conio.h>

int main()
{
	int n1=0,n2=1,n3,num,i;
	printf("Enter the term\n");
	scanf("%d",&num);
	printf("%d \t %d",n1,n2);
	
	for(i=1;i<num;++i)
	{
		n3=n1+n2;
		printf("\n%d",n3);
		n1=n2;
		n2=n3;
		
	}
	return 0;
	
}
