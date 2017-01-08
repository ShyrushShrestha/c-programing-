/*
Name 	: Ashis Shrestha
Subject : Programming Fundamental
Lab No	: 16
Program : WAP to check whether character is an alphabet or not using ternary operator.
Date 	: 8 jan 2017
*/

#include<stdio.h>

int main ()
{
 char  a;
 printf("Enter any character :");
 scanf("%c",&a);
 
 ((a>=65&&a<=90)||(a>=97&&a<=122))?printf("It is an alphabet"): printf("It is not an alphabet");
 return 0 ;

}
