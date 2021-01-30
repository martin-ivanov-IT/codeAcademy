// Задача 5. Напишете програма на С, която чрез функция проверява
// дали дадено число е четно или не

#include <stdio.h>

int isOdd(int a);

int main(){

    int a;
    printf("Enter number\n");
    scanf("%d",&a);
    if (isOdd(a))
    {
        printf("Number %d is odd",a);
    }
    else{
        printf("Number %d is even",a);
    }
    
 
    return 0;
}

int isOdd(int a){
    return a % 2;
}

