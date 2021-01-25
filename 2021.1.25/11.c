#include <stdio.h>
#include <string.h> 
void reverse(char s [] ){
    int lenght = strlen(s);
    char str[80];
    for ( int j = strlen(s) - 2,i = 0; j>=0; i++, j--)
    {
        str[i] = s[j];
        if (j == 0)
        {
            str[++i] = '\0';
        }
        
    }
    
    printf("%s\n",str);
    
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




