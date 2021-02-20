// Задача 9. Направете функця add(), която събира две точки.
#include <stdio.h>
#include <string.h>
struct point {
 int x;
 int y;
};
struct point add(struct point a, struct point b);
int main( ) {
    struct point a = {3,4};
    struct point b = {2,2};
    struct point c = add(a,b);
    
    char matrix[15][15];
    for (int row = 0; row < 15; row++)
    {
        for (int col = 0; col < 15; col++)
        {
            if (row == a.x && col == a.y)
            {
                matrix[row][col] = 'a';
            }

            else if (row == b.x && col == b.y)
            {
                matrix[row][col] = 'b';
            }

            else if (row == c.x && col == c.y)
            {
                matrix[row][col] = 'c';
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
struct point add(struct point a, struct point b){
    struct point p = {a.x + b.x, a.y + b.y};
    return p;
}