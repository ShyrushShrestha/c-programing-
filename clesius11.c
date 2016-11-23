/*
Student Name : Ashis Shrestha
Subject : Programming Fundamentals
Lab No :
Program : WAP to read temperature in Fahrenhit and convert it into centigrade.
Roll No :
Date : 23 November,2017
*/
#include<stdio.h>
#include<conio.h>
int main(){
float f,c;
printf("Enter the temperature of centigrade\n");
scanf("%f",&c);
f=(0.56*c)+32;
printf("Temperature in fahrenheit is %f",f);
getch ();
return (0);

}
