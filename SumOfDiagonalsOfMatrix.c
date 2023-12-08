#include<stdio.h>
void main()
{
 int i,j,k,matrix[3][3],sum=0;
 printf("Enter matrix:-\n");
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 scanf("%d",&matrix[i][j]);
 }
 }
 printf("Matrix is:-\n");
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 printf("%d ",matrix[i][j]);
 }
 printf("\n");
 }
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 if(i==j)
 {
 sum = sum + matrix[i][j];
 }
 }
 }
 printf("Sum of diagonal is = %d ",sum);

}

// OUTPUT:

/*
Enter matrix:-
1
2
3
4
5
6
7
8
9
Matrix is:-
1 2 3
4 5 6
7 8 9
Sum of diagonal is = 15
*/
