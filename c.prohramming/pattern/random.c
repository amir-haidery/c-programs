#include<stdio.h>
#include<conio.h>


int main()
{
	int num,i,p=0,n=0,z=0;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	srand(time(NULL));
	
	for(i=0;i<num;i++)
	{
		a[i]=rand() % 15-10;
	}
	printf("the random number from 10 to 25 are:\n");
	
	for(i=0;i<num;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	printf("\n");
	printf("The NO: of positive and negative and Zero:\n");
	for(i=0;i<num;i++)
	{
		if(a[i]<0)
		n++;
		else if(a[i]>0)
		p++;
		else	
		z++;
		
	}
	printf(" the NO  -v= %d\n",n);
	printf(" the NO  +v= %d\n",p);
	printf(" the NO  0= %d\n",z);
	return 0;
}
