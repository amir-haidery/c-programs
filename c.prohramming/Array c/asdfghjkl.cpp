#include<stdio.h>
#include<stdlib.h>
//#include<time.h>

int main()
{
	int k,j,num,i,prime,composite;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
//	srand(time(NULL));
	
	for(i=0;i<num;i++)
	{
	     for(j=i;j<=i+3;j++)
	     {
	     	a[i]=j;
	     	for(k=2;k<j/2;k++)
	     	{
	     		prime=1;
	     		
	     		if(j%k==0)
	     		{
	     			prime=0;
	     			break;
				 }
				 if(prime==1)
				 {
				 	printf("a[%d] prime No = %d\n",i,j);
				 }
			 }
	     	
		 }
//		a[i]=rand()%10+20;
		
	}
//	for(i=0;i<num;i++)
//	{
//		printf("a[%d] = %d \n",i,a[i]);
//	}
	
}
