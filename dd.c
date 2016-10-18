/*
Student name:Shyrush Shrestha
Subject: Programming Fundam.
LabNo:02
Program:
Date: 2016-10-18
*/
#include<stdio.h>
//#include<conio.h>
void main(){
int mod,a,b,sum,sub,mul,div;

	printf("Enter any number.:");
	scanf("%d",&a);
	printf("Enter the Second Number.:");
	scanf("%d",&b);
	sum=a+b;
	sub=a/b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	
	printf("\n %d + %d = %d",a,b,sum );
	printf("\n %d -  %d =%d",a,b,sub);
	printf ("\n %d * %d =  %d",a,b,mul);
	printf ("\n %d / %d = %d",a,b,div);
	printf ("\n %d %% %d= %d",a,b,mod);
	}
