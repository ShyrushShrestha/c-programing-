 /* 
Student Name : Ashis Shrestha
Subject : Programming Fundamental
Roll No :
Lab sheet No : 19
Program : WAP to find minimum number between two numbers using function [function without argument but with  return type]
Date : 17 Jan, 2017
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int min();
int  main()
{
	int result;
	result = min();
	printf("the minimum no is: %d",result);
	return 0;
}

int min()
{
	int a,b;
	printf("Enter first number : \n");
	scanf("%d",&a);
	printf("Enter the second number: \n");
	scanf("%d",&b);
	
	if(a<b)
		return a;
	else
		return b;
	return 0 ;
}
