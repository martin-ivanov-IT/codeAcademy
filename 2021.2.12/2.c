// Задача 2 Разширяване на заделена памет с realloc

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

  printf("\nhow much elements to be added\n");
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
     sum+=p[i];
     printf("\n%d",p[i]);
 }
 
 return 0;
}

 