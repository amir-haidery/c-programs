#include<stdio.h>
#include<conio.h>


int main()
{
	float km,meter,inch,cm,feet;
	
	printf("enter the distance in km:\n");
	scanf("%f",&km);
	
	meter=km*1000;
	cm=meter*100;
	feet=km*3280.8;
	inch=feet*12;
	
	printf("the distance in meter is %f\n",meter);
	printf("the distance in cm is %f\n",cm);
	printf("the distance in feet is %f\n",feet);
	printf("the distance in inch is %f\n",inch);
	
	
	return 0;
	
	
	return 0;
	
}
