/*Напишете функция void itob(int number, char s[], int base), която
преобразува цяло число number в низ s базиран на основа base.
Например itob( number, s[], 16) представя числото number като шеснадесетично число в
стринга s[]*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int itob();
int reverse(char* s);
int main(int argc, char* argv[]){
    int number = atoi(argv[1]);
    int base = atoi(argv[2]);
    char* s;
    s = (char*)malloc(100);
    if(s == NULL){
        return 3;
    }
    char isNegative = 0;
    if(itob(number,s,base) == 1){
        exit(1);
    }
    free(s);
    return 0;
    
 }
 int itob(int number,char* s,int base){
    if(number < 0 || base < 0 || base > 16){
         return 1;
    }

    if(s == NULL){
        return 1;
    }

     int i=0;
     int c=0;
     char m[16]="0123456789ABCDEF";
     do{
       i=number%base;
       number/=base;
       s[c]=m[i];
       c++;
       
    }    
    while(number>0);
    if(reverse(s) == 2){
        exit(2);
    }
    printf("itoB =  %s\n",s);
    return 0;
 }

 int reverse(char* s){
     if(s == NULL){
         return 2;
     }

    int i,j,temp;
    
        for (i=0,j=strlen(s)-1;i<j;i++,j--)
        {   
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
        }
    return 0;
 }