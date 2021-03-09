#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZ2 156
int main( ) {
FILE *pfile = NULL;
char*filename = "myfile22.txt";
pfile = fopen (filename, "wt");
fprintf(pfile, "This is testing for exercise 3...");
if(pfile==NULL){
printf("Failed to open %s.\n",filename);
}
fclose (pfile);
pfile = fopen (filename, "r");
char str[60];
fgets(str,60,pfile);
puts(str);
fclose (pfile);
}