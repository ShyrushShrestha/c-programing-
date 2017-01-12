/*
Student Name : Aashish Prajapati
Subject : Programming Fundamentals
Roll No : 03
Program : Write a C program to print all alphabets from a to z using while loop
Lab Sheet No : 16
Date : 08 January 2016
*/

#include<stdio.h>

int main()
{
	int ASCII;
	char ch;
	printf("Enter the character : ");
	scanf("%c",&ch);
	ASCII = ch;
	while (ASCII<=90)
	{
				ch = ASCII;
		printf("\t%c",ch);
		ASCII++;
	}
	
	ASCII = 97;
	while (ASCII<=122)
	{
		ch = ASCII;
		printf("\t%c",ch);
		ASCII++;
	}
	return 0;
	
}
