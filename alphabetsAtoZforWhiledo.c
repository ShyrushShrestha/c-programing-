/*
Name 	: Ashis Shrestha
Subject : Programming Fundamental
Lab No	: 17
Program : WAP to print all alphabets from a to z using for loop.
Date 	: 11 jan 2017
*/

#include<stdio.h>

 int main()
 {
	 char a;
	 printf("Enter any alphabet:");
	 scanf("%c",&a);
	 for (a=97;a<=122;a++)
	 {
		printf("\t%c",a); 
	}
	
	printf("\n\n");
	
	for (a=65;a<=90;a++)
	 {
		printf("\t%c",a); 
	}
	  return 0;
}
