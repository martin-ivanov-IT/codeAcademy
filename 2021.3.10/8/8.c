#include<stdio.h>
#include<setjmp.h>
jmp_buf buf;
    void jump(){
    printf("Welcome to jump \n");
    longjmp(buf, 1);
    printf("2\n");
}
int main(){
    int x = setjmp(buf);
    printf("setjmp() = %d\n", x);
    if (x){ printf("3 in if()\n"); }
    else{ printf("4 in else\n"); longjmp(buf, 1); }
    return 0;
} 