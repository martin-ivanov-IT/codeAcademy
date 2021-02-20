// Задача 11. Дефинирайте структура, в която има член указател към самата
// структура. Използвайте тази структура, за да дефинирате две променливи,
// които се указват една друга.
#include <stdio.h>
#include <string.h>
struct st {
 struct st* ptr;
 int n;
};

int main( ) {
    struct st first;
    struct st second;
    first.n = 5;
    second.n = 7;
    first.ptr = &second;
    second.ptr = &first;
    printf("%d",first.ptr->n);    

    return 0;
}