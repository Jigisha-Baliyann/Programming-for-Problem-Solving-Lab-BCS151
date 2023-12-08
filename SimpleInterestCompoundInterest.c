#include<stdio.h>
#include<math.h>
int main()
{
 float p, r, t, a, si, ci;
 printf("Enter Principle=");
 scanf("%f",&p);
 printf("Enter Rate=");
 scanf("%f",&r);
 printf("Enter Time=");
 scanf("%f",&t);

 si=(p*r*t)/100;

 printf("Simple Interest=%f",si);
 a = p*(pow((1 + r / 100), t));
 ci = a - p;
 printf("\nCompound Interest=%f",ci);
return 0;
}

// OUTPUT:

/*
Enter Principle=100
Enter Rate=10
Enter Time=3
Simple Interest=30.000000
Compound Interest=33.100010
*/
