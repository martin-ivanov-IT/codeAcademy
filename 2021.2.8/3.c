// Задача 3. Дефинирайте и инициализирайте тримерен масив с по 5
// елемента (5 x 5 x 5)// Задача 2. Дефинирайте и инициализирайте двумерен масив с по 5
// елемента (5 x 5). След като сте готови, направете въвеждане на данните в
// масива, като четете от потребителя със scanf

#include <stdio.h>
#include <string.h>
int main(){

char arr[5][5][5];
for (int i = 0; i < 5; i++)
{
    for (int rows = 0; rows < 5; rows++)
    {
        printf("enter row %d (of five elements) :\n",rows);
        scanf("%s",arr[i][rows]);
    }   
}

 return 0;
}