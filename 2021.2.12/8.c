// Задача 1. Да се направи програма, която заделя динамичен масив с брой елементи
// зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
// цяло и число и след това се изчислява сумата на всички елементи от масива
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
 int sum = 0;
 int count = 0;
 printf("enter size:\n");
 scanf("\n%d",&count);
 int* p = NULL;
 p = (int*) alloca(count * sizeof(int));

 printf("enter array:\n");
 for (int i = 0; i < count; i++)
 {
     int num;
     scanf("\n%d",&num);
     p[i] = num;
 }

 printf("array is:");
 for (int i = 0; i < count; i++)
 {
     sum+=p[i];
     printf("\n%d",p[i]);
 }
  printf("\nsum is: %d",sum);

 return 0;
}

 