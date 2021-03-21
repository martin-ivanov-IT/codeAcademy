#include "solution_funcs.h"

void printMatrix (int lines, int columns, int array[lines][columns]){
  int i, j;

  for (i = 0; i < lines; ++i)
  {
      for (j = 0; j < columns; ++j)
      {
        printf("%d ", array[i][j]);
      }
      printf("\n");
  }
}

//fill all matrix cells with -1 value
void nullMatrix (int lines, int columns, int array[lines][columns]){
  int i, j;

  for (i = 0; i < lines; ++i)
  {
      for (j = 0; j < columns; ++j)
      {
        array[i][j] = -1;
      }
  }
}

//copy the value of given path with to cells
void copyPathToMatrix(int lines, int columns, int mat[lines][columns], int currMat[lines][columns], Cell* cells, int size){
     int i;
     for (i = 0; i < size; i++)
     {
         currMat[cells[i].x][cells[i].y] = mat[cells[i].x][cells[i].y];
     }
     
 }

 int countExits (int lines, int columns, int array[lines][columns]){
  int i, j;
  int count = 0;

  for (i = 0; i < lines; ++i)
  {
      for (j = 0; j < columns; ++j)
      {
        
        if(i == ROW-1 || j == COL - 1){
            if(array[i][j]!=-1){
                ++count;
            }
        }
      }
  }
  return count;
}

int containsKey(int n, Key *arr){
    int i;
    for ( i = 0; i < 20; i++)
    {
        if(arr[i].value == n){
            return 1;
        }
    }
    return 0;
}

//get all posible exits form matrix
void getExits (int lines, int columns, int array[lines][columns],Cell* exits){
  int i, j;
  int count = 0;

  for (i = 0; i < lines; ++i)
  {
      for (j = 0; j < columns; ++j)
      {
        
        if(i == ROW-1 || j == COL - 1){
            if(array[i][j]!=-1){
                exits[count].x = i;
                exits[count].y = j;
                count++;
            }
        }
      }
  }
}

void printCells(Cell* cells, int size){
    int k;
    for (k = 0; k < size; k++)
        {
            printf("%d/%d ",cells[k].x,cells[k].y);
        }
        printf("\n");
}

void rvereseArray(Cell* arr, int start, int end)
{
    Cell temp;
    while (start < end)
    {
        temp = arr[start];   
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }   
} 

Cell getNextCell(Cell* cells, char* str, int pos){
    int i = 0;
    char s[10];
    while (str[pos + i] !='\n' && str[pos + i]!=' ')
    {
        s[i] = str[pos + i];
        i++;
    }
    s[i] = '\0';
    int j = 0;
    char x[5]; 
    while (s[j] != '/')
    {
        x[j] = s[j];
        j++;
    }
    j++;
    char y[5]; 
    i = 0;
    while (s[j]!='\0')
    {
        y[i] = s[j];
        j++;
        i++;
    }
    Cell c;
    c.x = atoi(x);
    c.y = atoi(y);
    return c;  
}

int containsCell(Cell* cells,int size, Cell src){
    for (int i = 0; i < size; i++)
    {
        if (cells[i].x == src.x && cells[i].y == src.y){
            return 1;
        }
    }
    return 0;
}
//get index of the source cell form array from cells
int getSrcIndex(Cell* cells,int size, Cell src){
    for (int i = 0; i < size; i++)
    {
        if (cells[i].x == src.x && cells[i].y == src.y){
            return i;
        }
    }
    return -1;
}

// write recursive all posible paths in paths.txt file
void findAllPaths(int lines, int columns, int mat[lines][columns],int x, int y, char* path, FILE* paths)
{   char * copy = malloc(1000);
    strcpy(copy,path);
    

    if(x<0 || y<0 || x > ROW || y > COL){
        return;
    }
    if (x < 0 || x > lines-1 ||
            y < 0 || y > columns - 1)
        { 
            return;
        }

    if(mat[x][y]!=-1){
        int curr = mat[x][y];
        char str[10];
        sprintf(str, "%d/%d ",x,y);
        strcat(copy,str);
        mat[x][y] = -1;	
        findAllPaths(lines, columns,mat,x, y + 1, copy,paths);
        findAllPaths(lines, columns,mat,x, y - 1, copy,paths);
        findAllPaths(lines, columns,mat,x + 1, y, copy,paths);
        findAllPaths(lines, columns,mat,x - 1, y, copy,paths);
        mat[x][y] = curr;	
        fprintf(paths,"%s\n",copy);
        free(copy);

    }
    
}

int isExit(int lines, int columns, int array[lines][columns], int x, int y, Key* currentKeys){

        if(x == ROW-1 || y == COL - 1){
            
            if(array[x][y] >100 && !containsKey(array[x][y] - 100, currentKeys)){
                return 0;
            }
                
            return 1;
        }
        return 0;
}

void nullKeys(Key* keys){
    int i;
    for ( i = 0; i < 20; i++)
    {
        keys[i].value = 0;
    }
    
}
void addKey(Key* keys,int value){
    int i = 0;
    while (keys[i].value!=0)
    {
        if(keys[i].value == value){
            keys[i].movesLeft = 20;
            return;
        }
        i++;
    }
    keys[i].value = value;
    keys[i].movesLeft = 20;
    
}

int changeDirection(int n){
    if(n == 0){
        return 1;
    }
    return 0;
}
// reduce all keys value with one of value gets 0 
void reduceKeysMoves(Key* keys){
    int i;
    for (i = 0; i < 20; i++)
    {
        if(keys[i].value>0){
           keys[i].movesLeft--; 
           if(keys[i].movesLeft == 0){
               keys[i].value = 0;
           }
        }
    }
    
}

void removeKey(Key* keys, int value){
    int i;
    for ( i = 0; i < 20; i++)
    {
        if(keys[i].value == value){
            keys[i].value = 0;
        }
    }
    
}

int areKeysEmpty(Key* keys){
    int i;
    for (i = 0; i < 20; i++)
    {
        if(keys[i].value>0){
            return 0;
        }
    }
    return 1;
}
// return recursive shortest path in moves if no solution -1
int recSolution(Cell* cells, Cell src, int lines, int columns, int mat[lines][columns],
                int direction, Key* keys, int currIndex, int moves, Key* neededKeys, int iterations, int size)
{
    moves++;
    reduceKeysMoves( keys);

    if(direction == 1){
        currIndex ++;
    }
    else{
        currIndex --;
    }

    if(mat[cells[currIndex].x][cells[currIndex].y] > 0  && mat[cells[currIndex].x][cells[currIndex].y] < 100){
        
        if(containsKey(mat[cells[currIndex].x][cells[currIndex].y],neededKeys)){
            removeKey(neededKeys, mat[cells[currIndex ].x][cells[currIndex].y]);
        }
         addKey(keys,mat[cells[currIndex].x][cells[currIndex].y]);     
    }

    if(mat[cells[currIndex ].x][cells[currIndex].y] > 100){
        if(!containsKey(mat[cells[currIndex].x][cells[currIndex].y]-100,keys)){
            if(!areKeysEmpty(neededKeys) && iterations!=0){
                return -1;  
            }
            else{
                addKey(neededKeys,mat[cells[currIndex ].x][cells[currIndex].y]-100);
            }
            if(currIndex != 0){
                direction = changeDirection(direction);    
            }
        }
    }

    if(currIndex==0 || currIndex == size-1){
        direction = changeDirection(direction);
        if(iterations >0 && !areKeysEmpty(neededKeys)){
            return -1;
        }
    }

    if (isExit(lines, columns, mat, cells[currIndex].x,cells[currIndex].y, keys)){
        return moves;
    }
    iterations++;
    recSolution(cells, src, lines, columns, mat, direction, keys, currIndex, moves, neededKeys, iterations,size);

}