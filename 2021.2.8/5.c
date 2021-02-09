    // Задача 5*. Напишете програма, която генерира “случайна разходка” из
    // елементите на двумерен масив от тип char с размер 10 х 10. Преди разходката
    // всички елементи на масива съдържат символа ‘.’ и след като елемента е
    // посетен в него се записва поредната буква от латинската азбука т.е. на първия
    // посетен елемент се записва буквата ‘А’, а нз последния буквата ‘Z’. Програмата
    // трябва да се разхожда от елемент на елемент в следната последователност:
    // от елемента, на който е в момента може да се премести един елемент на горе,
    // на долу, на ляво или на дясно. Не може да се премества на произволна
    // позиция. Преди всяко преместване проверете дали няма да излезете извън
    // масива и дали позицията вече не е заета от някоя буква т.е. елемента да е
    // посетен вече. Ако горните условия са изпълнени се преместете в желатана
    // посока. Ако всичките 4 дестинации са блокирани вашата програм трябва да
    // спре.
    // Подсказка: Използвайте функциите srand() и rand() 
    //за да генерирате случайните числа. Използвайте int n = rand() % 4; за да генерирате числа от 1 до 4
#include <stdio.h>
#include <stdlib.h>
int isMove(int *rowPos,int *collPos,int ***arr);
void makeMove(int*rowPos, int *collPos, int*** arr);
int isInside(int*rowPos, int *collPos, int*** arr, int direction);

int main(){

char arr[10][10];
char*** pa = &arr;
for (int rows = 0; rows < 10; rows++)
{
    printf("\n");
    for (int colls = 0; colls < 10; colls++)
    {
       arr[rows][colls] = '.';
    }
}
int letter = 1;
int rowPos = 0;
int collPos = 0;
while (letter<=26)
{
    arr[rowPos][collPos] = 18 + letter;
    if (isMove(&rowPos,&collPos,pa))
    {
        makeMove(&rowPos, &collPos, pa);
        letter++;
    }
    break;
    
}

int n = rand() % 4;

printf("there is the matrix:\n");
for (int rows = 0; rows < 10; rows++)
{
    printf("\n");
    for (int colls = 0; colls < 10; colls++)
    {
        printf("%c",arr[rows][colls]);
    }
}

 return 0;
}

int isMove(int *rowPos,int *collPos,int ***arr){
    
        if (*arr[*rowPos-1][*collPos] == '.')
        {
            return 1;
        }
        else if (*arr[*rowPos-1][*collPos] >= 'A' && *arr[*rowPos-1][*collPos]<='Z')
        {
            return 1;
        } 
        
   
       if (*arr[*rowPos+1][*collPos] == '.')
        {
            return 1;
        }
        else if (*arr[*rowPos+1][*collPos] >= 'A' && *arr[*rowPos+1][*collPos]<='Z')
        {
            return 1;
        }  
    

 
       if (*arr[*rowPos][*collPos - 1] == '.')
        {
            return 1;
        }
        else if (*arr[*rowPos][*collPos-1] >= 'A' && *arr[*rowPos][*collPos-1]<='Z')
        {
            return 1;
        }  
    

 
       if (*arr[*rowPos][*collPos + 1] == '.')
        {
            return 1;
        }
        else if (*arr[*rowPos][*collPos+1] >= 'A' && *arr[*rowPos][*collPos+1]<='Z')
        {
            return 1;
        }  
    

    return 0;
}

void makeMove(int*rowPos, int *collPos, int*** arr){
    int direction = rand() % 4;
    while (1)
    {
        if (isInside(rowPos, collPos, arr, direction))
        {
            break;
        }
        
    }
    
}

int isInside(int*rowPos, int *collPos, int*** arr, int direction){
    
    //over rows-1
    if (direction == 1)
    {
        if (*arr[*rowPos-1][*collPos] == '.')
        {
            *rowPos -= 1;
            return 1;
        }
        else if (*arr[*rowPos-1][*collPos] >= 'A' && *arr[*rowPos-1][*collPos]<='Z')
        {
            *rowPos -= 1;
            return 1;
        } 
        
    }

    //under rows+1
    else if (direction == 2)
    {
       if (*arr[*rowPos+1][*collPos] == '.')
        {
            *rowPos += 1;
            return 1;
        }
        else if (*arr[*rowPos+1][*collPos] >= 'A' && *arr[*rowPos+1][*collPos]<='Z')
        {
            *rowPos += 1;
            return 1;
        }  
    }

    //left colls-1
     else if (direction == 3)
    {
       if (*arr[*rowPos][*collPos - 1] == '.')
        {
            *collPos -= 1;
            return 1;
        }
        else if *(arr[*rowPos][*collPos-1] >= 'A' && *arr[*rowPos][*collPos-1]<='Z')
        {
            *collPos -= 1;
            return 1;
        }  
    }

    //right colls+1
     else if (direction == 4)
    {
       if (*arr[*rowPos][*collPos + 1] == '.')
        {
            *collPos += 1;
            return 1;
        }
        else if (*arr[*rowPos][*collPos+1] >= 'A' && *arr[*rowPos][*collPos+1]<='Z')
        {
            *collPos += 1;
            return 1;
        }  
    }

    return 0;
    

}
    