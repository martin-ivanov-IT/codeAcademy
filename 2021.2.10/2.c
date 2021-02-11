#include <stdio.h>
#include <string.h>
int main(){

char s[100];
int i = 0;
s[i] = getchar();
while (s[i]!='\n'){
    s[++i] = getchar();
}
s[i] = '\0';

int lenght = strlen(s);
char *p = s + lenght-1;
for (int i = 0; i < lenght; i++)
{
    putchar(*(p--));
}








return 0;
}


