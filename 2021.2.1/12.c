#include <string.h>
#include <stdio.h>
int any(char s1[], char s2[]);
int main(){
 int c;
 char firstString[20];
 char secondString[20];
 printf("enter first string\n");
 scanf("%s",&firstString);
 printf("enter second string\n");
 scanf("%s",&secondString);
 int n = any(firstString,secondString);
 printf("%d\n",n);
 return 0;
}

int any(char s1[], char s2[]){
    for (int i = 0; i < strlen(s1); i++)
    {
        for (int j = 0; j < strlen(s2); j++)
        {
            if (s1[i] == s2[j])
            {
                return i;
                break;
            }
            
        }
        
    }
    printf("no matching elements");
    return -1;
    
}


