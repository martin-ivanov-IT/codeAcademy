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
    printf("%s\n",str);

    strcpy(str2,str2ToBeCopied);
    printf("%s",str2);
    

 return 0;
}