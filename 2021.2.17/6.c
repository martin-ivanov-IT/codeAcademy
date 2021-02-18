// Задача 6.
// Пребройте буквите ‚а‘ в стринг (може да е число и масив).
// Пример: "This is a string to test my idea for search in a char and ....";
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]){
    char s[] ="TBH2a "; 
    void (*func_ptr[2])() = {};
    int i = 0;
    int countLetters = 0;
    while (s[i] !='\0')
    {
        if (s[i]>='a' && s[i]<='z')
        {
            countLetters++;
        }

        else if (s[i]>='A' && s[i]<='Z')
        {
            countLetters++;
        }
        
        i++;
    }
    
    
printf("%d", countLetters);

 return 0;
}