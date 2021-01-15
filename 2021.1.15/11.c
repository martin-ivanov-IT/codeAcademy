// //Задача 11. Ако имаме символен низ от символа char str[] = “Hello”;
// копирайте всеки един от неговите символи в низ, който да изглежда
// огледален на него. Ето така char rts[] = “ollaH”; и принтирайте
// резултата.
#include <stdio.h>

int main() {
char str[] = "Hello";
char rts[5] = "";
int count = 0;
for (int i = 4; i >= 0; i--)
{
    rts[i] = str[count];
    count ++;
}
rts[5]='\0';

printf("%s",rts);


return 0;
}