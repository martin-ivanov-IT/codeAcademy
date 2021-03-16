#include "tree.h"
#define SIZE 9
treeNode_t *root = NULL, *z;
treeNode_t *search_rec(treeNode_t *t, int n){
if(t != NULL)
if(t->data < n)
t = search_rec(t->right, n);
else if(t->data > n)
t = search_rec(t->left, n);
return t;
}
int main(void){
    int arr[] = {7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13};
    int i;
    for(i = 0; i < sizeof(arr)/sizeof(int); i++)
        insert(arr[i]);
    z = root;
    treeNode_t* next;
    for(i = 0; i < sizeof(arr)/sizeof(int); i++){
        next = search_rec(z,arr[i]);
        printCurr(next);
        printf("\n");
    }
    

    
    
    return 0;
}