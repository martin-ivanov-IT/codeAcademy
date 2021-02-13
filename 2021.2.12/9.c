// Задача 9.
// Разширяване на заделена памет с realloc
// Напишете програма, която пита потребителя колко
// памет иска и заделя съответния блок памет. След
// това попитайте потребителя за нов размер и
// използвайте функция, която прави това

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
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

  printf("how much elements do you want to add:\n");
  int added;
  scanf("\n%d",&added);
  
  p = (int *) realloc(p, added * sizeof(int));

printf("enter new elements:\n");
  for (int i = 0; i < added; i++)
 {
     int num;
     scanf("\n%d",&num);
     p[i+count] = num;
 }

  printf("new array is:");
  for (int i = 0; i < count + added; i++)
 {
     printf("\n%d",p[i]);
 }
 
 return 0;
}

 