#include<stdio.h>
void main()
{
 int i,ar[10],min,max;
 printf("Enter array:-\n");
 for(i=0;i<=9;i++)
 {
 printf("ar[%d]=",i);
 scanf("%d",&ar[i]);
 }
 min=ar[0];
 max=ar[0];
 for(i=0;i<=9;i++)
 {
 if(min > ar[i])
 {
 min=ar[i];
 }
 if(max < ar[i])
 {
 max=ar[i];
 }
 }
 printf("\nMin=%d",min);
 printf("\nMax=%d",max);
}

// OUTPUT:

/*
Enter array:-
ar[0]=4
ar[1]=6
ar[2]=12
ar[3]=21
ar[4]=36
ar[5]=47
ar[6]=5
ar[7]=8
ar[8]=9
ar[9]=2
Min=2
Max=47
*/
