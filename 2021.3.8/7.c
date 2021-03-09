#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *fp;
    int ch;
    fp=fopen("file.txt", "wt+");
    for(ch=43; ch<= 100; ch++){
    fputc(ch,fp);
    }
    fclose(fp);
    return 0;
}