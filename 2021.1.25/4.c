#include <stdio.h>
#include <string.h>


int main(){
  char bar[80];
  gets(bar);
  int len = strlen(bar);
  int countSpaces = 0;
  for (int i = 0; i < len; i++)
  {

     if (bar[i]==32)
      {
       countSpaces++;   
      }

      if (countSpaces>1)
      {
          bar[i] = 127;
          countSpaces--;
      }
      

      
  }
  printf("%s",bar);
  
  
  
  
 return 0;

}




