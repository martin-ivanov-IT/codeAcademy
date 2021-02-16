// zad 13
// Напишете програма, която намира дължината на стринг с
// пойнтер! (без да използва length());

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char* s = "String";
    
    int i = 0;
    while (*s++)
    {
        i++;
    }
    printf("%d",i);
    
 return 0;
}