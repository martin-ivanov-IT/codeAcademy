// Задача 4.
// Дефинирайте пойнтер и опитайте да отпечатате стойността
// му на конзолата (%р) с printf.
// Какво се визуализира?
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 3;
    int* pInt = &a;

   printf("%p\n",pInt);
   printf("%p",&a);


 return 0;
}
