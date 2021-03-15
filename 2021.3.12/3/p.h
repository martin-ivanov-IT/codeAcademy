typedef struct node_t {
    int data;
    struct node_t* next;
} node_t; 

extern node_t *start;
int add(int data);
void printAfter(node_t *curr);
int dellFirst(int *n);
void printNth(int n);