// Задача 6. Напишете функция с прототип my_swap(а, b), която разменя
// стойностите на две цели числа без да използва спомагателна променлива
// (например: *a = *a + *b; *b = *a - *b; *a = *a - *b). 
#include <stdio.h>
void my_swap(int* c, int* b);
int main() {
int c = 13;
int b = 15;
my_swap(&c,&b);
printf("c = %d\n",c);
printf("b = %d\n",b);
return 0;
}
void my_swap(int* c, int* b){    
 *c = *c + *b;
 *b = *c - *b;
 *c = *c - *b;
}