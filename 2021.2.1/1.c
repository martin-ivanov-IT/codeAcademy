#include <stdio.h>
void printStr (char *str);
int main(){

 char *string = "test input dasdasdas";
 printStr(string);
 return 0;
}

void printStr (char *str){
    int i = 0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        ++i;
    }
    
}
