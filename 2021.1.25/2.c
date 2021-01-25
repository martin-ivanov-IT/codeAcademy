#include <stdio.h>


int main(){
  char c;
  int count = 1;
  while (c!=EOF)
  {
      c = getchar();
      if (c=='\n')
      {
          count++;
      }
      
  }
  printf("count: %d",count);

 return 0;

}




