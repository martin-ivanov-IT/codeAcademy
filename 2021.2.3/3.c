// Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
// която получава като първи аргумент началото на масив а, втория
// аргумент е дължината на масива, а третия аргумент е числото,
// което търсим. Претърсете масива елемент по елемент и ако
// някой елемент съвпада с търсеното число върнете позицията на
// която се намира този елемент. В противен случай върнете – 1.
#include <string.h>
#include <stdio.h>
int linSearch(int a[], int l, int d);
int main(){
 int arrNum[] = {1,1,3,4,5};
 int index = linSearch(arrNum,5,3);
 printf("index is: %d",index);
 return 0;
}

 int linSearch(int a[], int l, int d){

     for (int i = 0; i <l; i++)
     {
         if (a[i]==d)
         {
             return i;
         }
 
     }
     return -1;
     
 }

