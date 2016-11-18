/*
Student Name: Shyrush Shrestha
Roll:
Lab no. :01
Program: To print simple interest
Date: 18 November, 2016
*/
#include<stdio.h>
//#include<conio.h>
 int main () {
	 float p,t,r,interest;
	 printf("Enter first number:");
	 scanf("%f",&p);
	 printf("Enter second number:");
	 scanf("%f",&t);
	 printf("Enter third number:");
	 scanf("%f",&r);
	 
	 interest=p*t*r/100;
	 
	 printf(" %f",interest );
	 return (0);
	 }

