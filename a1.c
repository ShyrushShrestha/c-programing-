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
		int i=0,sum=0,n;
		printf("Enter n,nos");
		scanf("%d",&n);
		
		do
		{
			sum+=i;
			printf("\nSUM of Nos is :%d",sum);
			i++;
			
		}while (i<=n);
	
		
		return 0;
	}
