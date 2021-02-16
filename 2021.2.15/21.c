// Задача 21. Напишете функция, която сортира лексикографски масив от
// символи (char[]) използвайки qsor
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void quicksort(char number[],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}

int main(){
    
 int i, count;
 char arr[25];

   printf("How many elements are u going to enter?: ");
   scanf("%d",&count);
   printf("Enter %d letters:\n", count);
   for(i=0;i<count;i++)
      scanf("\n%c",&arr[i]);

   quicksort(arr,0,count-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf("%c",arr[i]);

   return 0;


 return 0;
}