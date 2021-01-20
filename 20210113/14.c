// Упражнение 13. Да се състави програма, която заделя памет за данни от тип: char, int, long, float, double,
// инициализира по време на компилация съответните променливи съответно
// в: a=‘a’, b=102, c=50000, d=6, e=-48.907. Програмата да извежда на екрана съдържанието на заделената за данни
// памет, форматирано в съответствие с типа на отделните елементи данн
#include <stdio.h>
int main(){
    char a = 'a';
    int b = 102;
    long long c= 50000;
    float d = 6.0;
    double e = 48.907;

    printf("the size of char a is ");
    printf("%d\n",sizeof(a));
    printf("the size of int b is ");
    printf("%d\n",sizeof(b));
    printf("the size of long c is ");
    printf("%d\n",sizeof(c));
    printf("the size of float d is ");
    printf("%d\n",sizeof(d));
    printf("the size of double e is ");
    printf("%d\n",sizeof(e));

    return 0;

}