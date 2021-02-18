// Задача 9.
// Напишете по 2 тройни цикъла (един и същи код) за масивите.
// Хайде да го изнесем във функция.
#include <stdio.h>
int fib[24];
void fibCalc(){
        int i;
        for(i = 2; i < 24; i++)
                fib[i] = fib[i-1] + fib[i-2];

        for (i = 0; i < 24; i++)
                printf("%d   %d\n", i, fib[i]);
}

int main()
{       
        fib[0] = 0;
        fib[1] = 1;
        void (*func_ptr)() = fibCalc;
        func_ptr();
        
   
}