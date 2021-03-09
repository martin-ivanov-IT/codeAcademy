#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZ2 156
int main( ) {
 FILE *fopen(const char *restrict name, const char *restrict
mode);
FILE *pfile = NULL;
char*filename = "myfile.text";
pfile = fopen (filename, "wt");
fprintf(pfile, "This is testing for fprintf...\n");
if(pfile==NULL)
printf("Failed to open %s.\n",filename);
fclose (pfile);

pfile = NULL;
char oldname[] = "myfile.txt";
char newname[] = "newfile.txt";
int ren = rename(oldname, newname);
if(ren)
printf("Failed to rename file.");
else
printf("File renamed successfully.");
}