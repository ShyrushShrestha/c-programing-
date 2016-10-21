/*
Student Name : Shyrush Shrestha
Subject: Programming Fundamentals
Roll No:
Lab No :
Program:
*/

 #include<stdio.h>
 //#include<conio.h>
	int main (){
		int a,b,c;
		printf("\n Enter first number: \n");
		scanf("%d",&a);
		printf("\n Enter second number: \n");
		scanf("%d",&b);
		printf("\n Enter third number: \n");
		scanf("%d",&c);
		
		
		if (a>=b && a>=c) 
		printf("%d is greatest",a);
		else if (b>=c && b>=a)
		printf("%d is greatest",b);
		else if (c>=a && c>=b)
		printf("%d is greatest",c);
		 return(0);
		}
