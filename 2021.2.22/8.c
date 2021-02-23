// Задача 8.
// Напишете обединение от число и низ, както и описател с изброим
// тип за съдържанието на обединението. Напишете функция, която
// получава указател към обединението и изброимия тип и извежда
// съответно низ или число.
#include <stdio.h>
#include <string.h>
enum e{
    intValue,
    sValue
};

struct st
{
    int iValue;
    char stringValue[30];
    enum e type;
};

void printValue(struct st* pU ) {
    if (intValue == pU->type) {  
    printf("INT: %d\n", pU->iValue);
    }
    else if (sValue == pU->type) {
    printf("STR: %s\n", pU->stringValue);
}
}   
int main( ) {
    struct  st st1 = {.iValue = 12,.type = intValue};
    printValue(&st1);
    strcpy(st1.stringValue,"Hello");
    st1.type = sValue;
    printValue(&st1);
    return 0;
}   
