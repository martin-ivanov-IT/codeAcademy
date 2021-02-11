// Задача 5. Пренапишете алгоритъма за сортиране без да използвате
// инкрементиращи променливи.
// void sort ( int a[], int n){
// int i, j, temp;
// for ( i = 0; i < n - 1; ++i )
// for ( j = i + 1; j < n; ++j )
// if ( a[i] > a[j] ) {
// temp = a[i];
// a[i] = a[j];
// a[j] = temp;
// }
// }
#include <stdio.h>
#include <string.h>
void sort ( int * a, int n);

int main(){

int a[] = {4,3,1,2};
sort(a,4);
for (int i = 0; i < 4; i++)
{
    printf("%d ",a[i]);
}


 return 0;
}

void sort(int* a, int n)
{ 
    int i, j, t; 
  
    for (i = 0; i < n; i++) { 
  
        for (j = i + 1; j < n; j++) { 
  
            if (*(a + j) < *(a + i)) { 
  
                t = *(a + i); 
                *(a + i) = *(a + j); 
                *(a + j) = t; 
            } 
        } 
    } 

} 