/* 
*
*	Program: To find factorial.
* 	Author Kusal Bista
* 	Date: 07/14/2016
*   Ref: Data Structure using C and C++
*/

#include <stdio.h>
//Recursive Function
int factorial( int i) {

   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}
//main function
int  main() {
   int i;
   printf("Enter any Number to obtain factorial");
   scanf("%d",&i);
   printf("Factorial of %d is %d\n", i, factorial(i));
   return 0;
}
