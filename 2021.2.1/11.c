// Задача 11 напишете функция void squeeze(char s[], int c), която
// премахва символа с от низа s[]

#include <string.h>
#include <stdio.h>
void squeeze(char s[], int c);
int main(){
 int c;
 char string[20];;
 printf("enter string\n");
 scanf("%s",&string);
 printf("enter index\n");
 scanf("%d",&c);
 printf("%s\n",string);
 squeeze(string,1);
 printf("%s",string);
 
 return 0;
}

void squeeze( char s[], int c){
 int i = 0;
 for ( i ; i < strlen(s)-1; i++)
 {
     if (i>=c)
     {
         s[i] = s[i+1];
     }
          
 }
  s[i] = '\0';
}

