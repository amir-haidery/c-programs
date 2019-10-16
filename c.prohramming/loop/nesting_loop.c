#include<stdio.h>
#include<conio.h>

int main()

{
	int i,j;
	
	for(i=1;i<=3;i++) /*outer loop after accure the loop expression ,loop start the execution
	and after one time execution of outer loop than the inner loop execute 4 time*/
	{
		printf("i=%d\n",i);
		for(j=1;j<=4;j++)
		printf("j=%d\t",j);
		printf("\n");
	}
	return 0;
}
