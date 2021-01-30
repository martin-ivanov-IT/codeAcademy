// Задача 6. Напишете програма на С, която чрез функция да обръща
// десетични числа в двоични.

#include <stdio.h>

int isOdd(int a);
void printBinary(int a, int arr[]);

int main(){

    int arr[10];
    int a;
    printf("Enter number\n");
    scanf("%d",&a);
    printBinary(a, arr);
    
    return 0;
}

void printBinary(int a, int arr[]){
    int i = 0;
    while (a > 0)
    {
        arr[i] = a%2;
        a/=2;
        i++;
    }
   
    for (int j = i-1; j >= 0; j--)
    {
        printf("%d",arr[j]);
    }
    
    
}

