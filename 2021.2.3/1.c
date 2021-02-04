// Задача 1 декларирайте три масива с три елемента:
// Първият от тип char
// Вторият от тип int
// Третият от тип double
// Отпечатайте размерите на масивите използвайки
// оператора sizeof(arr);
#include <string.h>
#include <stdio.h>
int main(){
 char string[] = {'1','2'};
 int arrNum[] = {1,1,3,4,5};
 double arrD[] = {1,1}; 
 printf("size of char[]: %d \n",sizeof(string));
 printf("size of int[]: %d \n",sizeof(arrNum));
 printf("size of double[]: %d \n",sizeof(arrD));

 printf("last of int[]: %d\n",arrNum[sizeof(arrNum) / sizeof(arrNum[0]) -1] );
 printf("last of char[]: %c\n",string[sizeof(string) / sizeof(string[0]) -1] );
 printf("last of double[]: %lf\n",arrD[sizeof(arrD) / sizeof(arrD[0]) -1] );
 return 0;
}


