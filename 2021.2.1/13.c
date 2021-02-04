// Задача 13 напишете функцията void lower(char s[]), която
// преобразува главните букви в малки.

#include <string.h>
#include <stdio.h>
void lower(char s[]);
int main(){
 int c;
 char string[20];
 printf("enter string\n");
 scanf("%s",&string);
 lower(string);
 printf("\n%s",string);
 return 0;
}

void lower(char s[]){
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >='A' &&s[i]<='Z')
        {
            s[i]+=32;
        }
    }

}


