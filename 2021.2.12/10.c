// Задача 10*.
// Реализация на масив с променлива размерност
// Тази задача е подобна на задача 2, където
// използваме char масив. Тук може да използвате
// друг тип. 

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int* buffer;
    buffer = (int*)malloc(sizeof(char) * 2);
    int c = -1;
    int i = 0; 
    
    printf("enter numbers and end with 0:\n");
    while (c!=0)
    {
        if (sizeof(buffer)<= i)
        {
            buffer = realloc(buffer,sizeof(buffer)*2);
        }
        scanf("\n%d",&c);

        if (c!=0)
        {
            buffer[i] = c;
        }
        
        ++i;
    }
    int bufferSize = sizeof(buffer)/sizeof(int);
    printf("numbers are:\n");
    for (int j = 0; j < i-1; j++)
    {
       printf("%d ",buffer[j]);
    }
    
    free(buffer);
    
    return 0;
}