// Задача 6. Направете по подобен начин триъгълник:
#include <stdio.h>
#include <string.h>
struct point {
    int x;
    int y;
};

int main( ) {
    struct point a = {3,4};
    struct point b = {3,5};
    struct point c = {3,6};
    struct point d = {4,6};
    struct point f = {5,6};
    struct point g = {4,5};
    
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

            else if (row == c.x && col == c.y)
            {
                
                matrix[row][col] = '@';
            }
            else if (row == d.x && col == d.y)
            {
                matrix[row][col] = '@';
            }
            else if (row == f.x && col == f.y)
            {
                matrix[row][col] = '@';
            }
            else if (row == g.x && col == g.y)
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