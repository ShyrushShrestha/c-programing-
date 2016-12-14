/*
Student Name : Ashis Shrestha
Subject : Programming Fundamental
Roll No : 06
Program : WAP to check whether a number is divisible by 5 & 11 or not.int
Date : 14 Dec 2016
*/


#include<stdio.h>
//#include<conio.h>
int main ()
{
int n;
printf("Enter any number>>");
scanf("%d",&n);

if(n%5==0&&n%11==0)
{
printf("%d is divisible by 5 and 11",n);
}
else
printf("%d is not divisible by 5 and 11",n);
return 0;
}
