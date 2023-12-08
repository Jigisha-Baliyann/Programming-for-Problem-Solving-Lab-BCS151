#include <stdio.h>

int main()
{
 int n, sum = 0, c, value;

 printf("How many numbers you want to add?\n");
 scanf("%d", &n);

 printf("Enter %d integers\n", n);

 for (c = 1; c <= n; c++)
 {
 scanf("%d", &value);
 sum = sum + value;
 }

 printf("Sum of the integers = %d\n", sum);

 return 0;
} 

// OUTPUT:

/*
How many numbers you want to add?
4
Enter 4 integers
1
2
3
4
Sum of the integers = 10
*/
