// Задача 1.Напишете функцията void printStr(char *s) аргумент поинтер
// към началото на стринга. Използвайте for цикъл и обходете стринга докато
// не стигнете знака за на стринг '\0'. На ваяка итерация пристирайте всеки
// един елемент на стринга с printf(“%с”, с).

#include <stdio.h>
void printArr(char a[]);

int main(){
 char str[] = "Hello world";
 printArr(str);
 return 0;
}

 void printArr(char* a){

    int i = 0;
    for (int i = 0; a[i]!='\0'; i++)
    {
       printf("%c",a[i]);
    }
    
     
 }