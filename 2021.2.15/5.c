// Задача 5.
// Дефинирайте и инициализирайте int променлива = 34 и
// пойнтер към нея.
// Опитайте да ги разместите, като поредност (първо да е
// пойнтерът, после променливата)#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int* pInt = &a;
    a = 3;

   printf("%d\n",*pInt);


 return 0;
}
