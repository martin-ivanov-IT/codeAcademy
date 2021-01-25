#include <stdio.h>
#include <string.h> 

int main(){
  char c = 0;
  char str[80];

  while (1)
  {
      c = getchar();
      strncat(str, &c, 1);  

    if (c==EOF)
    {
        int lenght = strlen(str);  
        for (int i = lenght-3; i >= 0; i--)
        {
            if (str[i]==' ')
            {    
                str[i] = 127;
            }
            else
            {
                break;
            }   
        }
    printf("%s",str);
    break;
    }
  }

 return 0;

}




