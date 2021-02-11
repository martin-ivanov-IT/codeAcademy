// Напишете програма, която да генерира случайна парола от 6 букви
// докато user-а я хареса.
// Вариант 1: може да използвате цикли while/for + стрингове
// Вариант 2: използвайте функция
// Указания:
// 1. Генерирайте парола
// 2. Проверете дали потребителя е харесва
// 3. Повторете докато потребителя си хареса паролата
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void makePassword(char answer, char * s);

int main(){

char s[7];
char answer = 'n';
srand(time(0));

makePassword(answer,s);

}
void makePassword(char answer, char * s){
    if (answer == 'y')
    {
        return;
    }

    int i = 0;
    for (; i < 6; i++)
    {
        int n = (rand() % (122 - 97 + 1)) + 97;
        char curr = n;
        s[i] = curr;
    }
    s[i] = '\0';
    printf("do you want to set the password %s press y/n \n",s);
    scanf("\n%c",&answer);

    makePassword(answer,s);
}


