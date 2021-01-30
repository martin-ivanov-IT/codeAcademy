// Задача 7. Напишете програма на С, която съдържа 2 функции.
// 1.Първата смята лице на правоъгълен триъгълник.
// 2.Втората използва лицето на триъгълника, за да сметне лице на
// четириъгълник със същите дължини на страните, като раменете на
// триъгълника.
// Напишете прототипите на функциите най-отгоре, а телата им под
// мейн функцията.

#include <stdio.h>

double areaTriangle(double a, double b);
double areaRegtangle(double a, double b);

int main(){

    double a;
    double b;
    printf("Enter a\n");
    scanf("%lf",&a);
    printf("Enter b\n");
    scanf("%lf",&b);
    printf("Area of right triangle: %lf\n",areaTriangle(a,b));
    printf("Area of regtangle: %lf",areaRegtangle(a,b));
    return 0;
}

double areaTriangle(double a, double b){
    return a*b*0.5F;
}

double areaRegtangle(double a, double b){
    return areaTriangle(a, b)*2;
}

