// Задача 16. Да се дефинира константата Пи (3.14159...) и да се напише
// функция, която изчислява лицето на окръжност по даден радиус (Пи * R * R).
// В main() да се извика горната функция с радиуси 1, 1.5, 13.

extern const double pi;

#include <stdio.h>

void r(double r);
void elipse(double a, double b);
const double pi;
int main() {
    r(1.);
    r(1.5);
    r(13.);

    elipse(1.2,1.3);
    elipse(5.,3.);
    
return 0;
}
const double pi = 3.14159;

void r (double r){
 
 printf("%f\n",(pi*r*r));
}

void elipse(double a, double b){
    printf("%f\n",(pi*a*b));
}