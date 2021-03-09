#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main( ) {
    FILE *pfile = NULL;
    char*filename = "exercise_15.txt";
   
    FILE *out = NULL;
    
    pfile = fopen (filename, "wt");
    fputs("hello\n",pfile);
    // fputs("hello world\n",pfile);
    // fputs("hello world\n",pfile);
    fclose(pfile);
    char str[60];
    pfile = fopen (filename, "r");
    fseek( pfile, 0, SEEK_END);
    int size = ftell(pfile);
    printf("size : %d\n",size);
    for (int i = 0; i < size; i++)
    {
        char c = fgetc(pfile);
        printf("%c",c);
        fsetpos(pfile, size-i-1);
    }
    
    
    fclose(pfile);
    
   
}
     
