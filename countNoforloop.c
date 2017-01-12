/*
Name 	: Ashis Shrestha
Subject : Programming Fundamental
Lab No	: 17
Program : WAP to count number of digits in any number in for loop.
Date 	: 11 jan 2017
*/

#include<stdio.h>
int main ()
{
	int a=0,count=0;
	printf("Enter any number :");
	scanf("%d",&a);
	
	for (;a>0;a/=10)
	{
		count++;
	}
	printf("Count of digits is %d",count);
	return 0;
}

