// Задача 2. Напишете функцията int atof(char *s), която
// преобразува стринг в число с десетична запетая. Тази функция е
// подобна на разглежданата по-горе atoi(char *s), само че когато се
// стигне до . точката, отделяща цялата част от дробната, трябва
// да се пусне още един цикъл, който да изчисли числото в
// дробната част по същия начин, както е числото в цялата част.
// Само че тук при дробната част трябва да имаме една
// променлива, която да умножаваме по 10 всеки път до края на
// дробната част power *= 10; Накрая трябва да разделим
// полученото число на тази променлива, за да получим реалното
// число с плаващата заперая на точното място.

#include <stdio.h>
#include <string.h>
double getDouble (char *str);
int i = 0;
int main(){

 char *string = "1234.1234";
 double sum = getDouble(string);
 printf("\n%lf",sum);
 return 0;
}

double getDouble (char *str){
    int i = 0;
    double sum = 0;
    int state = 0;
    int lenght = strlen(str);
    int hundrets = 1;
    int floatDigits = 0;
    
    for (int j = 0; j < lenght-2; j++)
    {
        hundrets = hundrets * 10;
    }
    
    while (str[i]!='\0')
    {
        if (str[i]=='.')
        {
            state = 1;
            i++;
            continue;
        }
        char curr = str[i]-48; 
        sum+=curr*hundrets;
        hundrets/=10;
        if (hundrets<1)
        {
            hundrets == 1;
        }
        
        
        if(state){
            ++floatDigits;
        }     
        ++i;
    }

    for (int k = 0; k < floatDigits; k++)
    {
        sum/=10;
    }
    
    return sum;
    
}
