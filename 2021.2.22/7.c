// Задача 7.
// Напишете обединение от три стойности: цяло число, число с
// плаваща запетая и низ. Инициализирайте отделните членове и ги
// изведете на екрана.
#include <stdio.h>
#include <string.h>
union u
{
    int iValue;
    float fValue;
    char stringValue[30];

    
};
int main( ) {
    union  u u1;
    u1.iValue = 5;
    printf("iValue =%d\n",u1.iValue);
    u1.fValue = 3.5;
    printf("fValue =%f\n",u1.fValue);
    strcpy(u1.stringValue,"test");
    printf("strValue = %s\n",u1.stringValue);

    return 0;
}   
