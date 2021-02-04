#include <stdio.h>
unsigned Factorial(unsigned uValue);

int main(){
    int n[] = {5,2,3};
    int n2 = 5;
    n[4] = 25;
    printf("%d",n[4]);
    printf("\n%d",n2);
    return 0;
}

unsigned Factorial(unsigned uValue) {
    // if (uValue < 2) {
    //     return 1;
    // } 
    //else {
        return uValue * Factorial(uValue - 1);
    //}
}
