/* 
Student Name : Ashis Shrestha
Subject : Programming Fundamental
Roll No :
Lab sheet No : 19
Program : WAP to check a numbers even or odd using function [function with argument and with return type]
Date : 17 Jan, 2017
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int number(int n);
int main()
{
	int n;
	printf("Enter any number:\n");
	scanf("%d",&n);
	number(n);
	return 0;
}
int number(int n)
{
(n%2==0)?printf("%d is even",n):printf("%d is odd",n);
return 0;
}
