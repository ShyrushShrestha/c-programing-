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

int func(int n);
int main()
{
	int a,result;
	printf("The number is : \n");
	scanf("%d",&a);
	result = func(a);
	if(result ==1)printf("even");
	else if(result==2)printf("odd");
	return 0;
}
int func(int n)
{
	if(n%2==0)
		return 1;
	else
		return 2;
}
