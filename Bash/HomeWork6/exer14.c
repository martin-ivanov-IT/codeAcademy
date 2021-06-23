/*Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции.
Примери за анаграми: реклама: карамел; босилек: обелиск*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare( const void* a, const void* b )
{
   return *(char *)a - *(char *)b;
}
int funAnagram(char *str1,char *str2);

int main(int argc, char* argv[]){
    if(funAnagram(argv[1],argv[2])){
        exit(funAnagram(argv[1],argv[2]));
    }
    

    return 0;
}

int funAnagram(char *str1,char *str2){
    int i;
    if(str2 == NULL || str1 == NULL){
        return 3;
    }
    qsort(str1, strlen(str1), sizeof str1[0], compare);
    qsort(str2,strlen(str2), sizeof str2[0], compare);
    if(strlen(str1)!=strlen(str2)){
            return 2;
        }

    for(i = 0; str1[i]; i++) {
      if(str1[i] != str2[i]) {    
         return 2;
      }
   }

   printf("Strings are anagrams! \n");
   return 0;
}