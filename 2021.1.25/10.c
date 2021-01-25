#include <stdio.h>
#include <string.h> 
void reverse(char s [] ){
    int lenght = strlen(s);
    char str[80];
    int count = 0;  
    for (int i = lenght-2; i >= 0; i--){
        str[count]=s[i];
        count++;
    }
    str[count]='\0';
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




