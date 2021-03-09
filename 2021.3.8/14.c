#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main( ) {
    FILE *pfile = NULL;
    char*filename = "exercise_14.txt";
    char*outFilename = "outExercise_14.txt";
    FILE *out = NULL;
    
    pfile = fopen (filename, "wt");
    fputs("hello world",pfile);
    fclose(pfile);
    pfile = fopen (filename, "r");
    out = fopen(outFilename,"wt");
    if(pfile==NULL){
        printf("Failed to open %s.\n",outFilename);
    }

    char c;
    do {
      c = fgetc(pfile);
      if( feof(pfile) ) {
         break ;
      }
      fputc(toupper(c),out);
    } while(1);
    fclose(pfile);
    fclose(out);

    if (remove(filename) == 0) 
      printf("Deleted successfully\n"); 
    else
      printf("Unable to delete the file\n"); 

    int ren = rename(outFilename, filename);
    if(ren){
    printf("Failed to rename file.\n");
    }
    else{
    printf("File renamed successfully.\n");
    }
}
     
