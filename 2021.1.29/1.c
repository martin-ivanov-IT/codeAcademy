// Задача 1.Направете глобална константа pi = 3.14, както правихме в
// предишния урок. Напишете функция, която изчислява площта на кръг, на
// която като параметър подаваме радиуса и връщаме площта на кръга.
// Използвайте глобалната константа pi, за да извършите изчисленията.
// Извикайте функцията в main() и покажете резултата.

#include <stdio.h>

extern const double  pi;
double aCircle(double r);

int main(){

 double r;
 scanf("%lf",&r);
 printf("area = %lf",aCircle(r));

 return 0;
}

double aCircle(double r){
    return r*r*pi;
}

const double pi = 3.14;
