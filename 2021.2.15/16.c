// Задача 16.
// Направете същото, както в задача 17, но използвайки
// готовата функция strcpy. Потърсете онлайн как работи
// тази функция и какви аргументи приема.
// https://www.tutorialspoint.com/c_standard_library/c_function_strcpy.h
// tm
#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[]){
    char str[100];
    char str2[100];
    char* strToBeCopied = "A string to be copied!";
    char* str2ToBeCopied = "I am very good in strings coping!";
    
    strcpy(str,strToBeCopied);
    printf("%s\n",str);

    strcpy(str2,str2ToBeCopied);
    printf("%s",str2);
    

 return 0;
}