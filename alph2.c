
/*
Student Name : Ashis Shrestha
Subject : Programming Fundamentals
Roll No : 06
Program : Write a C program to check character assigned from user is alphabet or not.
Lab Sheet No : 14
Date : 21 Dec 2016
*/

#include<stdio.h>

//#include<conio.h>

int main ()
{
		char ch;
		printf("Enter any character\n");
		scanf("%c",&ch);
		
		if((ch>=97&&ch<=122)||(ch>=65&&ch<=90))
		printf("The character is an alphabet******");
		else 
		printf("The character is not an alphabet");
		
	return 0;
}	
