#include<stdio.h>
#include<math.h>

int main()
{
	int i,num,j;
	printf("Enter the number to print the multiplication table of number:\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		printf("the table of %d\n",i);
		for(j=1;j<=10;j++)
		{
			printf(" %d * %d = %d \n",i,j,(i*j));
		}
	}
	return 0;
}
