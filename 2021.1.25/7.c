#include <stdio.h>
#include <string.h> 

int main(){
  char c = 0;
  int count = 0;
  char str[80];

  while (c!=EOF)
  {
      c = getchar();
      count++;
      strncat(str, &c, 1); 
      if (c=='\n')
      {
         if (count>80)
         {
             printf("%s",str);
              
         }
         str[0] = '\0';
         count = 0;
      }
      
  }
 return 0;

}




