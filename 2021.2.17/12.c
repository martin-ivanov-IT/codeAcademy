// Задача 12.
// Напишете програма, която да генерира парола с малки букви (i),
// специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
// Използвайте функции.
// Насоки:
// 1. Въвежда се дължина на паролата, колко символа от нея са малки
// букви (a..z), големи букви( A..Z ), колко са цифрите (0..9), колко
// специални символи (@#$%!^&*).
// 2. Използва се генератор на случайни числа за символите и тяхната
// позиция
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateSpecial(){
    int symbolsAsci[] = {'@','#','$','%','!','^','&','*'};
    int r = (rand() % (7 - 0 + 1)) + 0;
    return symbolsAsci[r];
}
int generateDigit(){
    int r = (rand() % (9 - 0 + 1)) + 0;
    return r+48;
}
int generateCapital(){
    int r = (rand() % (90 - 65 + 1)) + 65;
    return r;
}
int generateSmall(){
    int r = (rand() % (122 - 97 + 1)) + 97;
    return r;
}

int main(){
    int smallLetters,capitalLetters,special, digits, lenght;
     srand(time(NULL));
     int(*func_ptr[4])() = {generateSmall,generateCapital,generateDigit,generateSpecial};  
     printf("how long:\n");
     scanf("\n%d",&lenght);
     printf("how many small:\n");
     scanf("\n%d",&smallLetters);
     printf("how many capital:\n");
     scanf("\n%d",&capitalLetters);
     printf("how many digits:\n");
     scanf("\n%d",&digits);
     printf("how many special:\n");
     scanf("\n%d",&special);
     int sum = smallLetters + capitalLetters+special+ digits;
     if (sum!=lenght)
     {
        printf("wrong number of characters!!!");
        return 0;
     }
     
     
     int arr[4] = {smallLetters,capitalLetters,digits,special};
     char password[lenght+1];
     int i = 0;
     for (int i = 0; i < 10; i++)
     {
          int r = (rand() % (3 - 0 + 1)) + 0;
     }
     
     while (arr[0] || arr[1] || arr[2] || arr[3])
     {
        
        while (1)
        {
            int r = (rand() % (3 - 0 + 1)) + 0;
            if (arr[r]<=0)
            {
                continue;
            }
            arr[r]--;
            password[i++] = (*func_ptr[r])();
            break;
            
        }
        
     }
     password[i] = '\0';
     printf("%s",password);
     
    return 0;
}   