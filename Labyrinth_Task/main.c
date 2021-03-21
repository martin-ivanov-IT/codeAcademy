#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "data_funcs.h"
#include "solution_funcs.h"

int ROW; 
int COL;


int main(){
    FILE *dataPtr = NULL;
    FILE *pathsPtr = NULL;
    char *pathsFileName = "Paths.txt";
    char*INPUT = "INPUT3.txt";
    dataPtr = fopen (INPUT, "r");
    if(dataPtr==NULL){
        printf("Failed to open %s.\n",INPUT);
    }
    pathsPtr = fopen (pathsFileName, "wt");
    if(pathsPtr==NULL){
        printf("Failed to open %s.\n",pathsFileName);
    }
    int moves = -1;

    Cell src;

    src.x = readNextNumber(dataPtr);
    src.y = readNextNumber(dataPtr);
    COL = readNextNumber(dataPtr);
    ROW = readNextNumber(dataPtr);
    int visited[ROW][COL];
    int mat[ROW][COL];
    readData (ROW, COL, mat,dataPtr);
    char * path = malloc(1000);
    path[0] = '\0';

    int cntExits = countExits(ROW,COL,mat);
    Cell* exits;
    exits = malloc(cntExits*(sizeof(Cell)));
    getExits(ROW,COL,mat,exits);
    
    for (int i = 0; i < cntExits; i++)
    {
        findAllPaths(ROW, COL, mat,exits[i].x, exits[i].y, path,pathsPtr);
    }
    free(exits);
    fclose (pathsPtr);

    pathsPtr = fopen (pathsFileName, "r");
    while(!feof(pathsPtr)){
        char str[1000];
        fgets(str,1000,pathsPtr);
        int i = 0;
        while(str[i]){
                i++;
        }

        Cell* cells;
        cells = malloc((i/4)*(sizeof(Cell)));
        int start = 0;
        int j = 0;
        while (start < i-4){
                cells[j] = getNextCell(cells,str,start);
                start += 4;
                j++;
        }
        rvereseArray(cells,0,(i/4)-1);
        
        if(containsCell(cells,i/4,src)){
            int srcIndex = getSrcIndex(cells, i/4, src);

            Key currentKeys[20];
            Key neededKeys[20];
            nullKeys(currentKeys);
            nullKeys(neededKeys);

            int currMat[ROW][COL];
            nullMatrix(ROW, COL, currMat);
            copyPathToMatrix(ROW, COL, mat, currMat, cells, i/4);

            int currMoves = recSolution(cells, src, ROW, COL, currMat, 1, currentKeys, srcIndex, 0, neededKeys, 0, i/4 );
            if(currMoves > -1){
                moves = currMoves;
            }
            nullKeys(currentKeys);
            nullKeys(neededKeys);
            if(srcIndex!=0){
            currMoves = recSolution(cells, src, ROW, COL, currMat, 0, currentKeys, srcIndex, 0, neededKeys, 0, i/4 );
            }
            if(currMoves > -1){
                moves = currMoves;
            }
        }  
    }
    fclose (pathsPtr);
    if(moves == -1){
        printf("no exit!");
    }
    else{
        printf("final moves: %d",moves);
    }

    FILE *output = NULL;
    char *outputFileName = "OUTPUT.txt";
    output = fopen (outputFileName, "w");
    fprintf(output,"%d",moves);
    fclose (output);
    return 0;
    
} 