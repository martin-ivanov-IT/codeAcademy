#include <stdio.h>
#include <stdlib.h>
int MAXSIZE = 16;
int stack[16];
int top = -1;
int isempty() {
if(top == -1)
    return 1;
    else
    return 0;
}
int isfull() {
if(top == MAXSIZE)
    return 1;
    else
    return 0;
}
int peek() {
    return stack[top];
}
int pop(int* errno) {
    int data;
    if(!isempty()) {
        data = stack[top];
        top = top - 1;
        return data;
    } 
    else {
        *errno = 2;
        printf("Could not retrieve data, Stack is empty.\n");
    }
}

int push(int data) {
    if(!isfull()) {
        top = top + 1;
        stack[top] = data;
    }

    else {
        return 3;
        printf("Could not insert data, Stack is full.\n");
    }
    return 0;
}
int main() {
    int errno = 0;
    // push items on to the stack
    if(push(3)){
        exit(3);
    }

    if(push(5)){
        exit(3);
    }
    if(push(9)){
        exit(3);
    }
    if(push(1)){
        exit(3);
    }
    if(push(12)){
        exit(3);
    }
    if(push(15)){
        exit(3);
    }
    printf("Element at top of the stack: %d\n" ,peek());
    printf("Elements: \n");
    // print stack data
    while(!isempty()) {
        int data = pop(&errno);
        if(errno){
            exit(errno);
        }
        printf("%d\n",data);
    }
    printf("Stack full: %s\n" , isfull()?"true":"false");
    printf("Stack empty: %s\n" , isempty()?"true":"false");
    return 0;
}