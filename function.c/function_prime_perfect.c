#include<stdio.h>
#include<conio.h>
 int prime(int a);

 int perfect(int a);
 
 
 int main()
 {
 	int num;
 	printf("Enter the number :\n");
 	scanf("%d",&num);
 	
 	if(prime(num))
 	{
 		printf("number is prime %d:\n",num);
 		
	 }
	 else 
	 {
	 	printf("number is not prime:%d\n",num);
	 	
	 }
	 
 	
 	
 	if(perfect(num))
 	{
 		printf("number is perfect No %d.\n",num);
 		
	 }
	 else
	 {
	 	printf("number is not perfect No.%d\n",num);
	 }
	 return 0;
 }
 
 
 int prime(int a)
 {
 	int i;
 	
 	for(i=2;i<a/2;i++)
 	{
 		if(a%i==0)
 		{
 			return 0;
		 }
		 else 
		 
		 return 1;
	 }
 }
 
 
 int perfect(int a)
 {
 	int i,n,sum=0;
 	n=a;
 	for(i=1;i<n;i++)
 	{
 		if(n%i==0)
 		{
 			sum+=i;               
		 }
	 }
	 if(a==sum)
	 {
	 	return 1;
	 }
	 else
	 {
	 	return 0;
	 }
 }
