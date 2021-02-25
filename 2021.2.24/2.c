// 2. Напишете макрос swap(t, x, y), койтo променя местата на двата аргумента
// от тип t.
#include <stdio.h>
#define PI 3.14
#define E 2.718
#define swap(t,x,y) {t i = x; x = y; y = i;}
int main(){
    double a = PI*E;
    printf("%lf", a);
    int b = 1;
    int c = 0;
    swap(int,b,c);
    printf("\nc = %d",c);
 return 0;
}


