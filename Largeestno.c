/*
Student Name : Ashis Shrestha
Lab Sheet No : 11
Roll No : 06
Program : WAP to check largest no among three numbers.
*/
#include <stdio.h>
#include <conio.h>

int main ()
{ int a,b,c,largest;
printf("Enter the first number:\n");
scanf("%d",&a);

printf("Enter the second number:\n");
scanf("%d",&b);

printf("Enter the third number:\n");
scanf("%d",&c);

if(a>=b&&a>=c)
{printf("a is the largest number:%d",a);
}
else if(b>=a&&b>=c)
{ printf("b is the largest number:%d",b);
}
else
    printf("c is the largest number:%d",c);
return 0;


}
