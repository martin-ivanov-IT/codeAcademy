#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int matrix[5][5];
    int N = 10;
    int sum = 0;
    srand(time(NULL));     
   for (int row = 0; row < 5; row++)
   {
       for (int col = 0; col < 5; col++)
        {
            int r = (rand() % (10 - 0 + 1)) + 0;
            //printf("%d\n",r);
            matrix[row][col] = r;
            if (matrix[row][col]>=1 && matrix[row][col]<=5)
            {
                printf("row: %d col: %d\n",row,col);
            }
            
        }
   }
   
    
    
    

 return 0;
}