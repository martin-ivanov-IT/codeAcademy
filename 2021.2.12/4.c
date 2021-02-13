// Задача 4.
// Заделяне и освобождаване на памет - malloc, free. Заделете
// динамично памет за масив и попълнете елементите

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
 int sum = 0;
 int count = 0;
 printf("enter size:\n");
 scanf("\n%d",&count);
 int* p = NULL;
 p = (int*) malloc(count * sizeof(int));

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

  free(p);

 return 0;
}