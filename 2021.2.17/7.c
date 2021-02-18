// Задача 7.
// Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
// азбуката в него. Запишете резултата в масив за всяка буква.
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]){
    char s[] ="Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."; 
    int  aplphabet[26][3];
    int startSmallLetter = 97;
    int startCapitalLetter = 65;

    for (int i = 0; i < 26; i++)
    {
       aplphabet[i][0] = startSmallLetter++; 
       aplphabet[i][1] = startCapitalLetter++; 
       aplphabet[i][2] = 0;
    }
    int j = 0;
    while (s[j]!='\0')
    {
        for (int i = 0; i < 26; i++)
        {
            if(s[j] == aplphabet[i][0] || s[j] == aplphabet[i][1]){
            aplphabet[i][2]++;
            break;
            }
        }
        j++;
    }

     for (int i = 0; i < 26; i++)
    {
       printf("%c: %d times\n",aplphabet[i][0],aplphabet[i][2]);
    }
    
    
 return 0;
}