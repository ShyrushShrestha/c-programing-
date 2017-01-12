/*
Name 	: Ashis Shrestha
Subject : Programming Fundamental
Lab No	: 17
Program : WAP to find first and last digit of any number using while loop.
Date 	: 11 jan 2017
*/

#include<stdio.h>
int main ()
{
 int i=0,a,b;
 printf("Enter any number : ");
 scanf("%d",&a);
	i=a%10;
	printf("The last digit is %d",i);
	
	printf("\n");
	
	do 
	{
		b=a%10;
		a=a/10;
		}
	while (a>0);
	printf("The first digit is %d",b);
	return 0;
}
