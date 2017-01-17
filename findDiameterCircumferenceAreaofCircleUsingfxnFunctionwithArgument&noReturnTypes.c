/* 
Student Name : Ashis Shrestha
Subject : Programming Fundamental
Roll No :
Lab sheet No : 19
Program : WAP to find diameter,circumference & area of circle using fxn[Function with argument & no return types]
Date : 17 Jan, 2017
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void diameter(int r);
void circumference(int r);
void area(int r);

int main()
{
	int r;
 printf("Enter radius of the circle :");
 scanf("%d",&r);
 diameter(r);
 circumference(r);
 area(r);
 return 0;	
}
void diameter(int r)
{
	int diameter;
diameter=(2*r); 
printf("The diameter of the cirlce is :%d\n",diameter);
}

void circumference(int r)
{
	float circumference;
	circumference=(2*3.14*r);
	printf("The circumference of the circle is :%f\n",circumference);
	
}

void area(int r)
{
	float area;
	area=(3.14*r*r);
	printf("The area of the circle is: %f\n",area);
}

