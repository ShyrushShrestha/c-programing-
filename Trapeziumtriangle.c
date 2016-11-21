/*
Student Name: 	Shyrush Shrestha
Subject     :	Programming Fundamental
Roll        :
Lab no      :	4
Program     : 	To print area of triangle
Date        :	21th November 2016
*/
      
      
      #include<stdio.h>
      //#include<conio.h>
      #include<math.h>
      
       int main(){
		
		float a,b,h,area;
		printf ("Enter the first side of triangle");
		scanf("%f",&a);
		printf("Enter the second side of triangle");
		scanf("%f",&b);
		printf("Enet the height of triangle");
		scanf("%f",&h);
		area= 0.5*(a+b)*h;
		printf("THe Area of trapezium of triangle is %f", area);
		return(0);
		}
