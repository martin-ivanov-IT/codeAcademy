#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZ2 156
int main( ) {
FILE *pfile = NULL;
char*filename = "exercise_8.txt";
pfile = fopen (filename, "wt");
if(pfile==NULL)
printf("Failed to open %s.\n",filename);
char str[60] = "test of fputs()";
fputs(str,pfile);
fclose(pfile);
pfile = fopen (filename, "r");
fgets(str,60,pfile);
puts(str);
     
}