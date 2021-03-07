typedef struct{
    int row;
    int col;
}field;

void printTable();
int getNumericValue(field f);
int isEndOfGame(field current);
int isValidMove(field next);