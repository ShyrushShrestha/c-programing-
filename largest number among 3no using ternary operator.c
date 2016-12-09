/*
Student name : Shyrush Shrestha
Program :WAP to print largest no among three no using ternary operator
Lab Sheet No:12
Roll No : 06
Subject : Programming Fundamental
*/

#include <stdio.h>
//#include <conio.h>

int main()
{
int a,b,c;
printf("Enter the first number:\n");
scanf("%d",&a);

printf("Enter the second number:\n");
scanf("%d",&b);

printf("Enter the third number:\n");
scanf("%d",&c);
(a>=b&&a>=c)?printf("%d  is the largest number",a):(b>=c)?printf("%d is the largest number",b): printf("%d is the largest number",c);

return 0;
}
