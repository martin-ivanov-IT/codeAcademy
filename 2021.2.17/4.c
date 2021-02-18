// Задача 4.
// Напишете две функции:
// void push(int) (добавя елемент на края на стека) и
// int pop() (премахва елемент от края на стека)
// за стек с дълбочина 16 (може да се използва масив от 16 елемента от
// тип int).
// Проверете дали функциите работят коректно във функция main, като
// добавите 15 елемента и след това ги извадите от стека и ги изведете на
// екрана.
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int* arr; 
void push(int a){
    arr++;
    *arr = a;
}

void pop(){
    printf("%d\n",*arr);
    arr--;
}
int main(){
    arr = (int*)malloc(sizeof(int) * 16);
    void (*func_ptr[2])() = {pop,push};
    for (int i = 0; i < 16; i++)
    {
            (*func_ptr[1])(i);
    }
    
     for (int i = 0; i < 16; i++)
    {
            (*func_ptr[0])();
    }


 return 0;
}