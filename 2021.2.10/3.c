// Задача 3. Използвайте Задача 1. за да напишете програма, която
// проверява дали съобщението не е палиндром. Палиндром е съобщение, в
// което буквите от ляво на дясно са същите като от дясно на ляво

#include <stdio.h>
#include <string.h>
int main(){

char s[100];
char t[100];
char sentence[100];
int i = 0;
int notLetterSigns = 0;
sentence[i] = getchar();
while (sentence[i]!='\n'){
    
    if (sentence[i]>='a'&&sentence[i]<='z')
    {
        s[i - notLetterSigns] = sentence[i];
    }
    else if (sentence[i]>='A'&&sentence[i]<='Z')
    {
        s[i - notLetterSigns] = sentence[i];
    }
    else{
        notLetterSigns++;
    }
    sentence[++i] = getchar();
}
s[i-notLetterSigns] = '\0';
sentence[i] = '\0';

int lenght = strlen(s);
char *p = s + lenght-1;
i = 0;
for (; i < lenght; i++)
{
    t[i] = *(p--);
}
t[i] = '\0';
printf("%s\n",s);
printf("%s\n",t);
int strcomp = strcmp(s,t);

if (strcomp == 0)
{
    printf("String: --%s-- is polindrome",sentence);
}
else
{
    printf("String: --%s-- is not polindrome",sentence);
}

return 0;
}


