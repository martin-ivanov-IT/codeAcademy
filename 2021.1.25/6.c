#include <stdio.h>


int main(){
  char c = 0;
  int letters = 0;
  int digits = 0;
  while (c!=EOF)
  {
      c = getchar();
      if (c>='A' && c<='Z')
      {
          letters++;
          
      }
      else if (c>='a' && c<='z')
      {
         letters++;
         
      }

      else if (c>='0' && c<='9')
      {
         digits++;
         continue;
         
      }
        
  }

printf("\ndigits: %d\nletters: %d",digits,letters);

 return 0;

}




