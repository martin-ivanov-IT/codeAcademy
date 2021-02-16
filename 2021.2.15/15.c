// Задача 15.
// Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
// string 1: "A string to be copied."
// string3: "I am very good in strings coping!"
// Дефинирайте и два празни стринга, в които ще копираме string 2,
// string4. Дефинирайте функция, която през пойнтери ще извърши
// копирането от стринг към стринг. Използвайте while и факта, че
// *pointer++ отива към следващия символ.
// Помислете за терминиращия символ. Принтирайте двата изкопирани
// стринга.
// Извикайте функцията и копирайте от string1 в string4.
#include <stdio.h>
#include <string.h>
void copyString(char* first, char* second){
    for (int i = 0; i < strlen(first); i++)
    {
        *(second++) = first[i];
    }
    *second = '\0';
    
}
int main( int argc, char *argv[]){
    char str[100];
    char str2[100];
    char* strToBeCopied = "A string to be copied!";
    char* str2ToBeCopied = "I am very good in strings coping!";
    
    copyString(strToBeCopied,str);
    printf("%s\n",str);

    copyString(str2ToBeCopied,str2);
    printf("%s",str2);
    

 return 0;
}
