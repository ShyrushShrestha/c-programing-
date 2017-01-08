/*
Name 	: Ashis Shrestha
Subject : Programming Fundamental
Lab No	: 16
Program : WAP to print all natural number from 1 to n using while loop.
Date 	: 8 jan 2017
*/
#include<stdio.h>

int main ()
{
int i;
printf("Enter any number :");
scanf("%d",&i);

while(i>0)
{
	printf("\n%d",i);
	i--;	
}
return 0 ;
}
