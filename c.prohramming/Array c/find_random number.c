#include<stdio.h>
#include<conio.h>

int main()
{
	int i,num,n=0,p=0,z=0;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	int a[num];
	
	srand(time(NULL));
	
	for(i=0;i<num;i++)
	{
		a[i]=rand() % 100-50;
	}
	printf("Array elements are:\n");
	for(i=0;i<num;i++)
	{
		printf("a[%d]=> %d\n",i,a[i]);
		if(a[i]<0)
		 n++;
		 else if(a[i]==0)
		 z++;
		 else
		 p++;
	}
	printf("\n n==> +v=%d",p);
	printf("\n n0==>  =%d",z);
	printf("\n n==>  -v=%d",n);
	
	return 0;
}
