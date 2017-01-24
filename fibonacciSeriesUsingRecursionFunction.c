/*
Student Name : Ashis Shrestha
Subject : Programming Fundamental
Roll No : 
Program : WAP to find the fatorial of a given number using recursion function
Lab Sheet : 22
Date : 24th Ja 2017
*/

#include<stdio.h>
int fib(int a);
int main()
{
	int a;
	for (a=0;a<10;a++)
	{
	printf("%d\t",fib(a));
	}

	return 0;
}
int fib(int a)
{
	if (a==0)
	return 0;
	if (a==1)
	return 1;
	
	return fib(a-1)+fib(a-2);
}
