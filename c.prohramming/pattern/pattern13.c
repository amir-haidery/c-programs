#include<stdio.h>
#include<conio.h>
#include<windows.h>


int main()
{
	system("color 9");
	
	int j,i;

   while(1)
   {
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			printf(" ");
     	}
			for(j=1;j<=i;j++)
			{
				Sleep(60);
				printf(" Fuck off  ");
//				if(j==3)
//				printf(" \t\t\tFuck jamia  ");
//				
			}
			printf("\n");
			
	}
//    	Sleep(100);
		
		for(i=1;i<=5;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			Sleep(60);
			printf("  Fuck off");
		}
		printf("\n");
	}
}
	return 0;

}
