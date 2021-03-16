#include "tree.h"
#define SIZE 9
treeNode_t *root = NULL, *z;
int main(void){
    int i;
    int arr[] = {7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13};
    for(i = 0; i < sizeof(arr)/sizeof(int); i++)
        insert(arr[i]);
    z = root;

    preorder(z);
    printf("\n");

    root = NULL;
    int arr2[] = {12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65};
    for(i = 0; i < sizeof(arr2)/sizeof(int); i++)
        insert(arr2[i]);

    z = root;
    preorder(z);
    printf("\n");

    root = NULL;
    int arr3[] = {4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81};
    for(i = 0; i < sizeof(arr3)/sizeof(int); i++)
        insert(arr3[i]);

    z = root;
    preorder(z);
    printf("\n");

    root = NULL;
    int arr4[] = {81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4};
    for(i = 0; i < sizeof(arr4)/sizeof(int); i++)
        insert(arr4[i]);

    z = root;
    preorder(z);
    printf("\n");

    
    
    return 0;
}