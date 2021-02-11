// Задача 6. Пренапишете функцията int linear_search(const int a[], int n, int
// key); използайки пойнтер аритмртиката без инкрементиращи променливи
#include <string.h>
#include <stdio.h>
int linSearch(int a[], int l, int d);
int main(){
 int arrNum[] = {1,1,3,4,5};
 int index = linSearch(arrNum,5,4);
 printf("index is: %d",index);
 return 0;
}

 int linSearch(int a[], int l, int d){
     int endDig = *(a + l -1);
     int index = 0;
     while (*a != endDig)
     {
         if (*a++==d)
         {
             return index;
         }
         ++index;
     }
     
     return -1;
     
 }