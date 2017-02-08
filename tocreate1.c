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
		char data[255];
		fp=fopen("test.txt","r");
		fscanf(fp,"%s",data);
		printf("%s",data);
		printf("\n");
		fclose(fp);
		return 0;
}
