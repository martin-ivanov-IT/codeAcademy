// 6. Напишете функция, която получава указател към масив с числа и връща
// най-голямото от тях. 
#include <stdio.h>
#include <string.h>
#include <limits.h>
int getMax(int* arr, int n);
int main(){
    int arr[] = {1,2,3,4,5,100};
    int n = sizeof arr / sizeof arr[0];
    int max = getMax(arr, n);
    printf("%d",max);

    return 0;
}
int getMax(int* arr, int n){

    int max = INT_MIN;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        
    }
    
    return max;
    
    
}