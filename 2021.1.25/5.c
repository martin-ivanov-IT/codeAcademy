#include <stdio.h>


int main(){
  char c = 0;
  int count = 1;
  while (c!='?')
  {
      c = getchar();
      if (c>='A' && c<='Z'){ 
            putchar(c);
    }

    else if (c>='a' && c<='z'){
            putchar(c);
     }
      
  }

 return 0;

}




