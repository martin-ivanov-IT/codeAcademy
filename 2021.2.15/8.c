// Задача 8.
// Дефинирайте и инициализирайте променлива и пойнтер
// към нея. Отпечатайте адреса на пойнтера с %p с printf.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 3;
    int* pInt = &a;

    printf("adress of pointer %p\n",&pInt);
    printf("adress of a %p\n",&a);
    printf("where pomiter points %p\n",pInt);

 return 0;
}