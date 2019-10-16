#include<stdio.h>
#include<conio.h>
int main()
{
	int p,n,count;
	float r,si;
	
	count=1;
	
	while(count<=3)
	{
		printf("enter values of principle and rate and time:\n");
		scanf("%d%f%d",&p,&r,&n);
		
		si=p*r*n/100;
		
	    printf("simple interst is Rs.%f\n",si);
	    count=count++;
			
	}
	//printf("simple interst is Rs.%d\n",si);
	return 0;
}
