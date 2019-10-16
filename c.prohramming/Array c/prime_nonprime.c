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
	     for(j=i;j<=i+2;j++)
	     {
	     	a[i]=j;
	     	
		 }
		
	}
	printf("The elements of Array:\n");
	 
	 for(i=0;i<num;i++)
      {
		printf("a[%d] = %d \n",i,a[i]);
	  }
	  printf("\nThe prime number of Array are:\n");
	  
	 for(i=0;i<num;i++)
	 {
		prime=1;
	    for(k=2;k<a[i]/2;k++)
	    {
	     		
	     		
	     		if(a[i]%k==0)
	     		{
	     			prime=0;
	     			break;
				 }
				 
	        
			}
			if(prime==1)
				 {
				 	printf("a[%d] prime No = %d\n",i,a[i]);
				 }
	}
	        
	
}
