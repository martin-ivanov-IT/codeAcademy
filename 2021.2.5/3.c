// Задача 3.Какво е грешното на този код?
// void my_strcpy(char *t, char *s){
// for(; *t; t++, s++)
// *s = *t;
// }
#include <stdio.h>
void my_strcpy(char *t, char *s);
void my_strcpy_right(char *t, char *s);
int main(){
 char str[] = "Hello world";
 char t[50];
 my_strcpy(str,t);
 printf("%s",t);
 my_strcpy_right(str,t);

 printf("%s",t);
 return 0;
}
//wrong
void my_strcpy(char *t, char *s){
for(; *t; t++, s++)
*s = *t;
}
//right
void my_strcpy_right(char *t, char *s){
for(; *t; t++, s++){
*s = *t;
}
*s = *t;
}