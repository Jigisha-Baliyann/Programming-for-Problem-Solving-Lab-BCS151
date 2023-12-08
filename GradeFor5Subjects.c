#include<stdio.h>
void main()
{
 int hindi, english, science,math,computer,sum ;
 float per;
 printf("Enter marks of Hindi=");
 scanf("%d",&hindi);
 printf("Enter marks of English=");
 scanf("%d",&english);
 printf("Enter marks of Science=");
 scanf("%d",&science);
 printf("Enter marks of Math=");
 scanf("%d",&math);
 printf("Enter marks of Computer=");
 scanf("%d",&computer);

 sum=hindi+english+science+math+computer;
 printf("\nSum of marks=%d",sum);

 per=(float)sum/5;
 printf("\nPercentage of marks=%f",per);

 if(per>=90&&per<=100)
 {
 printf("\nGrade A");
 }
 else if(per>=80&&per<90)
 {
 printf("\nGrade B");
 }
 else if(per>=60&&per<80)
 {
 printf("\nGrade C");
 }
 else if(per<60)
 {
 printf("\nGrade D");
 }
}

// OUTPUT:

/*
Enter marks of Hindi=45
Enter marks of English=65
Enter marks of Science=89
Enter marks of Math=78
Enter marks of Computer=65
Sum of marks=342
Percentage of marks=68.400002
Grade C
*/
