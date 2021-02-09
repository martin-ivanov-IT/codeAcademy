// Задача 4. Даден е едномерен масив с N елемента (вие изберете
// стойност на N),напишете функция, която изчислява средната стойност на
// елементите в масива, като я връща като double float.

#include <stdio.h>
#include <string.h>
double avg(int* arr, int n);
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof arr / sizeof arr[0];
    double avgSum = avg(arr, n);
    printf("%lf",avgSum);

    return 0;
}
double avg(int* arr, int n){
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += (double)arr[i];
    }
    
    return sum/(double)n;
    
    
}