#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[]){
    char str[100] = "Pesho";
    char str2[100] = "Gosho";
    char* strToBeCopied = "A string to be copied!";
    char* str2ToBeCopied = "I am very good in strings coping!";

    memset( str, '\0', sizeof(str));
    memset( str2, '\0', sizeof(str));
   
    strcpy(str,strToBeCopied);
    strcpy(str2,str2ToBeCopied);
    int i = 0;
    for ( i = strlen(str)-1; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    for ( i = strlen(str2)-1; i >= 0; i--)
    {
        printf("%c",str2[i]);
    }
    

    

 return 0;
}