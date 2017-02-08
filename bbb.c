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
		int r=1;
		char data[255]="The data n the file:";
		fp=fopen("test.txt","r");
		do{
			printf("%s",data);
			printf("\n");
			r=fscanf(fp,"%s",data);
		}
		while(r==1);
		fclose(fp);
		return 0;
			
}
