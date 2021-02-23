// Задача 11.
// Направете обединение с елементи тип int, int, char. Дайте
// стойност на елементите един по един -7,10 и “c” и изведете
// тези стойности на конзолата.
// Инициализирайте и трите и изведете стойностите им на
// конзолата.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct st
{
    int iValue;
    int iValue2;
    char c;
};

 
int main( ) {
    struct  st st1;
    st1.iValue = 5;
    st1.iValue2 = 5;
    st1.c = 'c';
    printf("intValue: %d\n",st1.iValue);
    printf("intValue2: %d\n",st1.iValue2);
    printf("c: %c\n",st1.c);
    return 0;
}   