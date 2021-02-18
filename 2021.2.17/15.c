// Задача 15.
// Напишете програма аналог на спортния тотализатор.
// Използвайте функции.
// Насоки:
// 1. Давате право на избор на играча да избере тотализатор, в който
// ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
// 2. При всяко завъртане програмата изписва 1 произволно число,
// което не е извадено до момента.
// 3. Програмата вади числата, нужни за избраната игра (5 или 6).
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int makeTurn(int* arr, int size){
    int r = (rand() % (size - 0 + 1)) + 0;;
    while (!arr[r])
    {
        r = (rand() % (size - 0 + 1)) + 0;
    }
    int n = arr[r];
    arr[r] = 0;
    return n;
}

int main(){
int arr5to35[31];
int arr6to42[37];
int arr6to49[44];
int answer;
printf("for 5 to 35 press 1\n");
printf("for 6 to 42 press 2\n");
printf("for 6 to 49 press 3\n");
scanf("\n%d",&answer);
srand(time(NULL));
int i = 0;

for (i = 5; i < 36; i++)
{
    arr5to35[i-5] = i;
}

for (i = 6; i < 43; i++)
{
    arr6to42[i-6] = i;
}

for (i = 6; i <= 49; i++)
{
    arr6to49[i-6] = i;
}

if (answer == 1)
{
        for (int i = 0; i <= 5; i++)
        {
            int n = makeTurn(arr5to35,30);
            printf("%d ",n);
        }
}

else if (answer == 2)
{
    for (int i = 0; i <= 6; i++)
        {
            int n = makeTurn(arr6to42,30);
            printf("%d ",n);
        }

}

else if (answer == 3)
{
    for (int i = 0; i <= 6; i++)
        {
            int n = makeTurn(arr6to49,43);
            printf("%d ",n);
        } 
}
 return 0;
}
