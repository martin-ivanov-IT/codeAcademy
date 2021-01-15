// Задача 15. Използвайте статична локална променлива, за да постигнете
// същото поведение, описано в задача 14.

#include <stdio.h>

void test();
int main() {
    test();
    test();
    test();
    
return 0;
}

void test(){
 static int n = 1;
 ++n;
 printf("%d\n",n);
}
