#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node_t node_t;

typedef struct node_t{
int data;
node_t *next;
}node_t;

extern node_t *first;
extern node_t *last;

int write(int n){
node_t *p = last;
last = (node_t*)malloc(sizeof(node_t));
if(!last)return 1;
last->data = n;
last->next = NULL;
if(p != NULL) p->next = last;
if(first == NULL)//vliza samo edin pat kato se dobavi parvia elemеnt
first = last;
return 0;
}

int read(int *n){
if(first){ //Proverka za neprazna opa6ka
*n = first->data;
node_t *p = first;
first = first->next;
free(p);
return 1;
}else
return 0;
}