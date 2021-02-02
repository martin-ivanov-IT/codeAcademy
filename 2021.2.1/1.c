// Задача 1. Напишете функция, която принтира низ, пойнтера към
// началото му е подаден като аргумент на функцията void printstr(char *s); Не
// забравяйте, низът винаги завършва с знак за терминираща нула '\0', затова
// проверката в цикъла, който принтира всеки чаръктър, трябва да е докато не
// се стигне този знак

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
