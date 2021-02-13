// Задача 7.
// Заделяне на памет с calloc
// Заделете динамична памет за масив от елементи, като
// извикате функция, която нулира заделената памет.

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
 int count = 0;
 printf("enter size:\n");
 scanf("\n%d",&count);
 int* p = NULL;
 p = (int*) calloc(count,sizeof(int));
 printf("temporal value after calloc():%d\n",*p);

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
     printf("\n%d",p[i]);
 }

 return 0;
}