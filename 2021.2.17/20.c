//Пробвайте с опашка(FIFO), но вече вие предложете API
//и го изпробвайте в main().
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int* queue;
int i = 0;
void offer(int a){
    
    i++;
    
    *queue = a;
    
    
}
int poll(){
   
    int n = *(queue+i-1);
    i--;
    return n;
}
int main(){
    
    queue = (int*)malloc(sizeof(int) * 16);
    offer(1);
    offer(2);
    printf("%d\n",poll());
    printf("%d\n",poll());



 return 0;
}