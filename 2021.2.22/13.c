// Задача 13.
// Направете обединение с членове unsigned short и char. Ограничете
// използваните битове до 6. Инициализирайте и изведете на
// конзолата.
// union <tagUnion> {
// Ctype m_bitField : N;
// };
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma pack(1)
struct st
{
    unsigned short iValue : 6;
    char c : 6;
};

 
int main( ) {
    struct  st st1;
    st1.iValue = 7;
    st1.c = '!';
    printf("intValue: %d\n",st1.iValue);
    printf("c: %c\n",st1.c);
    printf("size %d\n",sizeof(st1));
    return 0;
}