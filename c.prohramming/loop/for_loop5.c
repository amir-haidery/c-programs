#include<stdio.h>
#include<conio.h>


int main()
{
	int i,j;
	
	for(i=0,j=10;i<=j /*the loop works till (i) become equal to (j)*/;i++,j--)
	{
		printf("i=%d ==> j=%d\n",i,j);
	}
	return 0;
}
