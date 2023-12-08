#include<stdio.h>
void main()
{
 int choice,a,b;
 printf("Select your choice:\n");
 printf("1- Add:\n");
 printf("2- Sub:\n");
 printf("3- Mul:\n");
 printf("4- Div:\n");
 printf("5- Mod:\n");
 printf("Enter number a=");
 scanf("%d",&a);
 printf("Enter number b=");
 scanf("%d",&b);
 printf("Enter your choice=");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 printf("Add of a and b %d",(a+b)); // Add = Addition
 break;
 case 2:
 printf("Sub of a and b %d",(a-b)); // Sub = Subtraction
 break;
 case 3:
 printf("Mul of a and b %d",(a*b)); // Mul = Multiplication
 break;
 case 4:
 printf("Div of a and b %d",(a/b)); // Div = Division
 break;
 case 5:
 printf("Mod of a and b %d",(a%b)); // Mod = Modulo OR Remainder
 break;
 default:
 printf("Wronf choice.");

 }
}

// OUTPUT:

/*
Select your choice:
1- Add:
2- Sub:
3- Mul:
4- Div:
5- Mod:
Enter number a=7
Enter number b=5
Enter your choice=3
Mul of a and b 35
*/
