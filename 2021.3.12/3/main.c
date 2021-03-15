#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "p.h"

node_t *start;

int main( ) {
   for (int i = 1; i <= 14; i++)
    {
        add(i);
    }
    printNth(5);
     
}
