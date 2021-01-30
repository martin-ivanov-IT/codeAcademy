// Задача 11*. Напишете програма, която да премахва всички
// коментари в една С програма.

#include <stdio.h>

int main(){
    int flag = 1;
    char* string = "visible /* not visible */ visible ";
    int i = 0;
    while (string[i]!='\0')
    {
        if (string[i]=='/' && string[i+1]=='*')
        {
            flag = 0;
            i+=2;
            continue;
        }

        if (string[i]=='*' && string[i+1]=='/')
        {
            flag = 1;
            i+=2;
            continue;
        }

        if (flag)
        {
            putchar(string[i]);
            i++;
            continue;
        }
        i++;
    
    }

    return 0;
}


