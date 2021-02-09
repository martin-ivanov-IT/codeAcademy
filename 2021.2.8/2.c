// Задача 2. Дефинирайте и инициализирайте двумерен масив с по 5
// елемента (5 x 5). След като сте готови, направете въвеждане на данните в
// масива, като четете от потребителя със scanf
#include <stdio.h>
#include <string.h>
int main(){

char arr[5][5];
for (int rows = 0; rows < 5; rows++)
{
    printf("enter row %d (of five elements) :\n",rows);
    scanf("%s",arr[rows]);
}

printf("there is the matrix:\n");

for (int rows = 0; rows < 5; rows++)
{
    printf("\n");
    for (int colls = 0; colls < 5; colls++)
    {
        printf("%c",arr[rows][colls]);
    }
}




 return 0;
}