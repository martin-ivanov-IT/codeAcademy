#include <stdio.h>
int isLetter(char c);
int main()
{
   char c;
   scanf("%c",&c);
   int condition = isLetter(c);
   printf("%d",condition);
   return 0;

}

int isLetter(char c){
    if ((c >= 65 && c <= 90) ||  (c >= 97 && c <= 122))
    {
        return 1;
    }

    return 0;
    
}
