// Задача 2.Напишете функцията size_t my_strlen(char *s), която връща
// дължината на стринга подаден в нея. Итерирайте по масива докато стигнете
// знака за край на стринг '\0'. Увеличавайте в една променлива от тип size_t
// стойността и за всяка итерация.size_t обикновено е unsignet long int като
// размер. Върнете променливата като резултат от функцията.
#include <stdio.h>
unsigned int my_strlen(char a[]);

int main(){
 char str[] = "Hello world";
 unsigned int count = my_strlen(str);
 printf("%ld",count);
 return 0;
}

 unsigned int my_strlen(char a[]){

    unsigned int count = 0;
    for (int i = 0; a[i]!='\0'; i++)
    {
       ++count;
    }
    return count;
     
 }