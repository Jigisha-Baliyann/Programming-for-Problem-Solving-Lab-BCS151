#include<stdio.h>
#include<math.h>
void main()
{
 int n,r,rev=0,p=0;
 printf("Enter decimal number=");
 scanf("%d",&n);
 while(n>0)
 {
 r=n%2;
 if(r!=0)
 {
 rev= rev+(int)pow(10,p);
 }
 n=n/2;
 p++;
 }
 printf("Binary number=%d",rev);
} 

// OUTPUT: 

/*
Enter decimal number=1110
Binary number=14
*/
