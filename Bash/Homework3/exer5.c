// Задача 5. Напишете функцията void our_strcat(char *s, char *t), която
// добавя (конкатенира) стринга t в края на стринга s. С един фор цикъл трябва
// да се стигне до края на низа s и след това на всяка следваща трябва да се
// копират елементите на низа t. Функцията strcat() предполага, че има
// достатъчно в s за да се копират всички стойности на низа t, защото иначе
// оператор за присвояване може да работи извън размера на масива и да
// имаме грешка. Но не сме разгледали динамичното заделяне на памет с
// malloc.
// Задача 4. Напишете финкцията int our_strcmp(char *s, char *t), която
// сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
// елемента в който се различават s[i] е по-малък от t[i] връща стойност помалка от нула < 0. Ako s[i] е по-голям от t[i] връща стойност по-голяма от
// нула > 0
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int our_strcat(char *t, char *s, char* concat);

int main(int argc, char* argv[]){
    char* s = argv[1];
    char* t = argv[2];
    char* concat = malloc(strlen(s) + strlen(t) +1); 
    if(s == NULL || t == NULL){
        return 1;
    }
    // char str[100] = "Hello";
    // char t[100] = " world";

    if(our_strcat(s,t, concat)){
        exit(2);
    }
    printf("%s\n",concat);

 return 0;
}

int our_strcat(char *t, char *s, char* concat){
    if(s == NULL || t == NULL){
        return 2;
    }
    int firstCount = strlen(t);
    int secondCount = strlen(s);
    strcpy(concat, t);
    concat[firstCount++] = ' ';
    for (int i = 0; i < secondCount; i++)
    {
        concat[firstCount++] = s[i];
    }
    concat[firstCount] = '\0';
    return 0;
    
}
