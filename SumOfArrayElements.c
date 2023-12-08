#include <stdio.h>
int main()
{
 int arr[100];
 int i, n, sum=0;
 /* Input size of the array */
 printf("Enter size of the array: ");
 scanf("%d", &n);
 /* Input elements in array */
 printf("Enter %d elements in the array: ", n);
 for(i=0; i<n; i++)
 {
 printf(“arr[i]=%d”,i);
 scanf("%d", &arr[i]);
 /*
 * Add each array element to sum
 */

 sum = sum + arr[i];
}
 printf("Sum of all elements of array = %d", sum);
 return 0;
}

// OUTPUT:

/*
Enter size of the array: 10
Enter 10 elements in the array: 10 20 30 40 50 60 70 80 90 100
Sum of all element of array=550
*/
