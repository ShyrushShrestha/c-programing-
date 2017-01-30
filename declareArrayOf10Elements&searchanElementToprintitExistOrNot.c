/*
Student Name : Ashis Shrestha
Subject : Programming fundamentals
Roll No : 06
Program : WAP tp declare array of 10 elements and search an element to print whether it exist or not.
Lab Sheet No : 24
Date : 30 Jan 2017
*/

#include<stdio.h>
int main ()
{
	int i,n,num[10];
	for(i=0;i<10;i++)
	{
		printf("Enter no %d::::",i+1);
		scanf("%d",&num[i]);
	}
	
	printf("search: ");
	scanf("%d",&n);
	
	for(i=0;i<10;i++)
	{
		if (num[i]==n)
		{
	printf("The number is %d in the list",n);
	
	}
	
	
}
}
