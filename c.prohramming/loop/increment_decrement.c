#include<stdio.h>
#include<conio.h>


int main()
{
	//int x=8;
	//prefix increment/decrement
//	printf("x=%d\n",x);
//	printf("x=%d\n",++x);
//	printf("x=%d\n",x);
//	printf("x=%d\n",--x);
//	printf("x=%d\n",x);

// post increment/decrement

    //printf("x=%d\n",x);
	//printf("x=%d\n",x++);
	//printf("x=%d\n",x);
	//printf("x=%d\n",x--);
	//printf("x=%d\n",x);
	
//	int a=5,b=5;
//	printf("%d,%d\t",++a,b--);
//	printf("%d,%d\t",a,b);
//	printf("%d,%d\t",++a,b++);
//	printf("%d,%d\n",a,b);	
	
	
	int x=8,y,z;
	x= x++;
	y= x++;
	z= y--;
	printf("x=%d, y=%d, z=%d\n",x,y,z);

	return 0;
}
