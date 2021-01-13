// 5. Използвайте функцията sizeof(),за да проверите размера
// на типа на вашата машина. Типове за проверка- integer, float,
// short int, unsigned long int
#include <stdio.h>
int main(){
    int i = 1;
    float f = 1.0;
    short int si = 1;
    unsigned long long int li = 1;
    printf("%d\n",sizeof(i));
    printf("%d\n",sizeof(f));
    printf("%d\n",sizeof(si));
    printf("%d\n",sizeof(li));

    return 0;

}