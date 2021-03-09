#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main( ) {
    FILE *pfile = NULL;
    char*filename = "exercise_13.txt";
   
    FILE *out = NULL;
    
    pfile = fopen (filename, "wt");
    fputs("hello world\n",pfile);
    fputs("hello world\n",pfile);
    fputs("hello world\n",pfile);
    fclose(pfile);
    char str[60];
    pfile = fopen (filename, "r");
    int count = 0;
    while(!feof(pfile)){
        fgets(str,60,pfile);
        count++;
    }
    fclose(pfile);
    printf("lines are: %d",count-1);
   
   

    
}
     
