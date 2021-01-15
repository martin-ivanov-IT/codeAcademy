// Задача 13. Ако имаме символен низ char str[] = “HELLO”, заменете
// всичките символи с главна буква със съответните символи с малка
// буква.

#include <stdio.h>

int main() {
char str[] = "HELLO";

for (int i = 0; i <= 4; i++)
{
   str[i]+=32;
   
   
}

printf("%s",str);


return 0;
}
