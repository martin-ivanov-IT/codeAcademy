#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

typedef struct 
{
    int shortBoard;
    int longBoard;
    int smallBrecket;
    int bigBrecket;
    int screw;

} stand;

int main()
{
    stand *current = (stand *)malloc(sizeof(stand));
    stand *needed = (stand *)malloc(sizeof(stand));
    scanf("%d", &current->longBoard);
    fflush(stdin);
    scanf("%d", &current->shortBoard);
    fflush(stdin);
    scanf("%d", &current->smallBrecket);
    fflush(stdin);
    scanf("%d", &current->bigBrecket);
    fflush(stdin);
    scanf("%d", &current->screw);
    needed->longBoard = 4;
    needed->shortBoard = 6;
    needed->smallBrecket = 12;
    needed->bigBrecket = 2;
    needed->screw = 12;

    int broi[5];
    int count =  INT_MAX;

        if (count>(current->longBoard / needed->longBoard))
        {
            count = current->longBoard / needed->longBoard;
        }

        if (count>(current->longBoard / needed->longBoard))
        {
            count = current->longBoard / needed->longBoard;
        }

        if (count>(current->smallBrecket / needed->smallBrecket))
        {
            count = current->smallBrecket / needed->smallBrecket;
        }

        if (count>(current->smallBrecket / needed->smallBrecket))
        {
            count = current->smallBrecket / needed->smallBrecket;
        }

        if (count>(current->bigBrecket / needed->bigBrecket))
        {
            count = current->bigBrecket / needed->bigBrecket;
        }

        if (count>(current->screw / needed->screw))
        {
            count = current->screw / needed->screw;
        }
        
    printf("With the materials on stock (%d-dylgu dyski, %d -kysuDyski, %d-malki skobi, %d- golemi skobi, "
           ", %d-vilnta)mogat da se naprawqt %d etazherki ",
           current->longBoard, current->shortBoard,
           current->smallBrecket, current->bigBrecket, current->screw, count);
    return 0;
}
