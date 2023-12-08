#include<stdio.h>
void main()
{
 int i,j,k,m1[3][3],m2[3][3],mul[3][3];
 printf("Enter first matrix:-\n");
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 scanf("%d",&m1[i][j]);
 }
 }
 printf("Enter second matrix:-\n");
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 scanf("%d",&m2[i][j]);
 }
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 mul[i][j]=0;
 for(k=0;k<=2;k++)
 {
 mul[i][j]=mul[i][j]+(m1[i][k]*m2[k][j]);

 }
 }
 }
 printf("Multiplication of metrices:-\n");
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 printf("%d ",mul[i][j]);
 }
 printf("\n");
 }
}

// OUTPUT:

/*
Enter first matrix:-
2
3
1
4
5
6
2
3
7
Enter second matrix:-
4
5
6
3
2
8
4
1
3
Multiplication of metrices:-
21 17 39
55 36 82
45 23 57
*/
