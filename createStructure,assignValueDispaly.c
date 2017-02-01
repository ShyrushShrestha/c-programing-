/*
Student Name:Ashis Shrestha
Subject:Programming fundamental
Roll no:03
Lab sheet no:26
Program:WAP to create a structure, assign value to it and display the value( declare two integer variable and one float variable)
Date=01/02/2017
*/
#include<stdio.h>
struct structure1
{
	int x,y ;
	float a;
};

int main()
{
	struct structure1 s1;
	
	printf("enter a first integer value::");
	scanf("%d",&s1.x);
		
	printf("Enter a second integer value::");
	scanf("%d",&s1.y);
	
	printf("Enter a float value ::");
	scanf("%f",&s1.a);
	
	printf("The first integer value is: %d\n", s1.x);
	printf("The second integer value is %d\n",s1.y);
	printf("The float value is %f\n",s1.a);
	return 0;
}


