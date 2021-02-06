// Задача 10. Напишете функцията strncat(s, t, n), която добавя
// (конкатенира) n символа от стринга t в края на стринга s.
#include <string.h>
void strncpy_custom(char* s,char* t,int n);
int main(){
 char s[50] = "Hello world";
 char t[] = "world";
 //number of chars to be copied
 int n = 7;
 strncpy_custom(s, t, n);
 printf("%s",s);
 

 return 0;
}
void strncpy_custom(char* s,char* t,int n){
    int i = 0;
    s+=strlen(s);
    while (t[i] && i < n)
    {
        *s = t[i++];
        printf("%c\n",*s);
        s++;
    }
    
}