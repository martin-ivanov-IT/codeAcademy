// Задача 10. Напишете програма на С, която съдържа 3 функции,
// изнесете прототипите им в отделен .h файл.
// 1. Първата функция да калкулира най-малко общо кратно на две положителни
// числа.
// 2. Втората функция връща абсолютна стойност на числата (положителната
// стойност на числата).
// a. Трябва да може да приеме като параметър float и да върне float.
// b. Тествайте с инт и float.
// 3. Напишете функция, която калкулира корен квадратен от число.
// a. Проверете дали резултатът е отрицателно число и върнете -1.
// b. Използвайте втората си функция, за да обърнете числото в положително и
// да намерите корен квадратен от него.

#include <stdio.h>
#include "f.h"
int main(){

 int a, b, d;
 double c;
 printf("enter two integers for NOK\n");
 scanf("%d",&a);
 scanf("%d",&b);
 printf("enter double\n");
 scanf("%lf",&c);
 printf("enter integer for sqrt function\n");
 scanf("%d",&d);
 printf("NOK of %d and %d is: %d\n",a,b,NOK(a,b));
 printf("abs of %lf is: %lf\n",c,abstDouble(c));
 printf("abs of %d is: %d\n",d,abstInt(d));
 printf("sqrt of %d is: %d\n",d,getSqrt(d));
 printf("abs sqrt of %d is: %d",d,getAbsSqrt(d));
 return 0;
}

int NOK(int a , int b){
    int aMembers[1000];
    int bMembers[1000];
    for (int i = 0; i < a; i++)
    {
        aMembers[i]=(i+1)*a;
    }
    for (int i = 0; i < b; i++)
    {
        bMembers[i]=(i+1)*b;
    }

    for (int j = 0; j < a; j++)
    {
        for (int k = 0; k < b; k++)
        {
         if (aMembers[j] == bMembers[k])
         {
             return aMembers[j];
         }
         
        }
        
    }
    return a*b;
}

double abstDouble(double n){
    return n >= 0.0 ? n : (n*(-2.0)+n);
}

int abstInt(int n){
    return n >= 0 ? n : (n*(-2)+n);
}

int getSqrt(int number){
    double temp, sqrt;
    sqrt = number / 2;
    temp = 0;
    if(number<0){
        return -1;
    }
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( number/temp + temp) / 2;
    }

    return sqrt;
}

int getAbsSqrt(int number){
    number = abstInt(number);
    double temp, sqrt;
    sqrt = number / 2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( number/temp + temp) / 2;
    }

    return sqrt;
}

