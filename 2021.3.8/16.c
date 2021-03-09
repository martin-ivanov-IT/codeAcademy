#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main( ) {
    FILE *pfile = NULL;
    int line;
    printf("enter line to be removed:\n");
    scanf("%d",&line);
    char*filename = "exercise_16.txt";
   
    char*outFilename = "outExercise_16.txt";
    FILE *out = NULL;
    
    pfile = fopen (filename, "wt");
    fputs("1\n",pfile);
    fputs("2\n",pfile);
    fputs("3\n",pfile);
    fclose(pfile);
    char c[1000];
    
    pfile = fopen (filename, "r");
    out = fopen(outFilename,"wt");
    int count = 0;
    while(!feof(pfile)){
        fgets(c,60,pfile);
        count++;
    }
    count--;

    fclose(pfile);
    pfile = fopen (filename, "r");
    
    for (int i = 1; i <= count; i++)
    {
      if (i == line)
      {
        fscanf(pfile, "[^\n]", c);
        continue;
      }
      fscanf(pfile, "[^\n]", c);
      fprintf(out,c);
      
    }
    
    fclose(pfile);
    fclose(out);
    printf("lines are: %d",count-1);
   
}
     
