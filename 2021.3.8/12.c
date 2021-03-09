#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( ) {
    FILE *pfile = NULL;
    char*filename = "exercise_12.txt";
    fpos_t position;
    pfile = fopen (filename, "wt");
    if(pfile==NULL){
        printf("Failed to open %s.\n",filename);
    }

    char str[60] = "\ntest of fseek()";
    fputs(str,pfile);

    fseek( pfile, 7, SEEK_SET );
    fputs("C Programming Language", pfile);
    fclose(pfile);
     
}