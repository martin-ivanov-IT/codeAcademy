#include <stdio.h>

extern int n;
int main(){

printf("Global variable %d \n",n);

 return 0;
}

int n = 5;