#include<stdio.h>
void main()
{
 int i=1,r,aNum=0,num;
 for(i=1;i<=1000;i++)
 {
 num=i;
 aNum=0;
 while(num>0)
 {
 r=num%10;
 aNum=aNum+r*r*r;
 num=num/10;
 }
 if(i==aNum)
 {
 printf("Armstrong Number=%d\n",i);
 }
 }
}

// OUTPUT:

/*
Armstrong Number=1
Armstrong Number=153
Armstrong Number=370
Armstrong Number=371
Armstrong Number=407
*/
