/*
student name :Ashis Shrestha
subject :programming fundamental
program :WAP to create a file and assign data to the file.
date:feb 8,2017
*/

#include<stdio.h>
int main ()
{
	FILE *fp;
	fp=fopen("test.txt","a");
	fprintf(fp,"My name is Shyrush\n");
	fprintf(fp,"I am at baneshwor");
	fclose(fp);
	return 0;	
}
