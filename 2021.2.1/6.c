// Задача 6. Напишете функция, която изчислява произведението на
// числата от 1 до 30.
#include <stdio.h>
int main(){

 int sum = 0;
 for (int i = 1; i <=30; i++)
 {
     sum += i;
 }
 printf("%d",sum);
 return 0;
}


