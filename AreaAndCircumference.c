#include<stdio.h>
int main()
{
 float r,c,a,pi=3.14;
 printf("Enter radius=");
 scanf("%f",&r);
 c=2*pi*r;
 a=pi*r*r;
 printf("\nCircumference of a circle=%f",c);
 printf("\nArea of a circle=%f",a);
 return 0;
}

// OUTPUT:

/*
Enter radius=7
Circumference of a circle=43.960003
Area of a circle=153.860016
*/
