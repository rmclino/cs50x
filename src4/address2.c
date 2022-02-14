// Stores and prints an integer's address

#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    n = n + 1;
    p = *p + 1;
    printf("%p\n", &p);
    printf("%p\n", p);
    printf("%i\n", *p);


   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */

   *ip = &var;  /* store address of var in pointer variable*/

   printf("Address of var variable: %x\n", &var  );

   /* address stored in pointer variable */
   printf("Address stored in ip variable: %x\n", ip );

   /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip );

   return 0;
}
