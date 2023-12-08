#include<stdio.h>
void main()
{
 int a,b,c;
 printf("Enter a=");
 scanf("%d",&a);
 printf("Enter b=");
 scanf("%d",&b);
 printf("Enter c=");
 scanf("%d",&c);

 if(a>b)
 {
 if(a>c)
 {
 printf("\na is greatest.");
 } 
else
 {
 printf("\nc is greatest.");
 }
 }
 else
 {
 if(b>c)
 {
 printf("\nb is greatest.");
 }
 else
 {
 printf("\nc is greatest.");
 }
 }
}

// OUTPUT:

/*
Enter a=10
Enter b=15
Enter c=12
b is greatest.
*/
