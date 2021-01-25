#include <stdio.h>


int main(){
  char c = 0;
  int nLines = 0;
  int tabs = 0;
  int spaces = 0;
  while (c!=EOF)
  {
      c = getchar();
      if (c=='\n')
      {
          nLines++;
      }

      else if (c==32)
      {
          spaces++;
      }
      
      else if (c==9)
      {
          tabs++;
      }
      
      
  }
  printf("spaces: %d,\n tabs: %d\n new lines: %d",spaces,tabs,nLines);

 return 0;

}




