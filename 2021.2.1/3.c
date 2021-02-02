// Упражнение 3.* Добавете проверка във функцията int atof(char
// *s) дали подаденият стринг няма показни позиции преди числото
// и, ако има, ги премахнете. Проверете дали числото не е
// отрицателно и, ако е така, включете знака в резултата.


#include <stdio.h>
#include <string.h>
double getDouble (char *str);
int i = 0;
int main(){

 char *string = "-1234.12345";
 double sum = getDouble(string);
 printf("\n%lf",sum);
 return 0;
}

double getDouble (char *str){
    int i = 0;
    double sum = 0;
    int state = 0;
    int sign = 0;
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
        else if(str[i]==' '){
            i++;
            continue;
        }
        else if(str[i]=='-'){
            i++;
            sign = 1;
            hundrets = hundrets / 10;
            continue;
        };
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
    if (sign)
    {
        sum = -1 * sum;
    }
    
    return sum;
    
}
