#include<stdio.h>
#include<conio.h>


int main()
{
	int i,j,k,num1,num2,num3;
	int a[10],b[10],c[20];
	
	printf("Enter the size of first Array:\n");
	scanf("%d",&num1);
	
	printf("Enter %d elements for first array:\n",num1);
	for(i=0;i<num1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the size of second Array:\n");
	scanf("%d",&num2);
	
	printf("Enter %d elements for second array:\n",num2);
	for(i=0;i<num2;i++)
	{
		scanf("%d",&b[i]);
	}
	
	num3=num1+num2;
	i=0;
	j=0;
	for(k=0;k<num3;k++)
	{
		if(i>= num1 || j>=num2)
		{
			break;
		}
		if( a[i] < b[j])
		{
			c[k]=a[j];
			i++;
		}
		else
		{
			c[k]= b[j];
			j++;
		}
		while(i<num1)
		{
			c[k]=a[i];
			k++;
			i++;
		}
		while(j<num2)
		{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	printf("\n a[%d] Array Elements After Merging \n", num3);
	for(i=0;i<num3;i++)
	{
		printf("c[%d] = %d\n",i,c[i]);
	}
}
