#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( ) {
    FILE *first = NULL;
    FILE *second = NULL;
    char*firstFile = "first.txt";
    char*secondFile = "second.txt";

    first = fopen (firstFile, "r");
    second = fopen (secondFile, "r");

    if(first==NULL)
    printf("Failed to open %s.\n",firstFile);

    if(second==NULL)
    printf("Failed to open %s.\n",secondFile);

    char firstStr[100];
    char secondStr[100];
    
    while (fgets(secondStr,100,second)!=NULL && fgets(firstStr,100,first)!=NULL)
    {
        
       if (strcmp(firstStr, secondStr))
       {
           printf("the lines:\n%s\n%s\nare different",firstStr,secondStr);
       }
       
    }
    
    return 0;
     
}