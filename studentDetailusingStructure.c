/*
Student Name:Ashis Shrestha
Subject:Programming fundamental
Roll no:03
Lab sheet no:26
Program:WAP to store student details(id,batch,percentage) using structure.
Date=01/02/2017
*/
#include<stdio.h>

struct structure1
{
	int x,y;
	float a;
};

int main ()
{
	struct structure1 sd1,sd2;
	
	printf("Enter first student id no::");
	scanf("%d",&sd1.x);
	
	printf("Enter first student batch no::");
	scanf("%d",&sd1.y);
	
	printf("Enter first student percentage::");
	scanf("%f",&sd1.a);
	
	printf("\n");
	
	printf("Enter second student id no::");
	scanf("%d",&sd2.x);
	
	printf("Enter second student batch no::");
	scanf("%d",&sd2.y);
	
	printf("Enter second student percentage::");
	scanf("%f",&sd2.a);
	
	printf("\n");
	
	
	printf("The first student id no is ::%d\n",sd1.x);
	printf("The firststudent batch no ::%d\n",sd1.y);
	printf("The first student percentage is :: %f\n",sd1.a);
	
	printf("<<<<<<<>>>>>>>>>>>>>\n");
	
	printf("The second student id no is ::%d\n",sd2.x);
	printf("The second student batch no ::%d\n",sd2.y);
	printf("The second student percentage is :: %f\n",sd2.a);
	
	
	return 0;
}
