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
printf("Enter the first number:");
scanf("%d",&a);

printf("Enter the second number:");
scanf("%d",&b);

printf("Enter the third number:");
scanf("%d",&c);
if(a>=b&&a>=c)
{
	printf("%d is the largest number",a);
}
	else if(b>=a&&b>=c)
{
	printf("%d is the largest number",b);
}
	else
{
	printf("%d is the largest number",c);
}
	return 0;
}
