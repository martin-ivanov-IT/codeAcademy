// Задача 20. Дефинирайте стринг „I am a poor programmer”.
// Заменете през пойнтер “poor” с “great”.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
char s[] = "I am a poor programmer";
char*p;
char rep[] = "great";
char find[] = "poor";
char currWord[100];
currWord[0] = '0';
int currWordIndex = 0;
p = (char *) malloc(strlen(s)-strlen(find)+strlen(rep)+1);
int i = 0;
int addedLetters = 0;
for (; i <= strlen(s); i++)
{
    if (s[i] == ' ')
    {   
        
        currWord[currWordIndex] = '\0';
        printf("%s\n",currWord);
        
        //memset( currWord, '\0', sizeof(currWord));
        if (strcmp(currWord,find)==0)
        {
            int j = 0;
            addedLetters = strlen(rep) - strlen(find);
            for ( ; j <= strlen(rep); j++)
            {
                
                *(p-currWordIndex + i +j) = rep[j];
            }
            
        }
        
        currWordIndex = 0;
        
    }
    else{
        currWord[currWordIndex++] = s[i];
    }
    *(p+i+addedLetters) = s[i];
    
    
}
*(p+i) = '\0';
while (*p)
{
    printf("%c",*(p++));
}

}