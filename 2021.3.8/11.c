#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZ2 156
int main( ) {
    FILE *pfile = NULL;
    char*filename = "exercise_11.txt";
    fpos_t position;
    pfile = fopen (filename, "a");
    if(pfile==NULL)
    printf("Failed to open %s.\n",filename);
    char str[60] = "\ntest of ftell()";

    fputs(str,pfile);
    long fpos = ftell(pfile);
    printf("position: %ld\n",fpos);
    fputs(str,pfile);
    fgetpos(pfile, &position);
    fsetpos(pfile, &position);

    char str2[60] = "\nnew string";
    fputs(str2,pfile);
    printf("position: %ld\n",fpos);
     
}