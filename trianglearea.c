/*
Student Name: 	Shyrush Shrestha
Subject     :	Programming Fundamental
Roll        :
Lab no      :	3	
Program     : 	Write a c program to print area of trianlge
Date        :	21th November 2016
*/
      
      
      #include<stdio.h>
      //#include<conio.h>
      
       int main(){
		
		int b,h,area;
		printf ("Enter the base of triangle\n");
		scanf("%d",&b);
		printf("Enter the height of triangele\n");
		scanf("%d",&h);
		area=0.5*(b*h);
		printf("THe Area of triangle is %d\n", area);
		
		return(0);
		}
