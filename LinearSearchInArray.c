#include<stdio.h>
void main()
{
 int i,ar[10],n,pos=-1;
 printf("Enter array:-\n");
 for(i=0;i<=9;i++)
 {
 printf("ar[%d]=",i);
 scanf("%d",&ar[i]);
 }
 printf("Enter number to be search=");
 scanf("%d",&n);
 for(i=0;i<=9;i++)
 {
 if(n==ar[i])
 {
 pos=i+1;
 }
 }
 if(pos==-1)
 {
 printf("Number not found.");
 }
 else
 {
 printf("Position=%d",pos);
 }
}

// OUTPUT:

/*
Enter array:-
ar[0]=15
ar[1]=24
ar[2]=65
ar[3]=45
ar[4]=78
ar[5]=34
ar[6]=20
ar[7]=74
ar[8]=49
ar[9]=39
Enter number to be search=34
Position=6
*/
