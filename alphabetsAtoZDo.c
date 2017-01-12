/*
Name 	: Ashis Shrestha
Subject : Programming Fundamental
Lab No	: 17
Program : WAP to print all alphabets from a to z using while loop.
Date 	: 11 jan 2017
*/

#include<stdio.h>

int main ()
{
	char a;
	printf("Enter any alphabet:");
	scanf("%c",&a);
	
	do
	{
		
		printf("\t%c",a);
		a++;
	}
	while(a>=97&&a<=122);
	return 0;
}

