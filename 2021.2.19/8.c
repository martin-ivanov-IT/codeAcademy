// Задача 8. Направете структура struct rect, която съдържа в себе си две
// точки. Създайте обект от тип тази структура наречен screen. Използвайте
// функцията makepoint за да зададете начална точка на екрана (0, 0) и
// крайна точка (15, 15). Запълнете пространството между тях с тирета.
#include <stdio.h>
#include <string.h>
struct point {
 int x;
 int y;
};
struct rec{
    struct point* a;
    struct point* b;
};

struct point makepoint(int x, int y);
int main( ) {
    struct point a = {0,0};
    struct point b = {14,14};
    struct rec rect = {&a,&b};

    char matrix[15][15];
    for (int row = 0; row < 15; row++)
    {
        for (int col = 0; col < 15; col++)
        {
            if (row == rect.a->x && col == rect.a->y)
            {
                matrix[row][col] = '+';
            }

            else if (row == rect.b->x && col == rect.b->y)
            {
                matrix[row][col] = '+';
            }
            else{
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