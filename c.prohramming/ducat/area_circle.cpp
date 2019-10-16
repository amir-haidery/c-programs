#include<stdio.h>
#include<stdio.h>
#define pi 3.14

int main()
{
    float radius,area;
    
    printf("enter the radius of a circle\n");
    scanf("%f",&radius);
    
    area= pi * radius * radius;
    
    printf("the area of cricle %f",area);
    
    return 0;
}
