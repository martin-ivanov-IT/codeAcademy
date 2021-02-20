// Задача 6. Направете по подобен начин триъгълник:
#include <stdio.h>
#include <string.h>
struct point {
    int x;
    int y;
};
void first();
void second();
char matrix[15][15];
int main( ) {
    for (int row = 0; row < 15; row++)
    {
        for (int col = 0; col < 15; col++)
        {
         matrix[row][col] = '-';
        }
    }

    first();
    second();

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
void first(){
    struct point a = {3,4};
    struct point b = {3,5};
    struct point c = {3,6};
    struct point d = {4,6};
    struct point f = {5,6};
    struct point g = {4,5};
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
            
        }
    }  
}
void second(){
    struct point a = {3,8};
    struct point b = {3,9};
    struct point c = {3,10};
    struct point d = {4,10};
    struct point f = {5,10};
    struct point g = {4,9};
    
    
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
            
        }
    }
}