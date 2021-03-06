// Задача 10.
// Използвайки горните две задачи като база, обединете
// обединението и описателя в една структура. Напишете функция,
// която извежда съдържанието на новата структура.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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

void custom_parseToInt(struct st* pSt){
    int x = atoi(pSt->stringValue);
    pSt->type = intValue;
    pSt->iValue = x;
}
 
int main( ) {
    struct  st st1 = {.stringValue = "123",.type = intValue};
    custom_parseToInt(&st1);
    printValue(&st1);
    return 0;
}   