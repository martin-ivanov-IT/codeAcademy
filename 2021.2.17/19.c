#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int* stack;
int i = 0; 
void push(int a){
    if (i!=0)
    {
        stack++;
    }
    *stack = a;
    i++;
}

int pop(){
    int n = *stack;
    stack--;
    i--;
    return n;
}
int top(){
    return *stack;
}
int isFull(){
    return !(16 - i);
}
int main(){
    stack = (int*)malloc(sizeof(int) * 16);
    printf("push 5\n");
    push(5);
    printf("top: %d\n",top());

    printf("push 6\n");
    push(6);
    printf("top: %d\n",top());
    printf("pop: %d\n",pop());
    printf("top: %d\n",top());
    printf("is full: %d\n",isFull());


 return 0;
}