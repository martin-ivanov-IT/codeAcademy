#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "p.h"

int add(int data){
    node_t *p = start;
    start = (node_t*)malloc(sizeof(node_t));
    if (!start) return -1;
    start->data = data;
    start->next = p;
    return 0;
}

void printAfter(node_t *curr){
    node_t *p = curr;
    while(p != NULL){
    printf("%d, ", p->data);
    p = p->next;
    }
}

int dellFirst(int *n){
    node_t *p = start;
    if(start){
    *n = start->data;
    start = start->next;
    free(p);
    return 1;
    }else
    return 0;
    //Spisaka e prazen
}

void printNth(int n)
{
    int counter = 0;
    node_t *p = start;
    while (start)
    {
        counter++;
        if (n == counter)
        {
            printf("\nThe %d-th element from the last is %d!", n, p->data);
            break;
        }

        p = p->next;
    }
}