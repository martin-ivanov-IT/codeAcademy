// Зада 14. Напишете глобална променлива, която увеличаваме с 1 във
// функция void test(). Извикайте функцията три пъти test() от main()
// принтирайте стойността на глобалната променлива.

#include <stdio.h>
extern int n;
void test();
int main() {
    test();
    test();
    test();
    printf("%d",n);
return 0;
}
int n = 1;
void test(){
 ++n;
}
