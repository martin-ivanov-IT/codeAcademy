#include <stdio.h>
#include <string.h> 
void reverse(char s [] ){
    int lenght = strlen(s);
    char str[80];
    int i;
    int j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
       char curr = s[i];
       s[i] = s[j]; 
       s[j] = curr;
    }
    
    printf("%s\n",s);
    
}

int main(){
  char c = 0;
  int count = 0;
  char str[80];
  while (c!=EOF)
  {
      c = getchar();
      strncat(str, &c, 1); 
      if (c=='\n')
      {
          reverse(str);
         str[0] = '\0';
         
      }
      
  }
 return 0;

}
