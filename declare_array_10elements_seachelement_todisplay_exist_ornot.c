/*
name:Ashis shrestha
subject:programming fundamental
programme: WAP to declare an array of 10 elements and search a particular element to display whether it exist ot not.
Roll no:15
lab sheet no:27
Date:5febuary 2017
*/

#include<stdio.h>

int main ()

{
		int array[10],i,num, found=0; 
		printf("Enter the element of the array : \n");
		
		for(i=0;i<10;i++)
		{
			printf("Element %d ::",i+1);
			scanf("%d",&array[i]);
			
		}
		
		printf("Enter the number to be searched in the array::");
		scanf("%d",&num);
		
		for(i=0;i<10;i++)
		{
			if(num==array[i])
			{
				printf("The search number exist");
				found=1;
				break;
			}
		}
		if (found==0)
		
		printf("The search number doesnot exist");
		
		
		return 0;
		
	
}
