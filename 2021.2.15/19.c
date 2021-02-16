// Задача 19. Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
// със „о“

#include <stdio.h>
#include <string.h>

int main(){
    
char s[] = "Baba, kaka, mama";
for (int i = 0; i < strlen(s); i++)
{
    if (s[i]=='a')
    {
        s[i]='o'; 
    }
}
printf("%s",s);

    

 return 0;
}