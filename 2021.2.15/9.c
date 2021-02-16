#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
   int a = 5;
   int* ptr = &a;
   int** ptr2 = &ptr;
   **ptr2 = 3;
   *ptr = 5;
   printf("\n%p",*ptr2);
   printf("\n%p",ptr);
   printf("\n%p",&a);


 return 0;
}
