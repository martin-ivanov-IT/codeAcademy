// Задача 12. Ако имаме символен низ char str[] = “Hеllo”, заменете
// буквите l с х на същия символен низ и отпечатайте резултата на
// конзолата.
// //Задача 11. Ако имаме символен низ от символа char str[] = “Hello”;
// копирайте всеки един от неговите символи в низ, който да изглежда
// огледален на него. Ето така char rts[] = “ollaH”; и принтирайте
// резултата.
#include <stdio.h>

int main() {
char str[] = "Hello";

for (int i = 0; i <= 4; i++)
{
   if (str[i]=='l')
   {
       str[i] = 'x';
   }
   
}

printf("%s",str);


return 0;
}
