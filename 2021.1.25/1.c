#include <stdio.h>


int main(){
  char c;
  int count = 0;
  while (c!=EOF)
  {
      c = getchar();
      count++;
  }
  printf("count: %d",count);
  
 return 0;

}




