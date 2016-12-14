/*
Student Name : Ashis Shrestha
Subject : Programming Fundamental
Roll No : 06
Program : WAP to swap to number without using third variable
Date : 14 Dec 2016
*/


#include<stdio.h>
//#include<conio.h>

int main()
{
int a=0,b=0;
printf("Enter the first variable>>");
scanf("%d",&a);
printf("Enter the second variables>>");
scanf("%d",&b);

printf("Before the swap %d and %d",a,b);

a=a-b;
b=a+b;
a=b-a;
printf("After the swap %d and %d",a,b);
return 0;
}
