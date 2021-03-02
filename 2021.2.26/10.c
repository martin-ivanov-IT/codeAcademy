#include<stdio.h>
int main() {
    short int siValue = 13; 
    int* pnValue = (int*) &siValue;
    *pnValue = 31;
    printf("%d, %ld", siValue, *pnValue);
    char chValue = 'x'; 
    double* pdValue = (double*) &chValue;
    *pdValue = 0.0; 
    printf("%c, %f", chValue, *pdValue);
}
