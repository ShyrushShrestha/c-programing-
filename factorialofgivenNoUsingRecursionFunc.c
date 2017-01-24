/*
Student Name : Ashis Shrestha
Subject : Programming Fundamental
Roll No : 
Program : WAP to find the fatorial of a given number using recursion function
Lab Sheet : 22
Date : 24th Ja 2017
*/

#include<stdio.h>
int fact(int a);
int main()
{
	int a,result;
	printf("Enter any number :::::::");
	scanf("%d",&a);
	
	result=fact(a);
	printf("The factorial of %d = %d",a,result);
	
	return 0;
	}
	
	int fact(int a)
	{
		if(a==1)
		{
			return 1;
		}
		
		else 
		{
			return a*fact(a-1);
		}
		
	}
