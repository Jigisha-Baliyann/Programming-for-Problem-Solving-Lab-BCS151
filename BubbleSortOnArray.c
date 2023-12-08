#include<stdio.h>
void main()
{
 int i,j,ar[10],temp;
 printf("Enter array:-\n");
 for(i=0;i<=9;i++)
 {
 printf("ar[%d]=",i);
 scanf("%d",&ar[i]);
 }
 for(i=0;i<=9;i++)
 {
 for(j=0;j<=9-i;j++)
 {
 if(ar[j]>ar[j+1])
 {
 temp=ar[j];
 ar[j]=ar[j+1];
 ar[j+1]=temp;
 }
 }
 }
 printf("Sorted array:-");
 for(i=0;i<=9;i++)
 {
 printf("\n%d",ar[i]);
 }
} 

// OUTPUT:

/*
Enter array:-
ar[0]=2
ar[1]=5
ar[2]=4
ar[3]=12
ar[4]=21
ar[5]=32
ar[6]=45
ar[7]=15
ar[8]=16
ar[9]=34
Sorted array:-
2
4
5
12
15
16
21
32
34
45
*/
