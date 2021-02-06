// Задача 4. Напишете финкцията int our_strcmp(char *s, char *t), която
// сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
// елемента в който се различават s[i] е по-малък от t[i] връща стойност помалка от нула < 0. Ako s[i] е по-голям от t[i] връща стойност по-голяма от
// нула > 0
#include <stdio.h>
int our_strcmp(char *t, char *s);

int main(){
 char str[] = "Hello world";
 char t[] = "Helo world";
 int cond = our_strcmp(str,t);

 printf("%d",cond);

 return 0;
}

int our_strcmp(char *t, char *s){
for(; *t; t++, s++)
{
    if (*s > *t)
    {
       return 1;
        
    }
    else if (*s < *t){
        return -1;
    }
    
}
return 0;
}
