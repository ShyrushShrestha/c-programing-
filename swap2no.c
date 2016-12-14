/*
Student Name : Ashis Shrestha
Subject : Programming Fundamental
Roll No : 06
Program : WAP ot swap to number using temporary variable(third variable)
Date : 14 Dec 2016
*/


#include<stdio.h>
//#include<conio.h>

int main()
{
int a,b,temp;
printf("Enter the first variable>>");
scanf("%d",&a);
printf("Enter the second variable>>");
scanf("%d",&b);

 printf("Before the swap %d and %d\n",a,b);

temp=a;
a=b;
b=temp;

printf("After the swap %d and %d",a,b);

return 0;

}
























