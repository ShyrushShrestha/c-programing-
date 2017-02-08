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
	int num1,num2,add=0;
	fp=fopen("test.txt","w");
	printf("Enter the first number::");
	scanf("%d",&num1);
	printf("Enter the second number:::");
	scanf("%d",&num2);
	add=num1+num2;
	fprintf(fp,"Value is =%d",add);
	fclose(fp);
	return 0;
	
}
