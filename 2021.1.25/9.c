#include <stdio.h>
#include <string.h> 

int main(){
  char c = 0;
  char str[80];

  while (c!=EOF)
  {
      c = getchar();
      if (c>='A' && c<='Z')
      {
          c+=32;
      }
      
      strncat(str, &c, 1);     
      
  }
  printf("%s",str);
 return 0;

}




