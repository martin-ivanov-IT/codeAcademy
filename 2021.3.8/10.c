#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZ2 156
int main( ) {
    FILE *pfile = NULL;
    char*filename = "exercise_10.txt";
    pfile = fopen (filename, "a");
    if(pfile==NULL)
    printf("Failed to open %s.\n",filename);
    char str[60] = "\ntest of ftell()";

    fputs(str,pfile);
    long fpos = ftell(pfile);
    printf("position: %ld\n",fpos);
    fputs(str,pfile);
    fpos = ftell(pfile);
    printf("position: %ld\n",fpos);
     
}