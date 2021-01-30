//Задача 4. Напишете функция, която връща резултат a*2 + b*c
#include <stdio.h>

int getSum(int a, int b, int c);

int main(){

    int a = 5, b = 1, c = 2;
    printf("%d",getSum(a,b,c));
 
    return 0;
}

int getSum(int a, int b, int c){
    return a*2 + b*c;
}

