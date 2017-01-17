/* 
Student Name : Ashis Shrestha
Subject : Programming Fundamental
Roll No :
Lab sheet No : 19
Program : WAP to find cube of any number using fxn[function with no argument & no return types]
Date : 17 Jan, 2017
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void cube();

int main ()
{
	cube ();
	return 0 ;
}
void cube ()
{
	int a,x;
printf("Enter any number: \n");	
scanf("%d",&a);
x=pow(a,3);
printf("The cube of a is %d \n",x);

}
