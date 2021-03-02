// Задача 6. Напишете структура с потребителски тип key_t, която
// съдържа символен низ и число.
#include <stdio.h>
typedef struct key_t {
    int a;
    char s[10];
}key_t;

int main(){
    key_t st = {5,"test"};
    printf("%d\n",st.a);
    printf("%s\n",st.s);
    return 0;
}




