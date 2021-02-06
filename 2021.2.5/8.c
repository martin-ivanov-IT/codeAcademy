#include <stdio.h>
#include <string.h>
void  itob(int n,char* s, int b);
void getReversed(char *s);
void itoa(int n, char* s);

int main(){ 

    char str[50] = "Hello world";
    char t[] = "world";
    getReversed(str);
    printf("%s",str);
    printf("\n");
    int n = 12;
    char strNum[20];
    int b = 2;
    itob(n,strNum,b);
    printf("\n");
    char strA[20];
    n = 123;
    itoa(n, strA);
    printf("%s",strA);

     return 0;
}

void  itob(int n,char* s, int b){
   
    
    while (n > 0)
    {
        *s = (n%b) + 48;
        if (n%b>=10)
        {
            *s = (n%b + 87);
        }
        n/=b;
        s++;
    }
   
    for (int j = strlen(s); j >= 0; j--)
    {
        printf("%c",*--s);
    }
   
}

void getReversed(char* s)   
{
    for (int j = strlen(s) - 1; j>=1 ; s++, j--)
    {
        char temp = *s;
        *s = *(s+j);
        *(s+j) = temp;
        j--;
    }
}

void itoa(int n, char* s)
{
    int i = 0, sign = n;

    if (n < 0)
        n = -n;
    do                         
    {
        s[i++] = n % 10 + '0';
        n /= 10;
    }
    while (n > 0);
    if (sign < 0){
        s[i++] = '-';
    }
    s[i] = '\0';

    getReversed(s);
}