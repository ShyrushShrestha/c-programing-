/*
Name 	: Ashis Shrestha
Subject : Programming Fundamental
Lab No	: 16
Program : WAP to check whether year is leap year or not using coditional/ternary operator.
Date 	: 8 jan 2017
*/

#include<stdio.h>

int main ()
{
 int a;
 
 printf("Enter the year :");
 scanf("%d",&a);
 
 (a%4==0&&a%100!=0)?printf("%d is the leap year",a):(a%400==0)?printf("%d is the leap year",a):printf("%d is not the leap year",a);
 
 return 0;
 
}
