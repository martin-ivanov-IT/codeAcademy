#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZ2 156
int main( ) {
FILE *pfile = NULL;
char*filename = "myfile.text";
pfile = fopen (filename, "wt");
fprintf(pfile, "This is testing for fprintf...\n");
if(pfile==NULL)
printf("Failed to open %s.\n",filename);
fclose (pfile);
pfile = fopen (filename, "r");
char str[60];
int i = 0;
char c;
do {
      str[i] = fgetc(pfile);
      if( feof(pfile) ) {
         break ;
      }
      printf("%c", str[i++]);
   } while(1);
     
}