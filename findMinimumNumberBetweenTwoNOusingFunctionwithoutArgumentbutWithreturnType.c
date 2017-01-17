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

void min();
int  main()
{
	min();
	return 0;
}

void min()
{
	int a,b;
	printf("Enter first number : \n");
	scanf("%d",&a);
	printf("Enter the second number: \n");
	scanf("%d",&b);
	
	(a>=b)?printf("%d is minimum numbers",b):printf("%d is the minimum number",a);
}
