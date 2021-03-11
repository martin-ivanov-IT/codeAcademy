#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("unexisting.txt", "r");
    if( NULL == fp ) {
    perror("");
    printf("\nerrno: %d : %s\n", errno, strerror(errno));
    } else {
    fclose(fp);
    }
    return 0;
    }
