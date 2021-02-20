// Задача 7. Направете функция struct point makepoint(int x, int y), която
// създава две точки.


#include <stdio.h>
#include <string.h>
struct point {
 int x;
 int y;
};
struct point makepoint(int x, int y);
int main( ) {
    struct point a = makepoint(3,4);
    struct point b = makepoint(3,5);

    char matrix[15][15];
    for (int row = 0; row < 15; row++)
    {
        for (int col = 0; col < 15; col++)
        {
            if (row == a.x && col == a.y)
            {
                matrix[row][col] = '@';
            }

            else if (row == b.x && col == b.y)
            {
                matrix[row][col] = '@';
            }
            
            else
            {
            matrix[row][col] = '-';
            }
        }
    }
     for (int row = 0; row < 15; row++)
    {
        for (int col = 0; col < 15; col++)
        {
         printf("%c",matrix[row][col]);
        }
        printf("\n");
    }
    
    return 0;
}
struct point makepoint(int x, int y){
    struct point st = {x,y};
}