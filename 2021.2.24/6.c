
#include <stdio.h>
#define MY_PRINT(...) printf("TRACE:" __VA_ARGS__)
int main(void) {
    int a = 5;
    MY_PRINT("my numbers are: %d,%d",1,2);

return 0;
}