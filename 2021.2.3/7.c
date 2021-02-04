// Задача 7. Дефинирайте масив int с 10 елемента. Дефинирайте
// пойнтер, който ще сочи към масива. Насочете пойнтера към масива. Нужно
// ли е да използвате &? Какво представлява името на масива? Какво сочи?
// Колко начина има за да изпишете насочването на пойнтера към масива.
// Има ли разлика между тях?

#include <stdio.h>
void printArr(int a[], int l);
int main(){
 int arrNum[] = {1,2,3,4,5,6,7,8,9,10};
 printArr(arrNum,10);
 printf("\n");
 printArr(&arrNum[0],10);
 return 0;
}

//*a points to the first element of the array
// int l is needed because the lenght of the array can not be taken from the pointer
 void printArr(int* a, int l){

     for (int i = 0; i <l; i++)
     {
         printf("\n%d",a[i]);
     }
     
 }

