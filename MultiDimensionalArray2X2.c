/*
Student Name : Ashis Shrestha
Subject : Programming fundamentals
Roll No : 06
Program : WAP to declare and print the multidimensional array 
			i)2X2
Lab Sheet No : 24
Date : 30 Jan 2017
*/

#include<stdio.h>
int main ()
{
	int i,j,a[3][3];
	
	printf("Enter 3 * 3 matices\n");
	
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" Enter the row %d and column %d::",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n The matrix is:\n");
	
	
	for(i=0;i<3;i++)
	{
		
		for (j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
