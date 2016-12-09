/*
Student nAme : Shyrush Shrestha
Program :WAP to print no among three no using ternary operator
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

(a>=b)?printf("%d is the largest number",a):printf("%d is the largest number",b);
return 0;
}
