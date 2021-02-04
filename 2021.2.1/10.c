// Задача 10. Напишете функция void itob(int n, char s[], int b), която
// преобразува цяло число n в низ s базиран на основа b.
// Например itob( n, s[], 16) представя числото n като шеснадесетично число в
// стринга s[].
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void  itob(int n,char s[], int b);
int main(){

 int n = 10;
 char s[20];
 int b = 2; 
 itob(n,s,b);
 
 return 0;
}

void  itob(int n,char s[], int b){
   
    int i = 0;
    while (n > 0)
    {
        s[i] = (n%b) + 48;
        if (n%b>=10)
        {
            s[i] = (n%b + 87);
        }
        n/=b;
        i++;
    }
   
    for (int j = i-1; j >= 0; j--)
    {
        printf("%c",s[j]);
    }
   
}