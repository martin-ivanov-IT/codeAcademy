// Задача 12.
// Напишете програма, която използва битови полета. Битовите полета да
// са членове на структура и да са от следните типове: unsigned int и char.
// Задайте им размер short int 3 бита, char 6 бита. struct <tagStruct> {
// Ctype m_bitField : N;
// CType2 m_bitField2 : M;
// };
// Дефинирайте променлива на структурата и инициализирайте ги със
// стойност 7 и съответно ‘c’.
// Разпечатайте елементите. Разпечатайте и големината на структурата.
// Добавете още членове от съществуващите типове и разпечатайте
// големината на структурата отново. Пренаредете ги като
// последователност, да са char, char, short int, short int. Как се променя
// големината на структурата?
// Опитайте същото с препроцесор #pragma pack(1)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma pack(1)
struct st
{
    unsigned int iValue : 3;
    char c : 6;
    char c2;
};

 
int main( ) {
    struct  st st1;
    st1.iValue = 7;
    st1.c = 'c';
    printf("intValue: %d\n",st1.iValue);
    printf("c: %c\n",st1.c);
    printf("size %d\n",sizeof(st1));
    return 0;
}   