#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "p.h"

node_t *start;

int main( ) {
   add(1);
   add(2);
   add(3);
   printAfter(start);
   int x = 1;
   printf("\ndelete first element\n");
   dellFirst(&x);
   printAfter(start);
   
    return 0;
     
}
