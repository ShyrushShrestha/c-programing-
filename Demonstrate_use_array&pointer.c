/*
name:Ashis shrestha
subject:programming fundamental
programme: WAP to dempstrate the use of  array and pointer.
Roll no:15
lab sheet no:27
Date:5febuary 2017
*/

#include<stdio.h>

int main ()
{
	int i,array[10]={1,2,3,4,5,6,7,8,9,10}; 
	int *p[10];
	
	for(i=0;i<10;i++)
	{
		p[i]=&array[i];
	}
	
	for(i=0;i<10;i++)
	{
		printf("\nElement at index %d: %d\n",i,array[i]);
		
	}
	for(i=0;i<10;i++)
	{
		printf("\nElement at index %d: %u\n",i,p[i]);
		
	}
	
	return 0;
}
