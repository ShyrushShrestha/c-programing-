/*
Student Name : Ashis Shrestha
Subject : Programming Fundamental
Roll No : 06
Program : Write a menu Based Program to create a calculator[using swtich case]
Date : 14 Dec 2016
*/


#include<stdio.h>
#include<stdlib.h>
int main ()
{
int n,a,b,sum,sub,mult,div;
printf("\n<<<<<<<<<<Simple Calculator>>>>>>>>>>\n");
printf("1.Addition\n");
printf("2.subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5.Exit\n");

printf("Choose any number\n");
scanf("%d",&n);

switch(n){
case 1:

printf("Enter the first number:\n");
scanf("%d",&a);

printf("Enter the second number:\n");
scanf("%d",&b);

sum=a+b;

printf("%d + %d = %d\n",a,b,sum);

case 2:

printf("Enter the first number:\n");
scanf("%d",&a);

printf("Enter the second number:\n");
scanf("%d",&b);

sub=a-b;

printf("%d - %d = %d\n",a,b,sub);

case 3:

printf("Enter the first number:\n");
scanf("%d",&a);

printf("Enter the second number:\n");
scanf("%d",&b);
mult=a*b;
printf("%d * %d = %d\n",a,b,mult);

case 4:

printf("Enter the first number:\n");
scanf("%d",&a);

printf("Enter the second number:\n");
scanf("%d",&b);

div=a/b;

printf("%d / %d = %d\n",a,b,div);

case 5 :
 
exit(0);

}	
return 0;

}

