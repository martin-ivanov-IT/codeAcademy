// //Задача 7. Напишете функцията strend(s, t), която връща 1, ако низът t
// се среща в края на низа s и 0 ако това не е изпълнено.

#include <stdio.h>
#include <string.h>
int strend(char *t, char *s);

int main(){
 char str[50] = "Hello world";
 char t[] = "world";
 printf("%d",strend(str,t));

 

 return 0;
}

int strend(char *t, char *s){
    int firstCount = strlen(t);
    int secondCount = strlen(s);

    if (secondCount > firstCount)
    {
        return 0;
    }
    
    t += (firstCount - secondCount);
    for (; *s; t++, s++)
    {
        if (*t != *s)
        {
            return 0;
        }
        
        return 1;
        
    }
    *t = '\0';
    
    
}