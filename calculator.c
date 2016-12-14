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
int a,b,sum,sub,mult,div;
printf("\t<<<<<<<<<<<Simple calculator>>>>>>>>>>>>\n");
printf("Enter the first number>>");
scanf("%d",&a);
printf("Enter the second number>>");
scanf("%d",&b);

sum=a+b;
sub=a-b;
div=a/b;
mult=a*b;

printf("%d + %d = %d\n",a,b,sum);
printf("%d - %d = %d\n",a,b,sub);
printf("%d / %d = %d\n",a,b,div);
printf("%d * %d = %d\n",a,b,mult);
return 0;

}
