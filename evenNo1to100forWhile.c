/*
Name 	: Ashis Shrestha
Subject : Programming Fundamental
Lab No	: 17
Program : WAP to print all the even numbers from 1 to 100 using while loop.
Date 	: 11 jan 2017
*/

#include<stdio.h>

int main ()
{
	int a=1;
	
	while(a<=100)
	{
	if(a%2==0)
	{
	printf("\t%d",a);
	}
	a++;
}
	return 0 ;
}
