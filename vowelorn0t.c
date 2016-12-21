
/*
Student Name : Ashis Shrestha
Subject : Programming Fundamentals
Roll No : 06
Program : Write a C program to check character assigned from user is vowel or not.
Lab Sheet No : 14
Date : 21 Dec 2016
*/

#include<stdio.h>
//#include<conio.h>

int main ()
{
	char ch;
	printf("Enter any alphabet \n");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{	printf("The alphabet is vowel******");
	}
	else 
	printf("The alphabet is not vowel******\n");
	return 0;
	
}
