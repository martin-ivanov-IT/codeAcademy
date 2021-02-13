// Задача 6.
// Заделете динамично с malloc памет за char* buffer с размер size = 2,
// въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
// буфера. Увеличавайте размера на буфера преди да се препълни с
// realloc().
// Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    char* buffer;
    buffer = (char*)malloc(sizeof(char) * 2);
    int bufferSize = sizeof(char) * 2;
    char c = 0;
    int i = 0; 
    printf("enter string:\n");
    while (c!='\n')
    {
        if (bufferSize<= i)
        {
            buffer = realloc(buffer,bufferSize*2);
            bufferSize*=2;
        }
        c = getchar();
        buffer[i] = c;
        ++i;
    }
    buffer[i] = '\0';
    printf("%s",buffer);
    printf("\nsize of buffer %d\n",i);
    free(buffer);
    
    return 0;
}