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
		fp=fopen("test.txt","w");
		fprintf(fp,"My name is Ashis shrestha \n");
		fputs("UI study in sunway",fp);
		printf("data has nbeen written to the file");
		fclose(fp);
		return 0;
}
