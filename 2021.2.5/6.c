// Задача 6. Напишете отново функцията void our_strcat(char *s, char *t), която
// разгледахме преди малко като използвате указатели, а не
// инкрементиращите пrоменливи i, j.
#include <stdio.h>
#include <string.h>
void our_strcat(char *t, char *s);

int main(){
 char str[50] = "Hello ";
 char t[] = "world";
 our_strcat(str,t);
 printf("%s",str);

 

 return 0;
}

void our_strcat(char *t, char *s){
    int firstCount = strlen(t);
    int secondCount = strlen(s);
    t+=firstCount;
    for (; *s; t++, s++)
    {
        *t = *s;
        
    }
    *t = '\0';
    
    
}