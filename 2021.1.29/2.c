// Задача 2. Напишете функция area() без параметри. Поискайте от
// потребителя да въведе радиуса с помощта на функциите :
// printf("Enter a radius\n");
// scanf("%lf", &r);
// Използвайте горната функция 1.за изчисляване на площта на кръг,
// която написахме преди малко за да изчислите площта на кръга с този
// радиус и върнете резултата: 

#include <stdio.h>
double aCircle(double r);
double area();
extern const double  pi;

int main(){

    area();

    return 0;
}

const double pi = 3.14;

double aCircle(double r){
    return r*r*pi;
}

double area(){
    double r;
    printf("Enter a radius\n");
    scanf("%lf",&r);
    printf("area = %lf",aCircle(r));
}
