#include<stdio.h>
#include<conio.h>

int main()
{
	int j,i;
	
	
/*
 * * * * *
 * * * *
 * * *
 * *
 *
*/	
//	for(i=1;i<=5;i++) // first is for raw
//	{
//		for(j=i;j<=5;j++)
//		{
//			printf(" *");
//		}
//		printf("\n");
//	}
	
/*
 *
 * *
 * * *
 * * * *
 * * * * *
*/	
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf(" *");
//		}
//		printf("\n");
//	}

/*
* * * * *
 * * * *
  * * *
   * *
    *
*/		
//		for(i=1;i<=5;i++)
//		{
//			for(j=1;j<i;j++)
//			{
//				printf(" ");
//			}
//			for(j=i;j<=5;j++)
//			{
//				printf(" *");
//			}
//			printf("\n");
//		}

/*

     *
    * *
   * * *
  * * * *
 * * * * *
*/
		for(i=1;i<=5;i++)
		{
			for(j=i;j<=5;j++)
			{
				printf(" ");
			}
			for(j=1;j<=i;j++)
			{
				printf("%d ",j);
			}
			printf("\n");
		}


	return 0;
}
