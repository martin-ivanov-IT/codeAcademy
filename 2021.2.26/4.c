// Задача 4 Дефинирайте функция, която събира
// две променливи и приема и изпълнява предефиниран
// указател, като стойност.
#include <stdio.h>
typedef long long int t_lli;
typedef t_lli* t_lli_p;

t_lli_p func(t_lli_p p1, t_lli_p p2){
    t_lli a;
    t_lli_p p = &a;
    a = *p1 + *p2;
    return p;
}
int main(){
    t_lli a = 5;
    t_lli b = 3;
    //t_lli res = func(&a, &b);
    printf("res: %lld",*func(&a, &b));
    return 0;
}
