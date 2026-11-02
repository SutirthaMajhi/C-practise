#include <stdio.h>

int main(void)
{
   int *ptr;     // create a pointer
   int x;        // create an integer

   ptr = &x;     // assign the address of x to ptr
   *ptr = 0;     // assign 0 to the location pointed to by ptr

   printf(" x = %d\n", x);     // x = 0
   printf("*ptr = %d\n", *ptr );  // *ptr = 0

   *ptr +=5;         // increment the value pointed to by ptr by 5//
   printf("x = %d\n", x);     // x = 5//
   printf("*ptr = %d\n", *ptr);          // *ptr = 5//

   (*ptr)++;
   printf("x = %d\n", x);        // x = 6 //
   printf("*ptr = %d\n", *ptr);          // *ptr = 6 //
   return 0;
}