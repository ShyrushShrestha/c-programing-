/*
Name 	: Ashis Shrestha
Subject : Programming Fundamental
Lab No	: 17
Program : WAP to print sum of all odd number between 500 to 1000.
Date 	: 11 jan 2017
*/

#include<stdio.h>

int main ()
{
	int sum=0,a=501;
	
	while (a<=1000)
	{
		sum= sum + a;
		a=a+2;
	}
	printf("the sum of all odd number between 500 to 1000 =%d",sum);
	return 0;
}
