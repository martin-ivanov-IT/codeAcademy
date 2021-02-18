// Задача 14.
// Напишете програма, която да проверява дали 2 стринга (масива) са
// анаграми и имат всичките букви на другата дума. Използвайте функции.
// Примери за анаграми: реклама: карамел; босилек: обелиск
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void sortAlph(char* string){
    char temp;
	int i, j;
	int n = strlen(string);
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (string[i] > string[j]) {
					temp = string[i];
					string[i] = string[j];
					string[j] = temp;
			}
		}
	}
}
int main(){
    char firstStr[20];
    char secondStr[20];
    printf("enter first word\n");
    scanf("\n%s",firstStr);
    printf("enter second word\n");
    scanf("\n%s",secondStr);
    sortAlph(firstStr);
    sortAlph(secondStr);
    if (!strcmp(firstStr,secondStr))
    {
        printf("ther words are anagrams");
    }
    else{
        printf("the words are not anagrams");
    }
    

 return 0;
}
