// Задача 5. а) Направете поле 15 на 15, като принтирате тирета в конзолата.
// b) Направете точка а(3, 4), като на това място принтирате @
// c) Направете точка b(7, 10), като на това място принтирате @
// d) Попълнете правоъгълника с @
#include <stdio.h>
#include <string.h>
struct point {
 int x;
 int y;
};

int main( ) {
    struct point a = {3,4};
    struct point b = {7,10};
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