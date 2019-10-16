#include<stdio.h>
#include<conio.h>

int main() 
	printf("enter current year and year of joining\n");
	scanf("%d%d",&currentyear,&joiningyear);
	
	servedyear=currentyear-joiningyear;
	
	if(servedyear>3)
	bonus=2500;
	printf("bonus = Rs %d\n",bonus);
	
	return 0;
}
