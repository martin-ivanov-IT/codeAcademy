#include "data_funcs.h"

int readNextNumber(FILE* file){
    
    char str[1000];
    int i = 0;
    char c = fgetc(file);
    while (c!=' ' && c!='\n')
    {
        if(feof(file) ){
            str[i++] = c;
            str[i] = '\0';
            return atoi(str);
        }

        str[i++] = c;
        c = fgetc(file);
        
 
    }
    str[i] = '\0';

    return atoi(str);
    
}

void readData (int lines, int columns, int array[lines][columns],FILE* file)
{
  int i, j;

  for (i = 0; i < lines; ++i)
  {
      for (j = 0; j < columns; ++j)
      {
        array[i][j] = readNextNumber(file);
      }
  }
}