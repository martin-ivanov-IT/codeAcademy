// Задача 3 Напишете функции, с помощта на които да реализирате динамичен
// масив от елементи, чиято големина може да се променя по време на
// изпълнение на програмата

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int* makeBiggerWith(int* a, int n);
int* makeArrayOfSize(int* a, int n);
int main(){
 int sum = 0;
 int count = 0;
 printf("enter size:\n");
 scanf("\n%d",&count);
 int* p = NULL;
 p = makeArrayOfSize(p,count);

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
 
printf("\nhow much elements to be added\n");
int added;
scanf("\n%d",&added);
p = makeBiggerWith(p,added);

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

int* makeArrayOfSize(int *a, int n){
    a = (int*) malloc(n * sizeof(int));
    return a;
}

int* makeBiggerWith(int* a, int n){
    a = (int *) realloc(a, n * sizeof(int));
    return a;
}
