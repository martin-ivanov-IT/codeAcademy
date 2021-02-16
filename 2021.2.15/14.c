// Решете задачата за генериране на 6 буквена парола с
// пойнтери.
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
        *s++ = curr;
    }
    *s = '\0';
    s -= 6;
    printf("do you want to set the password %s press y/n \n",s);
    scanf("\n%c",&answer);

    makePassword(answer,s);
}
