#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "structs.h"
extern int ROW;
extern int COL;


void printMatrix (int lines, int columns, int array[lines][columns]);
void nullMatrix (int lines, int columns, int array[lines][columns]);
void copyPathToMatrix(int lines, int columns, int mat[lines][columns], int currMat[lines][columns], Cell* cells, int size);
int countExits (int lines, int columns, int array[lines][columns]);
int containsKey(int n, Key *arr);
void getExits (int lines, int columns, int array[lines][columns],Cell* exits);
void printCells(Cell* cells, int size);
void rvereseArray(Cell* arr, int start, int end);
Cell getNextCell(Cell* cells, char* str, int pos);
int containsCell(Cell* cells,int size, Cell src);
int getSrcIndex(Cell* cells,int size, Cell src);
void findAllPaths(int lines, int columns, int mat[lines][columns],int x, int y, char* path, FILE* paths);
int isExit(int lines, int columns, int array[lines][columns], int x, int y, Key* currentKeys);
void nullKeys(Key* keys);
void addKey(Key* keys,int value);
int changeDirection(int n);
void reduceKeysMoves(Key* keys);
void removeKey(Key* keys, int value);
int areKeysEmpty(Key* keys);
int recSolution(Cell* cells, Cell src, int lines, int columns, int mat[lines][columns],
                int direction, Key* keys, int currIndex, int moves, Key* neededKeys, int iterations, int size);