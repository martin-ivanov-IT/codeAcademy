// Задача 9. Напишете три функции, които да правят изчисление по ваш
// избор и да се извикват по следния начин:
// Main вика Ф1;
// Ф1 вика Ф 2;
// Ф2 вика Ф3;
// Изнесете прототипите им в отделен .h файл.

#include <stdio.h>
#include "f.h"
int main(){
    int a = 1;
    printf("result is %d",addThree(a));
 return 0;
}

int addOne(int a){
    return a+1;
}

int addTwo(int a){
    a = addOne(a);
    a = addOne(a);
    return a;
}

int addThree(int a){
    a = addOne(a);
    a = addTwo (a);
    return a;
}

