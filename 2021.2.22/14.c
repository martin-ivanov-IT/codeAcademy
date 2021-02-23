// Задача 14.
// Напишете тип за дата, използвайки битови полета. Направете
// функция, която извежда дата, използвайки новия тип. Направете
// функция, която валидира датата
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma pack(1)

enum bits
{
    FOUR,
    EIGHT,
    SIXTEEN,
    INT
};
struct st{
    int a : 5;
    int b : 9;
    int c : 17;
    int d;
    enum bits type;
};


void initUn(struct st* s,int a){
    if (a<15)
    {
        s->a = a;
        s->type = FOUR;
    }
    else if (a<255)
    {
        s->b = a;
        s->type = EIGHT;
    }
    else if (a<65535)
    {
        s->c = a;
        s->type = SIXTEEN;
    }
    else{
        s->d = a;
        s->type = INT;
    }
    
}
void printUn(struct st* s){
    if (s->type == FOUR)
    {
        printf("%d",s->a);
    }
    else if (s->type == EIGHT)
    {
        printf("%d",s->b);
    }
    else if (s->type == SIXTEEN)
    {
        printf("%d",s->c);
    }
    else if (s->type == INT)
    {
        printf("%d",s->d);
    }
    
    
}
 
int main( ) {
    struct st s;
    int a = 254;
    
    initUn(&s,a);
    printUn(&s);
}