//Задача 3. Напишете функция, която връща резултат (а+в)*4.
#include <stdio.h>

int getSum(int a, int b);

int main(){

    int a = 5, b = 1;
    printf("%d",getSum(a,b));
 
    return 0;
}

int getSum(int a, int b){
    return(a+b)*4;
}

