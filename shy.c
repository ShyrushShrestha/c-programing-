/*
Student Name :	Shyrush Shrestha
Subject : Programming Fudamen.
Roll No :
Program : Write a c program to swap two n numbers from users.
*/

#include<stdio.h>
//#include<conio.h>

void main (){
	int a,b,tem;
	printf("Enter first Number  :");
	scanf("%d",&a);
	printf("Enter second number  :");
	scanf("%d",&b);
	
	tem=a;
	a=b;
	b=tem;
	
	printf("\n firstNumber is %d",a);
	printf("\n secondNumber is %d",b);
	
	
}
