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
	
	while(a>0){
		a/=10;//a=a/10
		count++;
		
		}
		printf("Count of  digit is: %d",count);
}

