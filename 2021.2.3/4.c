// Задача 4.Напишете функцията int binarySearch(int a[], int n, int
// x), която получава като първи аргумент началото на масив а,
// втория аргумент е дължината на масива, а третия аргумент е
// числото, което търсим. Знаем, че масива в който ще търсим
// елемента е предварително подреден. Сравняваме тъсения
// елемент с елемента в средата на масива. Ако той е по голям от
// този в средата търсим елемента от средата до края, ако е помалък го търсим в частта от началото до средата. Това се
// повтаря, докато елемента от масива не стане равен с търсения.
// Тогава връщаме номера на който се намира елемента в масива
// или -1 ако не се съдържа в масива.
#include <string.h>
#include <stdio.h>
int binarySearch(int a[],int l, int n, int x);
int main(){
 int arrNum[] = {0,1,2,3,4,5,6};
 int x = 2;
 int n = sizeof(arrNum) / sizeof(arrNum[0]);
 int index = binarySearch(arrNum, 0, n - 1, x); 
 printf("index is: %d",index);
 return 0;
}

 int binarySearch(int a[],int l, int n, int x){
 if (n>=1)
 {
         
     int middle = l + (n - l) / 2;

     if (a[middle]==x){
        
        return middle;

     }
     
     if (a[middle] > x){
            return binarySearch(a, l, middle - 1, x);
     }
     
   return binarySearch(a, middle + 1, n, x);
 }

return -1;

 }

