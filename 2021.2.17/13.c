// Задача 13.
// Напишете програма, която да прочете низ от потребителя и да го обърне
// в обратен ред.
// Например: 'xyz' да стане 'zyx'
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void getReversed(char* s)   
{
    for (int j = strlen(s) - 1; j>=1 ; s++, j--)
    {
        char temp = *s;
        *s = *(s+j);
        *(s+j) = temp;
        j--;
    }
}

int main(){
char s[] = "Hello world";
getReversed(s);
printf("%s",s);
 
 return 0;
}
