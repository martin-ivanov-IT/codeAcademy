// Задача 2. Напишете функция int printArr(int a[], int l), която
// получава като първи аргумент началото на масив от интеджери,
// а като втори неговата дължина и принтира всички елементи на
// масивa един по един до неговия край.
#include <string.h>
#include <stdio.h>
void printArr(int a[], int l);
int main(){
 int arrNum[] = {1,1,3,4,5};
 printArr(arrNum,5);
 return 0;
}

 void printArr(int* a, int l){

     for (int i = 0; i <l; i++)
     {
         printf("\n%d",a[i]);
     }
     
 }

